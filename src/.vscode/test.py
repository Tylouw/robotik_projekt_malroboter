import numpy as np
import math
import scipy
from scipy.spatial.transform import Rotation as R
import random

A = np.array([[1,2,3,4], [5,6,7,8] , [9,10,11,12], [0,0,0,1]])
B = np.array([[21,22,23,24], [25,26,27,28] , [29,210,211,212], [0,0,0,1]])


def getRotationPart(matrix):
    return matrix[:3,:3]

def getTranslationPart(matrix):
    return np.array([[matrix[0,3]],[matrix[1,3]], [matrix[2,3]]])


def createTranslationMatrix(x,y,z):
    return np.array([[x],[y],[z]])

def inverseHMatrix(H):
    rotH = getRotationPart(H).T
    return np.concatenate((np.concatenate((rotH, np.matmul(-rotH, getTranslationPart(H))), axis= 1), np.array([[0,0,0,1]])))

def newCoordinate(OldCoord,rotX,rotY,rotZ,x,y,z):
    return np.matmul(OldCoord,np.matmul(translationMatrix(x,y,z),np.matmul(rotZMatrix(rotZ),np.matmul(rotYMatrix(rotY),rotXMatrix(rotX)))))

def createHMatrix(rotMatrix,transMatrix):
    return np.concatenate((np.concatenate((rotMatrix, transMatrix), axis=1), np.array([[0,0,0,1]])))         

def inverseHMatrix(H):
    rotH = getRotationPart(H).T
    return np.concatenate((np.concatenate((rotH, np.matmul(-rotH, getTranslationPart(H))), axis= 1), np.array([[0,0,0,1]])))    

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

def euler_from_quaternion(x, y, z, w):
    """
    Convert a quaternion into euler angles (roll, pitch, yaw)
    roll is rotation around x in radians (counterclockwise)
    pitch is rotation around y in radians (counterclockwise)
    yaw is rotation around z in radians (counterclockwise)
    """
    t0 = +2.0 * (w * x + y * z)
    t1 = +1.0 - 2.0 * (x * x + y * y)
    roll_x = math.atan2(t0, t1)
    
    t2 = +2.0 * (w * y - z * x)
    t2 = +1.0 if t2 > +1.0 else t2
    t2 = -1.0 if t2 < -1.0 else t2
    pitch_y = math.asin(t2)
    
    t3 = +2.0 * (w * z + x * y)
    t4 = +1.0 - 2.0 * (y * y + z * z)
    yaw_z = math.atan2(t3, t4)
    
    return roll_x, pitch_y, yaw_z # in radians

def rotXMatrix(alpha):
    return np.array([[1, 0, 0, 0],[0,math.cos(alpha),- math.sin(alpha),0],[0, math.sin(alpha), math.cos(alpha),0],[0,0,0,1]])

def rotYMatrix(alpha):
    return np.array([[math.cos(alpha),0,math.sin(alpha),0],[0,1,0,0],[-math.sin(alpha),0,math.cos(alpha),0],[0,0,0,1]])

def rotZMatrix(alpha):
    return np.array([[math.cos(alpha),-math.sin(alpha),0,0],[math.sin(alpha),math.cos(alpha),0,0],[0,0,1,0],[0,0,0,1]])

def translationMatrix(x,y,z):
    return np.array([[1,0,0,x],[0,1,0,y],[0,0,1,z],[0,0,0,1]])

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



