// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlannerInterfaceDescription.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__TRAITS_HPP_

#include "moveit_msgs/msg/detail/planner_interface_description__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::PlannerInterfaceDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: pipeline_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pipeline_id: ";
    value_to_yaml(msg.pipeline_id, out);
    out << "\n";
  }

  // member: planner_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planner_ids.size() == 0) {
      out << "planner_ids: []\n";
    } else {
      out << "planner_ids:\n";
      for (auto item : msg.planner_ids) {
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

inline std::string to_yaml(const moveit_msgs::msg::PlannerInterfaceDescription & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::PlannerInterfaceDescription>()
{
  return "moveit_msgs::msg::PlannerInterfaceDescription";
}

template<>
inline const char * name<moveit_msgs::msg::PlannerInterfaceDescription>()
{
  return "moveit_msgs/msg/PlannerInterfaceDescription";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlannerInterfaceDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlannerInterfaceDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PlannerInterfaceDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__TRAITS_HPP_
