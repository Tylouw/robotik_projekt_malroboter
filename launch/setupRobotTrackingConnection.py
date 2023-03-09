from launch_ros.substitutions import FindPackageShare
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution, TextSubstitution

def generate_launch_description():
    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    FindPackageShare('ur_bringup'),
                    'launch/ur_control.launch.py'
                ])
            ]),
            launch_arguments={
                'ur_type': 'ur5e',
                'robot_ip': '141.83.19.251',
                'use_fake_hardware': 'false',
                'launch_rviz': 'false',
                'initial_joint_controller': 'joint_trajectory_controller'
            }.items()
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    FindPackageShare('ur_moveit_config'),
                    'launch/ur_moveit.launch.py'
                ])
            ]),
            launch_arguments={
                'ur_type': 'ur5e',
                'launch_rviz': 'true'
            }.items()
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    FindPackageShare('vrpn_client_ros'),
                    'launch/sample.launch.py'
                ])
            ])
        )
        

        # Node(
        #     package='move_it_service_python',
        #     executable='collision_object'
        # )
    ])