def test():
    aMatrix = np.array([], dtype=np.int64).reshape(0,24)
    bMatrix = np.array([], dtype=np.int64).reshape(0,1)

    X = newCoordinate(np.identity(4), np.deg2rad(90), np.deg2rad(45),  np.deg2rad(45), 10, 0,0 )
    Y = newCoordinate(np.identity(4), np.deg2rad(33), np.deg2rad(-10), np.deg2rad(12), 0, 5,6 )


    for i in range(100):
        
        N1 = createHMatrix(R.from_euler('xyz', [random.randrange(0,360),random.randrange(0,360),random.randrange(0,360)],degrees=True).as_matrix(),
                             createTranslationMatrix(random.randrange(0,360),random.randrange(0,360),random.randrange(0,360)))
        #N1 = newCoordinate(np.identity(4), np.deg2rad(random.randrange(0,360)), np.deg2rad(random.randrange(0,360)), np.deg2rad(random.randrange(0,360)),random.randrange(0,20),  random.randrange(0,20),random.randrange(0,20))
        M1 = np.matmul(np.matmul(Y,N1),inverseHMatrix(X))
        aMatrix = np.concatenate((aMatrix, aMatrixCalculation(M1,N1)))
        bMatrix = np.concatenate((bMatrix, bMatrixCalculation(M1)))

    # aMatrix = np.concatenate((aMatrix, aMatrixCalculation(M1,N1)))
    # bMatrix = np.concatenate((bMatrix, bMatrixCalculation(M1)))
    # aMatrix = np.concatenate((aMatrix, aMatrixCalculation(M2,N2)))
    # bMatrix = np.concatenate((bMatrix, bMatrixCalculation(M2)))
    # aMatrix = np.concatenate((aMatrix, aMatrixCalculation(M3,N3)))
    # bMatrix = np.concatenate((bMatrix, bMatrixCalculation(M3)))
    # aMatrix = np.concatenate((aMatrix, aMatrixCalculation(M4,N4)))
    # bMatrix = np.concatenate((bMatrix, bMatrixCalculation(M4)))
    # print('wanted calibration')
    # print(np.matmul(inverseHMatrix(X), np.matmul(inverseHMatrix(M1), np.matmul(Y, N1))))

    wCalculation(aMatrix,bMatrix,M1,N1)

def rotation_matrix_quaternion(R):
    q0 = math.sqrt(R[0,0]+R[1,1]+R[2,2]+1)/2
    q1 = np.sign(R[2,1]-R[1,2])*math.sqrt(R[0,0]-R[1,1]-R[2,2]+1)/2
    q2 = np.sign(R[0,2]-R[2,0])*math.sqrt(-R[0,0]+R[1,1]-R[2,2]+1)/2 
    q3 = np.sign(R[1,0]-R[0,1])*math.sqrt(-R[0,0]-R[1,1]+R[2,2]+1)/2 
    return [q0,q1,q2,q3]

def getQuaternionFromEuler(anglesfuncion):
    x = anglesfuncion[2]
    y = anglesfuncion[1]
    z = anglesfuncion[0]
    return rotation_matrix_quaternion(getRotationPart(np.matmul(rotZMatrix(np.deg2rad(z)),np.matmul(rotYMatrix(np.deg2rad(y)),rotXMatrix(np.deg2rad(x))))))

# M1 = newCoordinate(np.identity(4), np.deg2rad(180.0), np.deg2rad(0.0), np.deg2rad(180.0),0.25, 0.0, 0.7)
# rotation1 = euler_from_quaternion(-0.0011350418208166957,0.009343412704765797,0.006571641191840172,0.9999341368675232)
# N1 = newCoordinate(np.identity(4),rotation1[0],rotation1[1],rotation1[2],-0.08843184262514114,0.7208053469657898,-0.8024393320083618)

# M2 = newCoordinate(np.identity(4), np.deg2rad(50.0), np.deg2rad(30.0), np.deg2rad(160.0),0.35, -0.1, 0.7)
# rotation2 = euler_from_quaternion(0.6710776090621948,0.12565496563911438,0.21231412887573242,0.6991339921951294)
# N2 = newCoordinate(np.identity(4),rotation2[0],rotation2[1],rotation2[2],-0.15879811346530914,0.6676856279373169,-0.8427479267120361)

# M3 = newCoordinate(np.identity(4), np.deg2rad(160.0), np.deg2rad(-30.0), np.deg2rad(230.0),0.45, 0.21, 0.5)
# rotation3 = euler_from_quaternion(0.04397471994161606,0.3625697195529938,-0.29933786392211914,0.8814796805381775)
# N3 = newCoordinate(np.identity(4),rotation3[0],rotation3[1],rotation3[2],-0.25501278042793274,0.5213987231254578,-0.5883616805076599)

