#!/usr/bin/env python3
"""
Example of using MoveIt 2 Servo to perform a circular motion.
`ros2 run pymoveit2 ex_servo_ur.py`
"""

from interfaces.srv import Move
import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from threading import Thread
from pymoveit2 import MoveIt2
from pymoveit2.robots import ur5e
from os import path

import rospy
from interfaces.srv import Getpose



# DEFAULT_EXAMPLE_MESH = path.join(
#     path.dirname(path.realpath(__file__)), "assets", "GripperProximity.STL"
# )

        
class TFClient(Node):
    def __init__(self):
        super().__init__('tf_tracking_client')
        self.cli = self.create_client(Getpose, 'get_tf_pose_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Getpose.Request()

    def send_request(self, eingang):
        self.req.eingang = eingang
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

class MovePython(Node):
    def __init__(self):
        super().__init__('move_service')
        self.srv = self.create_service(Move,'move_service', self.move_callback)
        self.tf_client = TFClient()
        self.node = Node("execute_movement")
        self.callback_group = ReentrantCallbackGroup()
        # Create MoveIt 2 interface
        self.moveit2 = MoveIt2(
            node=self.node,
            joint_names=ur5e.joint_names(),
            base_link_name=ur5e.base_link_name(),
            end_effector_name=ur5e.end_effector_name(),
            group_name=ur5e.MOVE_GROUP_ARM,
            callback_group=self.callback_group,
        )
        
        # self.moveit2.add_collision_mesh(
        #     filepath = DEFAULT_EXAMPLE_MESH,
        #     id  =  "endeffector",
        #     position = [0.0, 0.0,0.12],
        #     quat_xyzw = [0.0,0.0,1.0,0.0],
        #     frame_id = 'tool0'
        # )

        # Spin the node in background thread(s)
        executor = rclpy.executors.MultiThreadedExecutor(2)
        executor.add_node(self.node)
        executor_thread = Thread(target=executor.spin, daemon=True, args=())
        executor_thread.start()

   
    def move_callback(self, request, response):
        planeOrientation = [request.planeorientation.x, request.planeorientation.y, request.planeorientation.z, request.planeorientation.w]
        print("I heard: " , planeOrientation)

        waypoints=[]
        for i in range(len(request.waypoints.x)):
            waypoints.append([request.waypoints.x[i],request.waypoints.y[i],request.waypoints.z[i]])


        for i in waypoints:
            self.moveit2.move_to_pose(position=i, quat_xyzw=planeOrientation, cartesian=True)
            self.moveit2.wait_until_executed()
            print(i)
        tf = self.tf_client.send_request(True)
        response.pointtranslation.x = tf.pointtranslation.x
        response.pointtranslation.y = tf.pointtranslation.y
        response.pointtranslation.z = tf.pointtranslation.z
        response.pointorientation.x = tf.pointorientation.x
        response.pointorientation.y = tf.pointorientation.y
        response.pointorientation.z = tf.pointorientation.z
        response.pointorientation.w = tf.pointorientation.w
        return response


def main(args=None):
    rclpy.init(args=args)
    movePython = MovePython()
    rclpy.spin(movePython)
    rclpy.shutdown()



if __name__ == "__main__":
    main()

# Get parameters



    

    

    
