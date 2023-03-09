
import numpy as np
import pandas as pd
from scipy.spatial.transform import Rotation as rot

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

def getRotationPart(matrix):
    return matrix[:3,:3]


RobotBaseToTrackingSystem = orthonormalize_homogeneous_matrix(readMatrix("RobotBaseToTrackingSystem"))
EndeffectorToMarker = orthonormalize_homogeneous_matrix(readMatrix("EndeffectorToMarker"))


print(getRotationPart(RobotBaseToTrackingSystem))
print(readMatrix("RobotBaseToTrackingSystem"))
print(rot.from_matrix(getRotationPart(RobotBaseToTrackingSystem)).as_euler('zxy', degrees=True))
print(rot.from_matrix(getRotationPart(readMatrix("RobotBaseToTrackingSystem"))).as_euler('zxy', degrees=True))