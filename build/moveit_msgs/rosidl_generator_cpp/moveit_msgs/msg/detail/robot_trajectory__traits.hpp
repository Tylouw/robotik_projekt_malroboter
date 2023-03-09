// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__TRAITS_HPP_

#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"
// Member 'multi_dof_joint_trajectory'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::RobotTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_trajectory:\n";
    to_yaml(msg.joint_trajectory, out, indentation + 2);
  }

  // member: multi_dof_joint_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_joint_trajectory:\n";
    to_yaml(msg.multi_dof_joint_trajectory, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::RobotTrajectory & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::RobotTrajectory>()
{
  return "moveit_msgs::msg::RobotTrajectory";
}

template<>
inline const char * name<moveit_msgs::msg::RobotTrajectory>()
{
  return "moveit_msgs/msg/RobotTrajectory";
}

template<>
struct has_fixed_size<moveit_msgs::msg::RobotTrajectory>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value && has_fixed_size<trajectory_msgs::msg::MultiDOFJointTrajectory>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::RobotTrajectory>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value && has_bounded_size<trajectory_msgs::msg::MultiDOFJointTrajectory>::value> {};

template<>
struct is_message<moveit_msgs::msg::RobotTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__TRAITS_HPP_
