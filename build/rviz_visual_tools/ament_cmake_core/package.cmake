set(_AMENT_PACKAGE_NAME "rviz_visual_tools")
set(rviz_visual_tools_VERSION "4.1.2")
set(rviz_visual_tools_MAINTAINER "Mike Lautman <mike@picknik.ai>")
set(rviz_visual_tools_BUILD_DEPENDS "qtbase5-dev" "eigen" "rclcpp" "rclcpp_components" "rviz_common" "rviz_ogre_vendor" "rviz_rendering" "rviz_default_plugins" "pluginlib" "tf2" "tf2_eigen" "eigen_stl_containers" "interactive_markers" "tf2_geometry_msgs" "sensor_msgs" "geometry_msgs" "shape_msgs" "visualization_msgs" "std_msgs" "trajectory_msgs")
set(rviz_visual_tools_BUILDTOOL_DEPENDS "ament_cmake" "eigen3_cmake_module")
set(rviz_visual_tools_BUILD_EXPORT_DEPENDS "eigen" "rclcpp" "rclcpp_components" "rviz_common" "rviz_ogre_vendor" "rviz_rendering" "rviz_default_plugins" "pluginlib" "tf2" "tf2_eigen" "eigen_stl_containers" "interactive_markers" "tf2_geometry_msgs" "sensor_msgs" "geometry_msgs" "shape_msgs" "visualization_msgs" "std_msgs" "trajectory_msgs")
set(rviz_visual_tools_BUILDTOOL_EXPORT_DEPENDS "eigen3_cmake_module")
set(rviz_visual_tools_EXEC_DEPENDS "libqt5-widgets" "ament_index_python" "rviz2" "launch" "launch_ros" "rclcpp" "rclcpp_components" "rviz_common" "rviz_ogre_vendor" "rviz_rendering" "rviz_default_plugins" "pluginlib" "tf2" "tf2_eigen" "eigen_stl_containers" "interactive_markers" "tf2_geometry_msgs" "sensor_msgs" "geometry_msgs" "shape_msgs" "visualization_msgs" "std_msgs" "trajectory_msgs")
set(rviz_visual_tools_TEST_DEPENDS "ament_cmake_gtest" "ament_lint_auto" "ament_lint_common")
set(rviz_visual_tools_GROUP_DEPENDS )
set(rviz_visual_tools_MEMBER_OF_GROUPS )
set(rviz_visual_tools_DEPRECATED "")
set(rviz_visual_tools_EXPORT_TAGS)
list(APPEND rviz_visual_tools_EXPORT_TAGS "<rviz plugin=\"plugin_description.xml\"/>")
list(APPEND rviz_visual_tools_EXPORT_TAGS "<build_type>ament_cmake</build_type>")