# M4 = newCoordinate(np.identity(4), np.deg2rad(90.0), np.deg2rad(-10.0), np.deg2rad(90.0),0.40, -0.10, 0.6)
# rotation4 = euler_from_quaternion(0.5368878245353699,-0.5423528552055359,0.4598289728164673,0.45405083894729614)
# N4 = newCoordinate(np.identity(4),rotation4[0],rotation4[1],rotation4[2],-0.25841179490089417,0.5782907009124756,-0.9291174411773682)



# M1 = createHMatrix(getQuaternionFromEuler([180.0,0.0,180.0]), createTranslationMatrix(0.25, 0.0, 0.7))
# N1 = createHMatrix(quaternion_rotation_matrix(-0.0011350418208166957,0.009343412704765797,0.006571641191840172,0.9999341368675232),
#                     createTranslationMatrix(-0.08843184262514114,0.7208053469657898,-0.8024393320083618))

# M2 = createHMatrix(getQuaternionFromEuler([50.0,30.0,160.0]), createTranslationMatrix(0.35, -0.1, 0.7))
# N2 = createHMatrix(quaternion_rotation_matrix(0.6710776090621948,0.12565496563911438,0.21231412887573242,0.6991339921951294),createTranslationMatrix(-0.15879811346530914,0.6676856279373169,-0.8427479267120361))

# M3 = createHMatrix(getQuaternionFromEuler([160.0,-30.0,230.0]), createTranslationMatrix(0.45, 0.21, 0.5))
# N3 = createHMatrix(quaternion_rotation_matrix(0.04397471994161606,0.3625697195529938,-0.29933786392211914,0.8814796805381775),createTranslationMatrix(-0.25501278042793274,0.5213987231254578,-0.5883616805076599))

# M4 = createHMatrix(getQuaternionFromEuler([90.0,-10.0,90.0]), createTranslationMatrix(0.4, -0.1, 0.6))
# N4 = createHMatrix(quaternion_rotation_matrix(0.5368878245353699,-0.5423528552055359,0.4598289728164673,0.45405083894729614),createTranslationMatrix(-0.25841179490089417,0.5782907009124756,-0.9291174411773682))





def wCalculation(A,b,M0,N0):
    w = np.split(np.linalg.lstsq(A,b,rcond=None)[0],2)
    Xnew = np.concatenate(((np.reshape(w[0],(3,4))), np.array([[0,0,0,1]])))
    Ynew = np.concatenate(((np.reshape(w[1],(3,4))), np.array([[0,0,0,1]])))

    # print(np.matmul(getRotationPart(Y),getRotationPart(Y.T)))
    # print(np.matmul(getRotationPart(X),getRotationPart(X.T)))

    currentCalibration = np.matmul(inverseHMatrix(Xnew), np.matmul(inverseHMatrix(M0), np.matmul(Ynew, N0)))
    print('currentcali:')
    print(currentCalibration) 
    e_trans = math.sqrt(currentCalibration[0,3]*currentCalibration[0,3] +currentCalibration[1,3]*currentCalibration[1,3]+currentCalibration[2,3]*currentCalibration[2,3])
    print((currentCalibration[0,0]+currentCalibration[1,1]+currentCalibration[2,2]-1)/2)
    e_rot= np.rad2deg(math.acos((currentCalibration[0,0]+currentCalibration[1,1]+currentCalibration[2,2]-1)/2))


    # print('A')
    # print(A)
    print('e_trans:')
    print(e_trans)
    print('e_rot:')
    print(e_rot)

def getQuaternionFromEuler2(anglesfuncion):
    x = anglesfuncion[0]
    y = anglesfuncion[1]
    z = anglesfuncion[2]
    print( rotation_matrix_quaternion(getRotationPart(np.matmul(rotZMatrix(np.deg2rad(z)),np.matmul(rotYMatrix(np.deg2rad(y)),rotXMatrix(np.deg2rad(x)))))))
    print(  R.from_euler('zyx',[x,y,z],degrees=True).as_quat())

getQuaternionFromEuler2([40,120,-180])
