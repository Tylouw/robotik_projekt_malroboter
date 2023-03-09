
import sys

from interfaces.srv import Move
from interfaces.srv import Getpose
import rclpy
from rclpy.node import Node
import numpy as np
import pandas as pd
import math

NUMBEROFMEASUREMENTS = 10

aMatrix = np.array([], dtype=np.int64).reshape(0,24)
bMatrix = np.array([], dtype=np.int64).reshape(0,1)

class MoveClient(Node):

    def __init__(self):
        super().__init__('move_client')
        self.cli = self.create_client(Move, 'move_it_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Move.Request()

    def send_request(self, translation, orientation):
        self.req.waypoints.x = [translation[0]]
        self.req.waypoints.y = [translation[1]]
        self.req.waypoints.z = [translation[2]]
        self.req.planeorientation.x = orientation[0]
        self.req.planeorientation.y = orientation[1]
        self.req.planeorientation.z = orientation[2]
        self.req.planeorientation.w = orientation[3]
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

class GripperTrackingClient(Node):

    def __init__(self):
        super().__init__('gripper_tracking_client')
        self.cli = self.create_client(Getpose, 'get_calibration_pose_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Getpose.Request()

    def send_request(self, eingang):
        self.req.eingang = eingang
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    gripper_tracking_client = GripperTrackingClient()
    responseGripperTracking = gripper_tracking_client.send_request(bool(sys.argv[1]))
    #minimal_client.get_logger().info(response.point.y)
    #print("x: " + str(response.point.x) + ", y: " + str(response.point.y) + ", z: " + str(response.point.z)
    move_it_client = MoveClient()
    #Übergeben an welche Pose er fahren soll
    points = generateSpiral()
    orientations = generateOrientations()
    for i in range(NUMBEROFMEASUREMENTS):         
        responseMove = move_it_client.send_request(points[i],generateOrientations[i])           
        M = createHMatrix(quaternion_rotation_matrix(responseMove.pointorientation.x,
                                                    responseMove.pointorientation.y,
                                                    responseMove.pointorientation.z,
                                                    responseMove.pointorientation.w), 
                            createTranslationMatrix(responseMove.pointtranslation.x,
                                                    responseMove.pointtranslation.y,
                                                    responseMove.pointtranslation.z))
        N = createHMatrix(quaternion_rotation_matrix(responseGripperTracking.pointorientation.x,
                                                    responseGripperTracking.pointorientation.y,
                                                    responseGripperTracking.pointorientation.z,
                                                    responseGripperTracking.pointorientation.w), 
                            createTranslationMatrix(responseGripperTracking.pointtranslation.x,
                                                    responseGripperTracking.pointtranslation.y,
                                                    responseGripperTracking.pointtranslation.z))
        aMatrix = np.concatenate(aMatrix, aMatrixCalculation(M,N))
        bMatrix = np.concatenate(bMatrix, bMatrixCalculation(M))
    wCalculation(aMatrix,bMatrix)
    move_it_client.destroy_node()
    gripper_tracking_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
    
def getRotationPart(matrix):
    return matrix[:3,:3]

def getTranslationPart(matrix):
    return np.array([[matrix.item(3,0)],[matrix.item(3,1)], [matrix.item(3,2)]])

def aMatrixCalculation(M,N):
    aiMatrix = np.array([], dtype=np.int64).reshape(0,9)
    for x in range(4):
        rtemp= np.array([], dtype=np.int64).reshape(3,0)
        for y in range(3):
            temp= N.item(y,x) * getRotationPart(M)
            rtemp = np.concatenate((rtemp, temp), axis=1)
        aiMatrix = np.concatenate((aiMatrix, rtemp))
    zeroColoumn= np.concatenate((np.zeros([9,3]), getRotationPart(M)))

    aiMatrix =  np.concatenate((aiMatrix, zeroColoumn ),axis=1)
    aiMatrix =  np.concatenate((aiMatrix, -1 * np.identity(12)), axis=1)
    return aiMatrix

def bMatrixCalculation(M):
    return np.concatenate((np.zeros([9,1]),-1 * getTranslationPart(M)))

def wCalculation(A,b):
    w = np.split(np.linalg.lstsq(A,b,rcond=None)[0],2)
    saveMatrix(np.concatenate((np.reshape(w[0],(4,3), order='F')), np.array([0,0,0,1]) ),'RobotBaseToTrackingSystem')
    saveMatrix(np.concatenate((np.reshape(w[1],(4,3), order='F')), np.array([0,0,0,1]) ) ,'EndeffectorToMarker')

def quaternion_rotation_matrix(q0,q1,q2,q3):
    r00 = 2 * (q0 * q0 + q1 * q1) - 1
    r01 = 2 * (q1 * q2 - q0 * q3)
    r02 = 2 * (q1 * q3 + q0 * q2)

    r10 = 2 * (q1 * q2 + q0 * q3)
    r11 = 2 * (q0 * q0 + q2 * q2) - 1
    r12 = 2 * (q2 * q3 - q0 * q1)

    r20 = 2 * (q1 * q3 - q0 * q2)
    r21 = 2 * (q2 * q3 + q0 * q1)
    r22 = 2 * (q0 * q0 + q3 * q3) - 1
         
    return np.array([[r00, r01, r02],[r10, r11, r12],[r20, r21, r22]])

def rotation_matrix_quaternion(R):
    q0 = math.sqrt(R[0,0]+R[1,1]+R[2,2]+1)/2
    q1 = np.sign(R[3,2]-R[2,3])*math.sqrt(R[0,0]-R[1,1]-R[2,2]+1)/2
    q2 = np.sign(R[1,3]-R[3,1])*math.sqrt(-R[0,0]+R[1,1]-R[2,2]+1)/2 
    q3 = np.sign(R[2,1]-R[1,2])*math.sqrt(-R[0,0]-R[1,1]+R[2,2]+1)/2 
    return [q0,q1,q2,q3]



def createTranslationMatrix(x,y,z):
    return np.array([[x],[y],[z]])

def createHMatrix(rotMatrix,transMatrix):
    return   np.concatenate((np.concatenate((rotMatrix, transMatrix), axis=1), np.array([0,0,0,1])))         

def saveMatrix(matrix,name):
    pd.DataFrame(matrix,columns=None).to_csv(name+'.csv')

def readMatrix(name):
    return pd.read_csv(name +'.csv').to_numpy()

def addValue(MPosition,MOrientation,NPosition,NOrientation):
    M = createHMatrix(quaternion_rotation_matrix(MOrientation),np.array(MPosition))   
    N = createHMatrix(quaternion_rotation_matrix(NOrientation),np.array(NPosition))   

    aMatrix = np.concatenate((aMatrix, aMatrixCalculation(M,N))) 
    bMatrix = np.concatenate((bMatrix, bMatrixCalculation(M,N))) 


###########################################


spiralLaenge = 0.6 #länge entlang der z-Achse wo sich die Spirale herunmdreht
spiralRadius = 0.2
umdrehungen = 0.5
gradZwPunkte = umdrehungen*360/NUMBEROFMEASUREMENTS #alle 'gradZwPunkte' Grad ein Punkt
spiraleTranslation = [-0.4,0,0.2] #[x,y,z]
spiraleOrientierung = [0,0,0] #[rx,ry,rz] in Grad


def rotXMatrix(alpha):
    return np.array([[1, 0, 0, 0],[0,math.cos(alpha),- math.sin(alpha),0],[0, math.sin(alpha), math.cos(alpha),0],[0,0,0,1]])

def rotYMatrix(alpha):
    return np.array([[math.cos(alpha),0,math.sin(alpha),0],[0,1,0,0],[-math.sin(alpha),0,math.cos(alpha),0],[0,0,0,1]])

def rotZMatrix(alpha):
    return np.array([[math.cos(alpha),-math.sin(alpha),0,0],[math.sin(alpha),math.cos(alpha),0,0],[0,0,1,0],[0,0,0,1]])

def translationMatrix(x,y,z):
    return np.array([[1,0,0,x],[0,1,0,y],[0,0,1,z],[0,0,0,1]])

def newCoordinate(OldCoord,rotX,rotY,rotZ,x,y,z):
    return np.matmul(OldCoord,np.matmul(translationMatrix(x,y,z),np.matmul(rotZMatrix(rotZ),np.matmul(rotYMatrix(rotY),rotXMatrix(rotX)))))

def newPoint(Coord,x,y,z):
    vector = np.array([[x],[y],[z],[1]])
    newVector = np.matmul(Coord, vector)
    return [newVector[0][0], newVector[1][0], newVector[2][0]]

def generateSpiral():
    points = []
    spiraleOrientierung = np.deg2rad(spiraleOrientierung)
    Coord = np.identity(4)
    startingCoord = newCoordinate(Coord,spiraleOrientierung[0],spiraleOrientierung[1],spiraleOrientierung[2], spiraleTranslation[0],spiraleTranslation[1],spiraleTranslation[2])

    for i in range(NUMBEROFMEASUREMENTS):
        rotatingCoord = newCoordinate(startingCoord,0,0,np.deg2rad(i*gradZwPunkte),0,0,i/NUMBEROFMEASUREMENTS*spiralLaenge)
        points.append(newPoint(rotatingCoord,spiralRadius,0,0))
    return points        

def generateOrientations():
    qarr= []
    for i in range(NUMBEROFMEASUREMENTS):
        degrees= 180*(i/NUMBEROFMEASUREMENTS)-90
        qarr.append(rotation_matrix_quaternion(getRotationPart(np.matmul(rotZMatrix(np.deg2rad(degrees)),np.matmul(rotYMatrix(np.deg2rad(degrees)),rotXMatrix(np.deg2rad(degrees)))))))
    return qarr
    