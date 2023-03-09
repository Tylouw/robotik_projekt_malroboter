from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='move_it_service_python',
            executable='service'
        ),
        Node(
            package='move_it_service_python',
            executable='tf'
        ),
        Node(
            package='tracking_service',
            executable='gripper'
        ),
        Node(
            package='trajectory',
            executable='calibration'
        )
        # Node(
        #     package='move_it_service_python',
        #     executable='collision_object'
        # )
    ])