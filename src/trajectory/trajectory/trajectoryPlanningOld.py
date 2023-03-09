import sys

from interfaces.srv import Picturetopoints
from interfaces.srv import Move
from interfaces.srv import Getpose
from interfaces.srv import SetUrIo
import pandas as pd
import numpy as np
import math
import rclpy
from rclpy.node import Node
from scipy.spatial.transform import Rotation as rot
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D


# WHITEBOARDSIZEX = 0.880
# WHITEBOARDSIZEY = 1.045
WHITEBOARDSIZEX = 0.4
WHITEBOARDSIZEY = 0.4
DISTANCEGRIPPERTOTIP = 0.115
HOVERDISTANCE = 0.05 #distance from Whiteboard when travelling

class MoveClient(Node):

    def __init__(self):
        super().__init__('move_client')
        self.cli = self.create_client(Move, 'move_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Move.Request()

    def send_request(self, translations, orientation):
        xTranslations =[]
        yTranslations =[]
        zTranslations =[]
        for translation in translations:
            xTranslations.append(translation[0])
            yTranslations.append(translation[1])
            zTranslations.append(translation[2])           

        self.req.waypoints.x = xTranslations
        self.req.waypoints.y = yTranslations
        self.req.waypoints.z = zTranslations
        self.req.planeorientation.x = orientation[0]
        self.req.planeorientation.y = orientation[1]
        self.req.planeorientation.z = orientation[2]
        self.req.planeorientation.w = orientation[3]
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


class PicturetoPointsClient(Node):

    def __init__(self):
        super().__init__('picture_to_points_client')
        self.cli = self.create_client(Picturetopoints, 'picture_to_points')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Picturetopoints.Request()

    def send_request(self, path):
        self.req.path = path
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
        
class WhiteboardTrackingClient(Node):

    def __init__(self):
        super().__init__('whiteboard_tracking_client')
        self.cli = self.create_client(Getpose, 'get_whiteboard_pose_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Getpose.Request()

    def send_request(self, eingang):
        self.req.eingang = eingang
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

class PenholdTrackingClient(Node):

    def __init__(self):
        super().__init__('penhold_client')
        self.cli = self.create_client(Getpose, 'get_penhold_pose_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Getpose.Request()

    def send_request(self, eingang):
        self.req.eingang = eingang
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


class GripperControl(Node):
    
    def __init__(self):
        super().__init__('gripper_control_client')
        self.cli = self.create_client(SetUrIo, 'vacuum_control')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetUrIo.Request()

    def send_request(self, set):
        self.req.set = set
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):

    rclpy.init(args=args)

    usedColors = ["black", "purple"]
    picture_to_points_client = PicturetoPointsClient()
    move_client = MoveClient()
    whiteboard_tracking_client = WhiteboardTrackingClient()
    #gripper_control_client = GripperControl()
    #penhold_tracking_client = PenholdTrackingClient()
    #gripper_control_response = gripper_control_client.send_request(1)
    
    picture_to_points_response = picture_to_points_client.send_request(sys.argv[1])
    xPointPositions= picture_to_points_response.points.x 
    yPointPositions= picture_to_points_response.points.y 
    curvesLength = picture_to_points_response.points.curves 
    xPictureSize, yPictureSize = picture_to_points_response.points.size
    
    drawingPoints=[]
    index=0
    for curveIndex in curvesLength:
        curvePoints= []
        for segmentPoint in range(curveIndex):
            curvePoints.append(scalePictureforWhiteboard(xPointPositions[index],yPointPositions[index], xPictureSize,yPictureSize ))
            index+=1
        drawingPoints.append(curvePoints)


    for curvePoints in drawingPoints:
        whiteboard_tracking_response = whiteboard_tracking_client.send_request(True)
        WhiteBoardMarkertoTracking = createHMatrix( createRotationMatrix(
                                                        whiteboard_tracking_response.pointorientation.x,
                                                        whiteboard_tracking_response.pointorientation.y,
                                                        whiteboard_tracking_response.pointorientation.z,
                                                        whiteboard_tracking_response.pointorientation.w), 
                                                    createTranslationMatrix(
                                                        whiteboard_tracking_response.pointtranslation.x,
                                                        whiteboard_tracking_response.pointtranslation.y,
                                                        whiteboard_tracking_response.pointtranslation.z))
        WhiteboardTransformation = transformWhiteboardToRobotbase(WhiteBoardMarkertoTracking)
        movingpoints= [newPoint(WhiteboardTransformation,curvePoints[0][0], curvePoints[0][1],HOVERDISTANCE)]
        for segmentPoint in curvePoints:
            movingpoints.append(newPoint(WhiteboardTransformation,segmentPoint[0], segmentPoint[1],0))
        
        movingpoints.append(newPoint(WhiteboardTransformation,curvePoints[len(curvePoints)-1][0], curvePoints[len(curvePoints)-1][1],HOVERDISTANCE))
        move_client.send_request(movingpoints, createQuaternion(getRotationPart(np.matmul(WhiteboardTransformation,rotXMatrix(math.pi)))))

    # fig = plt.figure()
    # ax = fig.add_subplot(111,projection='3d')
    # for point in movingpoints:
    #     ax.scatter( point[0], point[1],point[2] )
    # ax.set_xlabel("x")
    # ax.set_ylabel("y")
    # ax.set_zlabel("z")
    # plt.show()
    


    
    picture_to_points_client.destroy_node()
    move_client.destroy_node()
    # gripper_control_client.destroy_node()
    # penhold_tracking_client.destroy_node()
    whiteboard_tracking_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


def getRotationPart(matrix):
    return matrix[:3,:3]

def getTranslationPart(matrix):
    return np.array([[matrix[0,3]],[matrix[1,3]], [matrix[2,3]]])


def createTranslationMatrix(x,y,z):
    return np.array([[x],[y],[z]])

def createRotationMatrix(q0,q1,q2,q3):
    return rot.from_quat([q0,q1,q2,q3]).as_matrix()

def createQuaternion(R):
    return rot.from_matrix(R).as_quat()

def createHMatrix(rotMatrix,transMatrix):
    return np.concatenate((np.concatenate((rotMatrix, transMatrix), axis=1), np.array([[0,0,0,1]])))         

def inverseHMatrix(H):
    rotH = getRotationPart(H).T
    return np.concatenate((np.concatenate((rotH, np.matmul(-rotH, getTranslationPart(H))), axis= 1), np.array([[0,0,0,1]])))    

def newPoint(Coord,x,y,z):
    vector = np.array([[x],[y],[z],[1]])
    newVector = np.matmul(Coord, vector)
    return [newVector[0][0], newVector[1][0], newVector[2][0]]

def translationMatrix(x,y,z):
    return np.array([[1,0,0,x],[0,1,0,y],[0,0,1,z],[0,0,0,1]])

def rotXMatrix(alpha):
    return np.array([[1, 0, 0, 0],[0,math.cos(alpha),- math.sin(alpha),0],[0, math.sin(alpha), math.cos(alpha),0],[0,0,0,1]])

def readMatrix(name):
    return pd.read_csv(name +'.csv').to_numpy()[:,1:]
    
RobotBaseToTrackingSystem = readMatrix("RobotBaseToTrackingSystem")
EndeffectorToMarker = readMatrix("EndeffectorToMarker")

def transformWhiteboardToRobotbase(MarkertoTracking):
    # return np.matmul(RobotBaseToTrackingSystem,np.matmul(MarkertoTracking,inverseHMatrix(EndeffectorToMarker)))
    return np.matmul(RobotBaseToTrackingSystem,np.matmul(MarkertoTracking,translationMatrix(0,0,EndeffectorToMarker[2,3]+DISTANCEGRIPPERTOTIP)))
    
    

def scalePictureforWhiteboard(x,y,xMax,yMax):
    bufferPercentage= 0.1
    WHITEBOARDSIZE =0
    if(WHITEBOARDSIZEX >= WHITEBOARDSIZEY):
        WHITEBOARDSIZE = WHITEBOARDSIZEX
    else:
        WHITEBOARDSIZE = WHITEBOARDSIZEY

    scaledX= WHITEBOARDSIZE*(1-bufferPercentage)/xMax *x +(bufferPercentage/2* WHITEBOARDSIZE)
    scaledY= WHITEBOARDSIZE*(1-bufferPercentage)/yMax *y +(bufferPercentage/2* WHITEBOARDSIZE)
    return  (scaledX,scaledY)

colors = {
    "black":0,
    "purple":1,
    "pink":2,
    "orange":3,
    "green":4,
    "dark_blue":5
}

positions = [[0.0015,0.0035],
            [0.0075,0.0035],
            [0.0015,0.00925],
            [0.0075,0.00925],
            [0.0015,0.015],
            [0.0075,0.015]]

def getPositionFromColor(color):
    return translationMatrix(positions[colors[color]][0],positions[colors[color]][1],positions[colors[color]][2],0)