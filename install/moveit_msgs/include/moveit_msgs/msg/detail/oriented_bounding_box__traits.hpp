// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/OrientedBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__TRAITS_HPP_

#include "moveit_msgs/msg/detail/oriented_bounding_box__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'extents'
#include "geometry_msgs/msg/detail/point32__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::OrientedBoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: extents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extents:\n";
    to_yaml(msg.extents, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::OrientedBoundingBox & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::OrientedBoundingBox>()
{
  return "moveit_msgs::msg::OrientedBoundingBox";
}

template<>
inline const char * name<moveit_msgs::msg::OrientedBoundingBox>()
{
  return "moveit_msgs/msg/OrientedBoundingBox";
}

template<>
struct has_fixed_size<moveit_msgs::msg::OrientedBoundingBox>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point32>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::OrientedBoundingBox>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point32>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<moveit_msgs::msg::OrientedBoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__TRAITS_HPP_
