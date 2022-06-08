import sys
sys.path.insert(1, '../../../sbock_custom_interface')
sys.path.insert(1, '../sbock_service_navigation')
from initial_pose_pub import Service_ini_pos as f
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped
from sbock_custom_interface.srv import IniPose

import math


def test_calc_angular():
    assert f.calc_time(f, 1, 2) == 3
    assert f.calc_time(f, 2, 7) == 9