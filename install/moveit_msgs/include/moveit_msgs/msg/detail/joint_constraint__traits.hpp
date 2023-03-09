// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/JointConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/joint_constraint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::JointConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_name: ";
    value_to_yaml(msg.joint_name, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: tolerance_above
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance_above: ";
    value_to_yaml(msg.tolerance_above, out);
    out << "\n";
  }

  // member: tolerance_below
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance_below: ";
    value_to_yaml(msg.tolerance_below, out);
    out << "\n";
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    value_to_yaml(msg.weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::JointConstraint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::JointConstraint>()
{
  return "moveit_msgs::msg::JointConstraint";
}

template<>
inline const char * name<moveit_msgs::msg::JointConstraint>()
{
  return "moveit_msgs/msg/JointConstraint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::JointConstraint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::JointConstraint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::JointConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__TRAITS_HPP_
