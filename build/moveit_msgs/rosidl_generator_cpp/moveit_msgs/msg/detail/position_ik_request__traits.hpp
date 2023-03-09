// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__TRAITS_HPP_

#include "moveit_msgs/msg/detail/position_ik_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"
// Member 'pose_stamped'
// Member 'pose_stamped_vector'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::PositionIKRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state:\n";
    to_yaml(msg.robot_state, out, indentation + 2);
  }

  // member: constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constraints:\n";
    to_yaml(msg.constraints, out, indentation + 2);
  }

  // member: avoid_collisions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoid_collisions: ";
    value_to_yaml(msg.avoid_collisions, out);
    out << "\n";
  }

  // member: ik_link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ik_link_name: ";
    value_to_yaml(msg.ik_link_name, out);
    out << "\n";
  }

  // member: pose_stamped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_stamped:\n";
    to_yaml(msg.pose_stamped, out, indentation + 2);
  }

  // member: ik_link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ik_link_names.size() == 0) {
      out << "ik_link_names: []\n";
    } else {
      out << "ik_link_names:\n";
      for (auto item : msg.ik_link_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_stamped_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_stamped_vector.size() == 0) {
      out << "pose_stamped_vector: []\n";
    } else {
      out << "pose_stamped_vector:\n";
      for (auto item : msg.pose_stamped_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout:\n";
    to_yaml(msg.timeout, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::PositionIKRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::PositionIKRequest>()
{
  return "moveit_msgs::msg::PositionIKRequest";
}

template<>
inline const char * name<moveit_msgs::msg::PositionIKRequest>()
{
  return "moveit_msgs/msg/PositionIKRequest";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PositionIKRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PositionIKRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PositionIKRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__TRAITS_HPP_
