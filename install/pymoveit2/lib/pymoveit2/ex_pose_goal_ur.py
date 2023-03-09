#!/usr/bin/env python3
"""
Example of moving to a pose goal.
`ros2 run pymoveit2 ex_pose_goal_ur.py --ros-args -p position:="[0.25, 0.0, 1.0]" -p quat_xyzw:="[0.0, 0.0, 0.0, 1.0]" -p cartesian:=False`
"""

from threading import Thread

import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node

from pymoveit2 import MoveIt2
from pymoveit2.robots import ur5e
import time


##################################################
import math
import numpy as np

spiralLaenge = 0.6 #länge entlang der z-Achse wo sich die Spirale herunmdreht
spiralRadius = 0.2
gradZwPunkte = 10 #alle 'gradZwPunkte' Grad ein Punkt
umdrehungen = 4
spiraleTranslation = [-0.4,0,0.4] #[x,y,z]
spiraleOrientierung = [0,0,0] #[rx,ry,rz] in Grad
points = []

def rotXMatrix(alpha):
    return np.array([[1, 0, 0, 0],[0,math.cos(alpha),- math.sin(alpha),0],[0, math.sin(alpha), math.cos(alpha),0],[0,0,0,1]])

def rotYMatrix(alpha):
    return np.array([[math.cos(alpha),0,math.sin(alpha),0],[0,1,0,0],[-math.sin(alpha),0,math.cos(alpha),0],[0,0,0,1]])

def rotZMatrix(alpha):
    return np.array([[math.cos(alpha),-math.sin(alpha),0,0],[math.sin(alpha),math.cos(alpha),0,0],[0,0,1,0],[0,0,0,1]])

def translationMatrix(x,y,z):
    return np.array([[1,0,0,x],[0,1,0,y],[0,0,1,z],[0,0,0,1]])

def newCoordinate(OldCoord,rotX,rotY,rotZ,x,y,z):
    return np.matmul(OldCoord,np.matmul(translationMatrix(x,y,z),np.matmul(rotZMatrix(rotZ),np.matmul(rotYMatrix(rotY),rotXMatrix(rotX)))))


def newPoint(Coord,x,y,z):
    vector = np.array([[x],[y],[z],[1]])
    newVector = np.matmul(Coord, vector)
    return [newVector[0][0], newVector[1][0], newVector[2][0]]

spiraleOrientierung = np.deg2rad(spiraleOrientierung)
Coord = np.identity(4)
startingCoord = newCoordinate(Coord,spiraleOrientierung[0],spiraleOrientierung[1],spiraleOrientierung[2], spiraleTranslation[0],spiraleTranslation[1],spiraleTranslation[2])

anzPunkte = umdrehungen*360/gradZwPunkte
for i in range(int(anzPunkte)):
    rotatingCoord = newCoordinate(startingCoord,0,0,np.deg2rad(i*gradZwPunkte),0,0,i/anzPunkte*spiralLaenge)
    points.append(newPoint(rotatingCoord,spiralRadius,0,0))
    #print(str(points[len(points)-1][0]) + "," + str(points[len(points)-1][1]) + "," + str(points[len(points)-1][2]))
################################################## 
    
def main():

    rclpy.init()

    # Create node for this example
    node = Node("ex_pose_goal_ur")

    # Declare parameters for position and orientation
    node.declare_parameter("position", [-0.5, 0.0, 0.2])
    node.declare_parameter("quat_xyzw", [1.0, 0.0, 0.0, 0.0])
    node.declare_parameter("cartesian", True               )

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

    # Get parameters
    position = node.get_parameter("position").get_parameter_value().double_array_value
    quat_xyzw = node.get_parameter("quat_xyzw").get_parameter_value().double_array_value
    cartesian = node.get_parameter("cartesian").get_parameter_value().bool_value

    # Move to pose
    node.get_logger().info(
        f"Moving to {{position: {list(position)}, quat_xyzw: {list(quat_xyzw)}}}"
    )
    
    for i in points:
        print(i)
        moveit2.move_to_pose(position=i, quat_xyzw=quat_xyzw, cartesian=cartesian)
        moveit2.wait_until_executed()   
    rclpy.shutdown()
    exit(0)
    
    
    
if __name__ == "__main__":
    main()
