// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/attached_collision_object__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'object'
#include "moveit_msgs/msg/detail/collision_object__traits.hpp"
// Member 'detach_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::AttachedCollisionObject & msg,
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

  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object:\n";
    to_yaml(msg.object, out, indentation + 2);
  }

  // member: touch_links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.touch_links.size() == 0) {
      out << "touch_links: []\n";
    } else {
      out << "touch_links:\n";
      for (auto item : msg.touch_links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: detach_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detach_posture:\n";
    to_yaml(msg.detach_posture, out, indentation + 2);
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    value_to_yaml(msg.weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::AttachedCollisionObject & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::AttachedCollisionObject>()
{
  return "moveit_msgs::msg::AttachedCollisionObject";
}

template<>
inline const char * name<moveit_msgs::msg::AttachedCollisionObject>()
{
  return "moveit_msgs/msg/AttachedCollisionObject";
}

template<>
struct has_fixed_size<moveit_msgs::msg::AttachedCollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::AttachedCollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::AttachedCollisionObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_
