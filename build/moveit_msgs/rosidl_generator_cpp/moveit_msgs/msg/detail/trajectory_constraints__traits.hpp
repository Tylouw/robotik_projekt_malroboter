// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/TrajectoryConstraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_

#include "moveit_msgs/msg/detail/trajectory_constraints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::TrajectoryConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constraints.size() == 0) {
      out << "constraints: []\n";
    } else {
      out << "constraints:\n";
      for (auto item : msg.constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::TrajectoryConstraints & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::TrajectoryConstraints>()
{
  return "moveit_msgs::msg::TrajectoryConstraints";
}

template<>
inline const char * name<moveit_msgs::msg::TrajectoryConstraints>()
{
  return "moveit_msgs/msg/TrajectoryConstraints";
}

template<>
struct has_fixed_size<moveit_msgs::msg::TrajectoryConstraints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::TrajectoryConstraints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::TrajectoryConstraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_
