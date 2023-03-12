#  Drawing Robot
## Context
This research project was conducted at the Institute of Robotics and Autonomous Systems of the University of Lübeck.
Our goal was to use the 6-axis robot, UR5e, alongside the ROS2 and Motion Planning Framework Moveit2 to draw provided images with multiple colors. Additionally, 
the Optitrack motion capture system was utilized to track the robot's end-effector, whiteboard, and penholder.
## Hand-Eye-Calibration
The primary step of the project was to properly calibrate the robot. This was accomplished by providing 10 poses which are linearly independent and utilizing a 
least-square approach to solve the linear equation.
## Drawing
The drawing process is enabled through an edge detection algorithm used to draw Bezier curves from the extracted waypoints. After that, the robot is tasked with 
following the user-defined number of steps, frequently switching out the colors located in the penholder.





