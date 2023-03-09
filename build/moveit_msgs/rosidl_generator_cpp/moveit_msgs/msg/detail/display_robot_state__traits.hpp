// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/DisplayRobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__TRAITS_HPP_

#include "moveit_msgs/msg/detail/display_robot_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'highlight_links'
#include "moveit_msgs/msg/detail/object_color__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::DisplayRobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_yaml(msg.state, out, indentation + 2);
  }

  // member: highlight_links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.highlight_links.size() == 0) {
      out << "highlight_links: []\n";
    } else {
      out << "highlight_links:\n";
      for (auto item : msg.highlight_links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: hide
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hide: ";
    value_to_yaml(msg.hide, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::DisplayRobotState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::DisplayRobotState>()
{
  return "moveit_msgs::msg::DisplayRobotState";
}

template<>
inline const char * name<moveit_msgs::msg::DisplayRobotState>()
{
  return "moveit_msgs/msg/DisplayRobotState";
}

template<>
struct has_fixed_size<moveit_msgs::msg::DisplayRobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::DisplayRobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::DisplayRobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__TRAITS_HPP_
