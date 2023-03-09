import rclpy
from interfaces.srv import Getpose
from rclpy.node import Node

#from std_msgs.msg import String
from geometry_msgs.msg import PoseStamped


class PoseSubscriberService(Node):
    Punkt = [0,-69,0]
    Orientation = [0,0,0,0]
    def __init__(self):
        super().__init__('pos')
        self.pose = PoseStamped()
        self.subscription = self.create_subscription(PoseStamped,'/VacuumGripper2/pose',self.listener_callback,20)
        self.subscription  # prevent unused variable warning
        self.srv = self.create_service(Getpose,'get_gripper_pose_service', self.get_pose_callback)


    def listener_callback(self, msg):
        self.pose = msg.pose

    def get_pose_callback(self,request,response):
        response.pointtranslation.x = self.pose.position.x
        response.pointtranslation.y = self.pose.position.y
        response.pointtranslation.z = self.pose.position.z
                
        response.pointorientation.x = self.pose.orientation.x
        response.pointorientation.y = self.pose.orientation.y
        response.pointorientation.z = self.pose.orientation.z
        response.pointorientation.w = self.pose.orientation.w
        print(self.pose)
        print(response)

        return response


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = PoseSubscriberService()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()