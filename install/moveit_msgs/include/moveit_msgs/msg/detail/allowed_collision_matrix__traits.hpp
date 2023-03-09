// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__TRAITS_HPP_

#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'entry_values'
#include "moveit_msgs/msg/detail/allowed_collision_entry__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::AllowedCollisionMatrix & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entry_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entry_names.size() == 0) {
      out << "entry_names: []\n";
    } else {
      out << "entry_names:\n";
      for (auto item : msg.entry_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: entry_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entry_values.size() == 0) {
      out << "entry_values: []\n";
    } else {
      out << "entry_values:\n";
      for (auto item : msg.entry_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: default_entry_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.default_entry_names.size() == 0) {
      out << "default_entry_names: []\n";
    } else {
      out << "default_entry_names:\n";
      for (auto item : msg.default_entry_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: default_entry_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.default_entry_values.size() == 0) {
      out << "default_entry_values: []\n";
    } else {
      out << "default_entry_values:\n";
      for (auto item : msg.default_entry_values) {
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

inline std::string to_yaml(const moveit_msgs::msg::AllowedCollisionMatrix & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::AllowedCollisionMatrix>()
{
  return "moveit_msgs::msg::AllowedCollisionMatrix";
}

template<>
inline const char * name<moveit_msgs::msg::AllowedCollisionMatrix>()
{
  return "moveit_msgs/msg/AllowedCollisionMatrix";
}

template<>
struct has_fixed_size<moveit_msgs::msg::AllowedCollisionMatrix>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::AllowedCollisionMatrix>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::AllowedCollisionMatrix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__TRAITS_HPP_
