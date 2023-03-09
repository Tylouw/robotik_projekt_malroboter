// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WAYPOINTS__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__WAYPOINTS__TRAITS_HPP_

#include "interfaces/msg/detail/waypoints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::msg::Waypoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z.size() == 0) {
      out << "z: []\n";
    } else {
      out << "z:\n";
      for (auto item : msg.z) {
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

inline std::string to_yaml(const interfaces::msg::Waypoints & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::msg::Waypoints>()
{
  return "interfaces::msg::Waypoints";
}

template<>
inline const char * name<interfaces::msg::Waypoints>()
{
  return "interfaces/msg/Waypoints";
}

template<>
struct has_fixed_size<interfaces::msg::Waypoints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::Waypoints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::Waypoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__WAYPOINTS__TRAITS_HPP_
