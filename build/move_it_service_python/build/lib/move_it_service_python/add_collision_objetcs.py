import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from pymoveit2 import MoveIt2
from pymoveit2.robots import ur5e
from threading import Thread

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
            filepath='assets/wall.stl',
            id=1,
            position=[0,0,0],
            quat_xyzw=[0,0,0,1]
        )

    rclpy.shutdown()
    exit(0)



if __name__ == "__main__":
    main()