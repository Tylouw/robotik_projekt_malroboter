// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/ContactInformation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_

#include "moveit_msgs/msg/detail/contact_information__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::ContactInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normal:\n";
    to_yaml(msg.normal, out, indentation + 2);
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: contact_body_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_body_1: ";
    value_to_yaml(msg.contact_body_1, out);
    out << "\n";
  }

  // member: body_type_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_type_1: ";
    value_to_yaml(msg.body_type_1, out);
    out << "\n";
  }

  // member: contact_body_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_body_2: ";
    value_to_yaml(msg.contact_body_2, out);
    out << "\n";
  }

  // member: body_type_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_type_2: ";
    value_to_yaml(msg.body_type_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::ContactInformation & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::ContactInformation>()
{
  return "moveit_msgs::msg::ContactInformation";
}

template<>
inline const char * name<moveit_msgs::msg::ContactInformation>()
{
  return "moveit_msgs/msg/ContactInformation";
}

template<>
struct has_fixed_size<moveit_msgs::msg::ContactInformation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::ContactInformation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::ContactInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_
