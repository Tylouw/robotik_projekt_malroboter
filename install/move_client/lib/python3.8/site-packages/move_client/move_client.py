from interfaces.srv import Move
import rclpy
from rclpy.node import Node
import math
import numpy as np
from scipy.spatial.transform import Rotation as rot

class MoveClient(Node):

    def __init__(self):
        super().__init__('move_client')
        self.cli = self.create_client(Move, 'move_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Move.Request()

    def send_request(self, translation, orientation):
        # self.req.waypoints.x = [0.1795693238617293,0.1910776384645285]
        # self.req.waypoints.y = [0.6152435118851959,0.5939453306997724]
        # self.req.waypoints.z = [0.9463659960987799,0.8269321157212822]
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


def main(args=None):
    rclpy.init(args=args)
    #spiraleTranslation = [0.5,0.0,0.4] #[x,y,z]
    spiraleTranslation = [0.3, 0.0, 0.7]


    #spiraleOrientierung = [1.0,0.0,0.0,0.0] #[rx,ry,rz] in Grad
    spiraleOrientierung = [0.0, 0.0, 0.0, 1.0] 

    minimal_client = MoveClient()
    #response = minimal_client.send_request(spiraleTranslation,createQuaternion(getRotationPart(np.matmul(translationMatrix(1,3,4),rotXMatrix(np.deg2rad(180))))))
    response = minimal_client.send_request(spiraleTranslation,[0.01042646692731425, 0.7937988484947327, -0.608087590584011, -0.0020393855894516007])

    print(response)

    minimal_client.destroy_node()
    rclpy.shutdown()

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

def translationMatrix(x,y,z):
    return np.array([[1,0,0,x],[0,1,0,y],[0,0,1,z],[0,0,0,1]])

def rotXMatrix(alpha):
    return np.array([[1, 0, 0, 0],[0,math.cos(alpha),- math.sin(alpha),0],[0, math.sin(alpha), math.cos(alpha),0],[0,0,0,1]])

if __name__ == '__main__':
    main()