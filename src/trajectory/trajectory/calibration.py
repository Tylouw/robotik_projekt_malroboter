import sys

import rclpy
from interfaces.srv import Move
from interfaces.srv import Getpose
from rclpy.node import Node
import time 

import numpy as np
import math
import scipy
from scipy.spatial.transform import Rotation as rot
import random
import pandas as pd

calibrationPoses = [
        ([0.4,  -0.3,  0.4],  [70.0, -20.0,  80.0]),
        ([0.25,  0.0,  0.7],  [180.0,  0.0,  180.0]),
        ([0.35, -0.1,  0.7],  [160.0,  30.0,  50.0]),
        ([0.45, 0.21,  0.5],  [230.0,-30.0,  160.0]),
        ([0.40,-0.10,  0.6],  [90.0, -10.0,   90.0]),
        ([0.60,-0.20,  0.4],  [120.0 ,150.0,  78.0]),
        ([0.46,-0.32, 0.45],  [60.0,-20.0,  110.0]),  
        ([0.54,-0.33, 0.43],  [110.0 , 10.0,  10.0]),
        ([0.37,-0.19, 0.55],  [60.0,-100.0,   80.0]),
        ([0.50, 0.27, 0.36],  [140.0 ,-5.0,  130.0])
]

class MoveClient(Node):

    def __init__(self):
        super().__init__('move_client')
        self.cli = self.create_client(Move, 'move_service')
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
        self.cli = self.create_client(Getpose, 'get_gripper_pose_service')
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
    move_it_client = MoveClient()

    aMatrix = np.array([], dtype=np.int64).reshape(0,24)
    bMatrix = np.array([], dtype=np.int64).reshape(0,1)

    for calibrationPose in calibrationPoses:  
        responseMove = move_it_client.send_request(calibrationPose[0],getQuaternionFromEuler(calibrationPose[1]))
        print(' ')

        print("Punkt erreicht --------------------------------")  

        print(calibrationPose)
        print(getQuaternionFromEuler(calibrationPose[1]))

        print('pymove values')
        print(' ')

        print('Translation')
        print('x:')
        print(responseMove.pointtranslation.x)
        print('y:')
        print(responseMove.pointtranslation.y)
        print('z:')
        print(responseMove.pointtranslation.z)

        print('Orientation')
        print('x:')
        print(responseMove.pointorientation.x)
        print('y:')
        print(responseMove.pointorientation.y)
        print('z:')
        print(responseMove.pointorientation.z)
        print('w:')        
        print(responseMove.pointorientation.w)

        M = createHMatrix(  createRotationMatrix(   responseMove.pointorientation.x,
                                                    responseMove.pointorientation.y,
                                                    responseMove.pointorientation.z,
                                                    responseMove.pointorientation.w), 
                            createTranslationMatrix(responseMove.pointtranslation.x,
                                                    responseMove.pointtranslation.y,
                                                    responseMove.pointtranslation.z))

        responseGripperTracking = gripper_tracking_client.send_request(True)
        
        N = createHMatrix(  createRotationMatrix(   responseGripperTracking.pointorientation.x,
                                                    responseGripperTracking.pointorientation.y,
                                                    responseGripperTracking.pointorientation.z,
                                                    responseGripperTracking.pointorientation.w), 
                            createTranslationMatrix(responseGripperTracking.pointtranslation.x,
                                                    responseGripperTracking.pointtranslation.y,
                                                    responseGripperTracking.pointtranslation.z))

        aMatrix = np.concatenate((aMatrix, aMatrixCalculation(M,N)))
        bMatrix = np.concatenate((bMatrix, bMatrixCalculation(M)))

    wCalculation(aMatrix,bMatrix,M,N)
    gripper_tracking_client.destroy_node()
    move_it_client.destroy_node()
    rclpy.shutdown()

def getRotationPart(matrix):
    return matrix[:3,:3]

def getTranslationPart(matrix):
    return np.array([[matrix[0,3]],[matrix[1,3]], [matrix[2,3]]])

def createTranslationMatrix(x,y,z):
    return np.array([[x],[y],[z]])

def createRotationMatrix(q0,q1,q2,q3):
    return rot.from_quat([q0,q1,q2,q3]).as_matrix()

