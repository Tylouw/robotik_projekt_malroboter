// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/LinkPadding.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__TRAITS_HPP_

#include "moveit_msgs/msg/detail/link_padding__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::LinkPadding & msg,
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

  // member: padding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "padding: ";
    value_to_yaml(msg.padding, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::LinkPadding & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::LinkPadding>()
{
  return "moveit_msgs::msg::LinkPadding";
}

template<>
inline const char * name<moveit_msgs::msg::LinkPadding>()
{
  return "moveit_msgs/msg/LinkPadding";
}

template<>
struct has_fixed_size<moveit_msgs::msg::LinkPadding>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::LinkPadding>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::LinkPadding>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__TRAITS_HPP_
