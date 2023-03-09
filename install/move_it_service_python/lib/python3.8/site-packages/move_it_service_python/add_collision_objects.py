import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from pymoveit2 import MoveIt2
from pymoveit2.robots import ur5e

from threading import Thread
import os
from geometry_msgs.msg import TransformStamped


# wall_path = path.join(
#     path.dirname(path.realpath(__file__)), "assets", "wall.stl"
# )

wall_path = os.path.join(os.getcwd(),'assets','wall.stl')

def main():

    rclpy.init()

    # Create node for this example
    node = Node("collision_object")

    # Create callback group that allows execution of callbacks in parallel without restrictions
    callback_group = ReentrantCallbackGroup()

    # Create MoveIt 2 interface
    moveit2 = MoveIt2(
        node=node,
        joint_names=ur5e.joint_names(),
        base_link_name=ur5e.base_link_name(),
        end_effector_name=ur5e.end_effector_name(),
        group_name=ur5e.MOVE_GROUP_ARM,
        callback_group=callback_group,
    )

    # Spin the node in background thread(s)
    executor = rclpy.executors.MultiThreadedExecutor(2)
    executor.add_node(node)
    executor_thread = Thread(target=executor.spin, daemon=True, args=())
    executor_thread.start()

    moveit2.add_collision_mesh(
            filepath='/home/prakt3/praktikum_ws/src/move_it_service_python/move_it_service_python/assets/ground.stl',
            id='ground',
            position=[0,0,-0.101],
            quat_xyzw=[0,0,0,1]
        )
    
    moveit2.add_collision_mesh(
            filepath='/home/prakt3/praktikum_ws/src/move_it_service_python/move_it_service_python/assets/wall.stl',
            id='wall',
            position=[-0.6,0,0],
            quat_xyzw=[ 0, 0, 0.7071068, 0.7071068 ]

        )#-0.6 in abstand roboter zur Wand
    
    moveit2.add_collision_mesh(
            filepath='/home/prakt3/praktikum_ws/src/move_it_service_python/move_it_service_python/assets/gripper.stl',
            id='gripper',
            position=[-0.033,-0.077,0.001],
            quat_xyzw=[ 0, 0, -0.7071068, 0.7071068 ],
            frame_id=ur5e.end_effector_name()
            
        )

    rclpy.shutdown()
    exit(0)



if __name__ == "__main__":
    main()