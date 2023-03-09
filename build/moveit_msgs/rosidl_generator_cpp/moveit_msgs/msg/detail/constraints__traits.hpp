// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_

#include "moveit_msgs/msg/detail/constraints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'joint_constraints'
#include "moveit_msgs/msg/detail/joint_constraint__traits.hpp"
// Member 'position_constraints'
#include "moveit_msgs/msg/detail/position_constraint__traits.hpp"
// Member 'orientation_constraints'
#include "moveit_msgs/msg/detail/orientation_constraint__traits.hpp"
// Member 'visibility_constraints'
#include "moveit_msgs/msg/detail/visibility_constraint__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::Constraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: joint_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_constraints.size() == 0) {
      out << "joint_constraints: []\n";
    } else {
      out << "joint_constraints:\n";
      for (auto item : msg.joint_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_constraints.size() == 0) {
      out << "position_constraints: []\n";
    } else {
      out << "position_constraints:\n";
      for (auto item : msg.position_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orientation_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation_constraints.size() == 0) {
      out << "orientation_constraints: []\n";
    } else {
      out << "orientation_constraints:\n";
      for (auto item : msg.orientation_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: visibility_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.visibility_constraints.size() == 0) {
      out << "visibility_constraints: []\n";
    } else {
      out << "visibility_constraints:\n";
      for (auto item : msg.visibility_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::Constraints & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::Constraints>()
{
  return "moveit_msgs::msg::Constraints";
}

template<>
inline const char * name<moveit_msgs::msg::Constraints>()
{
  return "moveit_msgs/msg/Constraints";
}

template<>
struct has_fixed_size<moveit_msgs::msg::Constraints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::Constraints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::Constraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_
