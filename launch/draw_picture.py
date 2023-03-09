from launch_ros.actions import Node

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    picture_path = LaunchConfiguration('picture_path')

    picture_path_launch_arg = DeclareLaunchArgument(
        'picture_path',
        default_value='random/path'
    )

    trajectory = Node(
        package='trajectory',
        executable='trajectoryPlanning',
        arguments=[picture_path]
    )

    tf = Node(
        package='move_it_service_python',
        executable='tf'
    )

    move_it_service = Node(
        package='move_it_service_python',
        executable='service'
    )

    whiteboard_tracking = Node(
        package='tracking_service',
        executable='whiteboard'
    )
    
    penhold_tracking = Node(
        package='tracking_service',
        executable='penhold'
    )

    gripper_control = Node(
        package='robprakt',
        executable='vacuum_control'
    )

    ptp = Node(
        package='picture_to_points_service',
        executable='service'
    )

    return LaunchDescription([
        tf,
        whiteboard_tracking,
        move_it_service,
        ptp,
        picture_path_launch_arg,
        penhold_tracking,
        #gripper_control,
        trajectory
    ])