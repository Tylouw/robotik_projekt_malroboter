

import rclpy
from rclpy.node import Node
from interfaces.srv import Getpose

from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener




class TFService(Node):
    def __init__(self):
        super().__init__('tf_listerner')
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.create_service(Getpose, 'get_tf_pose_service',self.getTf)
    
    def getTf(self,request,response):
        try:
            print("-----------")
            print("bin bei tf")
            t = self.tf_buffer.lookup_transform('base','tool0',rclpy.time.Time())
            response.pointtranslation.x = t.transform.translation.x
            response.pointtranslation.y = t.transform.translation.y
            response.pointtranslation.z = t.transform.translation.z
            response.pointorientation.x = t.transform.rotation.x
            response.pointorientation.y = t.transform.rotation.y
            response.pointorientation.z = t.transform.rotation.z
            response.pointorientation.w = t.transform.rotation.w
            return response
            
        except TransformException as ex:
            print("Could not transform")
            return 
        
def main(args=None):
    rclpy.init(args=args)
    tfListener= TFService()
    rclpy.spin(tfListener)
    rclpy.shutdown()


if __name__ == '__main__':
    main()