def createHMatrix(rotMatrix,transMatrix):
    return np.concatenate((np.concatenate((rotMatrix, transMatrix), axis=1), np.array([[0,0,0,1]])))         

def inverseHMatrix(H):
    rotH = getRotationPart(H).T
    return np.concatenate((np.concatenate((rotH, np.matmul(-rotH, getTranslationPart(H))), axis= 1), np.array([[0,0,0,1]])))    
 
def getQuaternionFromEuler(euler):
    return rotation_matrix_quaternion(getRotationPart(np.matmul(rotZMatrix(np.deg2rad(euler[2])),np.matmul(rotYMatrix(np.deg2rad(euler[1])),rotXMatrix(np.deg2rad(euler[0]))))))

def aMatrixCalculation(M,N):
    aiMatrix  = np.zeros((12,24))
    for group in range(4):
        for row in range(3):
            for repeat in range(3):
                aiMatrix[3*group+row,group+repeat*4]= M[row,repeat]
                aiMatrix[3*group+row,12+4*row+repeat] = -N[repeat,group]
    for row in range(3): 
        aiMatrix[9+row,15+4*row] = -1
    return aiMatrix

def bMatrixCalculation(M):
    return np.concatenate((np.zeros([9,1]),-getTranslationPart(M)))

def wCalculation(A,b,MTest,NTest):
    w = np.split(np.linalg.lstsq(A,b,rcond=None)[0],2)
    X= np.concatenate(((np.reshape(w[0],(3,4))), np.array([[0,0,0,1]])))
    Y = np.concatenate(((np.reshape(w[1],(3,4))), np.array([[0,0,0,1]])))

    currentCalibration = np.matmul(inverseHMatrix(X), np.matmul(inverseHMatrix(MTest), np.matmul(Y, NTest)))
    e_trans = math.sqrt(currentCalibration[0,3]*currentCalibration[0,3] +currentCalibration[1,3]*currentCalibration[1,3]+currentCalibration[2,3]*currentCalibration[2,3])
    e_rot   = np.rad2deg(math.acos((((currentCalibration[0,0]+currentCalibration[1,1]+currentCalibration[2,2]-1)/2)%1)))
    e_vector= 1/math.sin(np.deg2rad(e_rot))*createTranslationMatrix(currentCalibration[2,1]-currentCalibration[1,2],
                                                                    currentCalibration[0,2]-currentCalibration[2,0],
                                                                    currentCalibration[1,0]-currentCalibration[0,1])
    saveMatrix(X,'EndeffectorToMarker')
    saveMatrix(Y,'RobotBaseToTrackingSystem')

    print('currentCalibration:')
    print(currentCalibration)
    print('e_trans:')
    print(e_trans)
    print('e_rot:')
    print(e_rot)
    print('e_vector:')
    print(e_vector)

def saveMatrix(matrix,name):
    pd.DataFrame(matrix,columns=None).to_csv(name+'.csv')

def readMatrix(name):
    return pd.read_csv(name +'.csv').to_numpy()

def rotXMatrix(alpha):
    return np.array([[1, 0, 0, 0],[0,math.cos(alpha),- math.sin(alpha),0],[0, math.sin(alpha), math.cos(alpha),0],[0,0,0,1]])

def rotYMatrix(alpha):
    return np.array([[math.cos(alpha),0,math.sin(alpha),0],[0,1,0,0],[-math.sin(alpha),0,math.cos(alpha),0],[0,0,0,1]])

def rotZMatrix(alpha):
    return np.array([[math.cos(alpha),-math.sin(alpha),0,0],[math.sin(alpha),math.cos(alpha),0,0],[0,0,1,0],[0,0,0,1]])

def rotation_matrix_quaternion(R):
    q0 = math.sqrt(R[0,0]+R[1,1]+R[2,2]+1)/2
    q1 = np.sign(R[2,1]-R[1,2])*math.sqrt(R[0,0]-R[1,1]-R[2,2]+1)/2
    q2 = np.sign(R[0,2]-R[2,0])*math.sqrt(-R[0,0]+R[1,1]-R[2,2]+1)/2 
    q3 = np.sign(R[1,0]-R[0,1])*math.sqrt(-R[0,0]-R[1,1]+R[2,2]+1)/2 
    return [q0,q1,q2,q3]

if __name__ == '__main__':
    main()