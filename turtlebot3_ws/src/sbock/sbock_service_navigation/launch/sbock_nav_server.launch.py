from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sbock_service_navigation',
            executable='nav_pose',
            output='screen'
        ),

        
    ])
