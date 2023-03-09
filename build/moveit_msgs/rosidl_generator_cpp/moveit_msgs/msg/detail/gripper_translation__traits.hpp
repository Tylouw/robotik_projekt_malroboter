// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/GripperTranslation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__TRAITS_HPP_

#include "moveit_msgs/msg/detail/gripper_translation__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::GripperTranslation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction:\n";
    to_yaml(msg.direction, out, indentation + 2);
  }

  // member: desired_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_distance: ";
    value_to_yaml(msg.desired_distance, out);
    out << "\n";
  }

  // member: min_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_distance: ";
    value_to_yaml(msg.min_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::GripperTranslation & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::GripperTranslation>()
{
  return "moveit_msgs::msg::GripperTranslation";
}

template<>
inline const char * name<moveit_msgs::msg::GripperTranslation>()
{
  return "moveit_msgs/msg/GripperTranslation";
}

template<>
struct has_fixed_size<moveit_msgs::msg::GripperTranslation>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3Stamped>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::GripperTranslation>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3Stamped>::value> {};

template<>
struct is_message<moveit_msgs::msg::GripperTranslation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__TRAITS_HPP_
