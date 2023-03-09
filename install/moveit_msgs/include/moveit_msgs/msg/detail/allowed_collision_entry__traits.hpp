// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_

#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::AllowedCollisionEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enabled.size() == 0) {
      out << "enabled: []\n";
    } else {
      out << "enabled:\n";
      for (auto item : msg.enabled) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::AllowedCollisionEntry & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::AllowedCollisionEntry>()
{
  return "moveit_msgs::msg::AllowedCollisionEntry";
}

template<>
inline const char * name<moveit_msgs::msg::AllowedCollisionEntry>()
{
  return "moveit_msgs/msg/AllowedCollisionEntry";
}

template<>
struct has_fixed_size<moveit_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::AllowedCollisionEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
