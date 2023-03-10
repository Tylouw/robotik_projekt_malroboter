// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/CostSource.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__TRAITS_HPP_

#include "moveit_msgs/msg/detail/cost_source__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'aabb_min'
// Member 'aabb_max'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::CostSource & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cost_density
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost_density: ";
    value_to_yaml(msg.cost_density, out);
    out << "\n";
  }

  // member: aabb_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aabb_min:\n";
    to_yaml(msg.aabb_min, out, indentation + 2);
  }

  // member: aabb_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aabb_max:\n";
    to_yaml(msg.aabb_max, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::CostSource & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::CostSource>()
{
  return "moveit_msgs::msg::CostSource";
}

template<>
inline const char * name<moveit_msgs::msg::CostSource>()
{
  return "moveit_msgs/msg/CostSource";
}

template<>
struct has_fixed_size<moveit_msgs::msg::CostSource>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::CostSource>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<moveit_msgs::msg::CostSource>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__TRAITS_HPP_
