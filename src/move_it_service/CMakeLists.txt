cmake_minimum_required(VERSION 3.8)
project(move_it_service)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(interfaces REQUIRED)
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
find_package(moveit_msgs REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)

#add_executable(server src/move_server.cpp)
add_executable(move_server src/move_server.cpp)
ament_target_dependencies(move_server rclcpp interfaces moveit_msgs moveit_ros_planning_interface)

target_link_libraries (move_server Eigen3::Eigen)

install(TARGETS move_server
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
