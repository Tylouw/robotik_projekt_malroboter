// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__TRAITS_HPP_

#include "moveit_msgs/msg/detail/planning_scene_components__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::PlanningSceneComponents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: components
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "components: ";
    value_to_yaml(msg.components, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::PlanningSceneComponents & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::PlanningSceneComponents>()
{
  return "moveit_msgs::msg::PlanningSceneComponents";
}

template<>
inline const char * name<moveit_msgs::msg::PlanningSceneComponents>()
{
  return "moveit_msgs/msg/PlanningSceneComponents";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlanningSceneComponents>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlanningSceneComponents>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::msg::PlanningSceneComponents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__TRAITS_HPP_
