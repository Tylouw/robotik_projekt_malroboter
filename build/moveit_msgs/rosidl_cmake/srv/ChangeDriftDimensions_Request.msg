# For use with moveit_jog_arm Cartesian planner
#
# Allow the robot to drift along these dimensions in a smooth but unregulated way.
# Give 'true' to enable drift in the direction, 'false' to disable.
# For example, may allow wrist rotation by drift_x_rotation == true.
bool drift_x_translation
bool drift_y_translation
bool drift_z_translation
bool drift_x_rotation
bool drift_y_rotation
bool drift_z_rotation

# Not implemented as of Jan 2020 (for now assumed to be the identity matrix). In the future it will allow us to transform
# from the jog control frame to a unique drift frame, so the robot can drift along off-principal axes
geometry_msgs/Transform transform_jog_frame_to_drift_frame
