// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__TRAITS_HPP_

#include "moveit_msgs/msg/detail/object_color__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::ObjectColor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_yaml(msg.color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::ObjectColor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::ObjectColor>()
{
  return "moveit_msgs::msg::ObjectColor";
}

template<>
inline const char * name<moveit_msgs::msg::ObjectColor>()
{
  return "moveit_msgs/msg/ObjectColor";
}

template<>
struct has_fixed_size<moveit_msgs::msg::ObjectColor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::ObjectColor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::ObjectColor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__TRAITS_HPP_
