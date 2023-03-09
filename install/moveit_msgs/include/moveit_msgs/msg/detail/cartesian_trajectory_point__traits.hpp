// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'point'
#include "moveit_msgs/msg/detail/cartesian_point__traits.hpp"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::CartesianTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_yaml(msg.point, out, indentation + 2);
  }

  // member: time_from_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_from_start:\n";
    to_yaml(msg.time_from_start, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::CartesianTrajectoryPoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::CartesianTrajectoryPoint>()
{
  return "moveit_msgs::msg::CartesianTrajectoryPoint";
}

template<>
inline const char * name<moveit_msgs::msg::CartesianTrajectoryPoint>()
{
  return "moveit_msgs/msg/CartesianTrajectoryPoint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::CartesianTrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<moveit_msgs::msg::CartesianPoint>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::CartesianTrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<moveit_msgs::msg::CartesianPoint>::value> {};

template<>
struct is_message<moveit_msgs::msg::CartesianTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_
