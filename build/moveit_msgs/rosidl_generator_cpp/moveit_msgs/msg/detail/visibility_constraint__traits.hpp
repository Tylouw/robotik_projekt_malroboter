// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/visibility_constraint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'target_pose'
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::VisibilityConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_radius: ";
    value_to_yaml(msg.target_radius, out);
    out << "\n";
  }

  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_yaml(msg.target_pose, out, indentation + 2);
  }

  // member: cone_sides
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cone_sides: ";
    value_to_yaml(msg.cone_sides, out);
    out << "\n";
  }

  // member: sensor_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_pose:\n";
    to_yaml(msg.sensor_pose, out, indentation + 2);
  }

  // member: max_view_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_view_angle: ";
    value_to_yaml(msg.max_view_angle, out);
    out << "\n";
  }

  // member: max_range_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_range_angle: ";
    value_to_yaml(msg.max_range_angle, out);
    out << "\n";
  }

  // member: sensor_view_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_view_direction: ";
    value_to_yaml(msg.sensor_view_direction, out);
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

inline std::string to_yaml(const moveit_msgs::msg::VisibilityConstraint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::VisibilityConstraint>()
{
  return "moveit_msgs::msg::VisibilityConstraint";
}

template<>
inline const char * name<moveit_msgs::msg::VisibilityConstraint>()
{
  return "moveit_msgs/msg/VisibilityConstraint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::VisibilityConstraint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::VisibilityConstraint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<moveit_msgs::msg::VisibilityConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__TRAITS_HPP_
