from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch.substitutions import FindExecutable

def generate_launch_description():
 

    ld = LaunchDescription()

    ptp_service = Node(
        package="picture_to_points_service",
        executable="service",
    )

    ptp_client = Node(
        package="picture_to_points_service",
        executable="client"
    )


    ld.add_action(ptp_service)
    ld.add_action(ptp_client)
    ld.add_action(
        ExecuteProcess(
        cmd=[[
            FindExecutable(name='ros2'),
            "service call ",
            "/ptp_service",
            "/interfaces/srv/Picturetopoints",
            "\"{path: '/home/prakt3/Pictures/Wojak_cropped.jpg'}\"",
        ]],
        shell=True
    )
    )

    return ld