import sys

from interfaces.srv import Picturetopoints
from interfaces.srv import Move
from interfaces.srv import Getpose
from interfaces.srv import SetUrIo
import pandas as pd
import numpy as np
import math
import rclpy
import time
from rclpy.node import Node
from scipy.spatial.transform import Rotation as rot
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D


# WHITEBOARDSIZEX = 0.880
# WHITEBOARDSIZEY = 1.045
WHITEBOARDSIZEX = 0.45
WHITEBOARDSIZEY = 0.45
DISTANCEGRIPPERTOTIP = 0.1195
HOVERDISTANCE = 0.07 #distance from Whiteboard when travelling
BUFFERPERCENTAGE = 0.15
PENHOLDCORRECTION = -0.005
TRANSLATIONERROR = (-0.001,0.00)
WHITEBOARDROTATIONFIX = 0.60


COLORS = {
    "black":0,
    "purple":1,
    "pink":2,
    "orange":3,
    "cyan":4,
    "dark_blue":5
}

PENHOLDPOSITIONS = [
    [0.015,0.035],
    [0.075,0.035],
    [0.015,0.0925],
    [0.075,0.0925],
    [0.015,0.15],
    [0.075,0.15]
]

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

    usedColors = ["dark_blue","purple","pink", "orange", "cyan"]
    currentColor = usedColors[0]
    picture_to_points_client = PicturetoPointsClient()
    move_client = MoveClient()
    whiteboard_tracking_client = WhiteboardTrackingClient()
    #gripper_control_client = GripperControl()
    penhold_tracking_client = PenholdTrackingClient()
    
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

    index = 0
    for curvePoints in drawingPoints:

        if index % 10 ==0:
            currentColor = chooseNextColor(usedColors,currentColor)
            penholdTransformation = readTransformedMatrix(penhold_tracking_client)
        # choosePen(penholdTransformation,move_client ,gripper_control_client,currentColor, 1)
            choosePen(penholdTransformation,move_client,currentColor)

        index+=1

        whiteboardTransformation = readTransformedMatrix(whiteboard_tracking_client)
        whiteboardTransformation = np.matmul(whiteboardTransformation,rotYMatrix(np.deg2rad(WHITEBOARDROTATIONFIX)) )
        whiteboardTransformation = np.matmul(whiteboardTransformation,rotXMatrix(np.deg2rad(-WHITEBOARDROTATIONFIX)) )

        movingpoints= [newPoint(whiteboardTransformation,curvePoints[0][0], curvePoints[0][1],HOVERDISTANCE)]
        for segmentPoint in curvePoints:
            movingpoints.append(newPoint(whiteboardTransformation,segmentPoint[0], segmentPoint[1],0))
        movingpoints.append(newPoint(whiteboardTransformation,curvePoints[len(curvePoints)-1][0], curvePoints[len(curvePoints)-1][1],HOVERDISTANCE))

        move_client.send_request(movingpoints, createQuaternion(getRotationPart(np.matmul(whiteboardTransformation,rotXMatrix(math.pi)))))
        
        if index % 10 ==0:
            penholdTransformation = readTransformedMatrix(penhold_tracking_client)
        # choosePen(penholdTransformation,move_client ,gripper_control_client,currentColor, 0)
            choosePen(penholdTransformation,move_client,currentColor)

        


    picture_to_points_client.destroy_node()
    move_client.destroy_node()
    #gripper_control_client.destroy_node()
    penhold_tracking_client.destroy_node()
    whiteboard_tracking_client.destroy_node()
    rclpy.shutdown()

def readTransformedMatrix(client):
    tracking_response = client.send_request(True)
    MarkertoTracking = createHMatrix( createRotationMatrix(
                                                        tracking_response.pointorientation.x,
                                                        tracking_response.pointorientation.y,
                                                        tracking_response.pointorientation.z,
                                                        tracking_response.pointorientation.w), 
                                                    createTranslationMatrix(
                                                        tracking_response.pointtranslation.x,
                                                        tracking_response.pointtranslation.y,
                                                        tracking_response.pointtranslation.z))
    return transformMarkerToRobotbase(MarkertoTracking)

