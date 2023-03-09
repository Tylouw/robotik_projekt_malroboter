// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/LinkScale.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__TRAITS_HPP_

#include "moveit_msgs/msg/detail/link_scale__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::LinkScale & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_name: ";
    value_to_yaml(msg.link_name, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    value_to_yaml(msg.scale, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::LinkScale & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::LinkScale>()
{
  return "moveit_msgs::msg::LinkScale";
}

template<>
inline const char * name<moveit_msgs::msg::LinkScale>()
{
  return "moveit_msgs/msg/LinkScale";
}

template<>
struct has_fixed_size<moveit_msgs::msg::LinkScale>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::LinkScale>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::LinkScale>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__TRAITS_HPP_
