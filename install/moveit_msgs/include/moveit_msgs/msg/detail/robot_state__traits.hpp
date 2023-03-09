// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'multi_dof_joint_state'
#include "sensor_msgs/msg/detail/multi_dof_joint_state__traits.hpp"
// Member 'attached_collision_objects'
#include "moveit_msgs/msg/detail/attached_collision_object__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_state:\n";
    to_yaml(msg.joint_state, out, indentation + 2);
  }

  // member: multi_dof_joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_joint_state:\n";
    to_yaml(msg.multi_dof_joint_state, out, indentation + 2);
  }

  // member: attached_collision_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attached_collision_objects.size() == 0) {
      out << "attached_collision_objects: []\n";
    } else {
      out << "attached_collision_objects:\n";
      for (auto item : msg.attached_collision_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_diff: ";
    value_to_yaml(msg.is_diff, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::RobotState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::RobotState>()
{
  return "moveit_msgs::msg::RobotState";
}

template<>
inline const char * name<moveit_msgs::msg::RobotState>()
{
  return "moveit_msgs/msg/RobotState";
}

template<>
struct has_fixed_size<moveit_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