def choosePen(penholdTransformation,move_client, color):
        movingpoints= [newPoint(penholdTransformation,getPositionFromColor(color)[0],getPositionFromColor(color)[1],HOVERDISTANCE)]
        movingpoints.append(newPoint(penholdTransformation,getPositionFromColor(color)[0],getPositionFromColor(color)[1],-DISTANCEGRIPPERTOTIP+PENHOLDCORRECTION))
        move_client.send_request(movingpoints, createQuaternion(getRotationPart(np.matmul(penholdTransformation,rotXMatrix(math.pi)))))
        time.sleep(3)
        movingpoints= [newPoint(penholdTransformation,getPositionFromColor(color)[0],getPositionFromColor(color)[1],HOVERDISTANCE)]
        move_client.send_request(movingpoints, createQuaternion(getRotationPart(np.matmul(penholdTransformation,rotXMatrix(math.pi)))))

# def choosePen(penholdTransformation,move_client,gripper_control_client, color, gripperValue):
#         movingpoints= [newPoint(penholdTransformation,getPositionFromColor(color)[0],getPositionFromColor(color)[1],HOVERDISTANCE)]
#         movingpoints.append(newPoint(penholdTransformation,getPositionFromColor(color)[0],getPositionFromColor(color)[1],-DISTANCEGRIPPERTOTIP+PENHOLDCORRECTION))
#         move_client.send_request(movingpoints, createQuaternion(getRotationPart(np.matmul(penholdTransformation,rotXMatrix(math.pi)))))
#         gripper_control_client.send_request(gripperValue)
#         movingpoints= [newPoint(penholdTransformation,getPositionFromColor(color)[0],getPositionFromColor(color)[1],HOVERDISTANCE)]
#         move_client.send_request(movingpoints, createQuaternion(getRotationPart(np.matmul(penholdTransformation,rotXMatrix(math.pi)))))

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

def rotYMatrix(alpha):
    return np.array([[math.cos(alpha),0,math.sin(alpha),0],[0,1,0,0],[-math.sin(alpha),0,math.cos(alpha),0],[0,0,0,1]])

def readMatrix(name):
    return pd.read_csv(name +'.csv').to_numpy()[:,1:]
    

def orthonormalize_homogeneous_matrix(H):
    R = H[:3,:3]
    t = H[:3,3]
    Q, _ = np.linalg.qr(R)
    S = np.diag(np.sign(np.diag(Q)))
    Q = np.dot(Q, S)
    H_new = np.eye(4)
    H_new[:3,:3] = Q
    H_new[:3,3] = t
    return H_new


RobotBaseToTrackingSystem = readMatrix("RobotBaseToTrackingSystem")
EndeffectorToMarker = readMatrix("EndeffectorToMarker")

def transformMarkerToRobotbase(MarkertoTracking):
    return np.matmul(RobotBaseToTrackingSystem,np.matmul(MarkertoTracking,translationMatrix(0,0,EndeffectorToMarker[2,3]+DISTANCEGRIPPERTOTIP)))
    
def scalePictureforWhiteboard(x,y,xMax,yMax):
    whiteboardSize =0
    if(WHITEBOARDSIZEX >= WHITEBOARDSIZEY):
        whiteboardSize = WHITEBOARDSIZEX
    else:
        whiteboardSize = WHITEBOARDSIZEY

    scaledX= whiteboardSize*(1-BUFFERPERCENTAGE )/xMax *x +(BUFFERPERCENTAGE /2* whiteboardSize)
    scaledY= whiteboardSize*(1-BUFFERPERCENTAGE )/yMax *y +(BUFFERPERCENTAGE /2* whiteboardSize)
    return  (scaledX,scaledY)


def chooseNextColor(colors, currentColor):
    return colors[(colors.index(currentColor)+1)%len(colors)]


def getPositionFromColor(color):
    return (PENHOLDPOSITIONS[COLORS[color]][0]+TRANSLATIONERROR[0],PENHOLDPOSITIONS[COLORS[color]][1]+TRANSLATIONERROR[1])


if __name__ == '__main__':
    main()