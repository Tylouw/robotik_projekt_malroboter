// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__TRAITS_HPP_

#include "moveit_msgs/msg/detail/planning_scene__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'fixed_frame_transforms'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"
// Member 'allowed_collision_matrix'
#include "moveit_msgs/msg/detail/allowed_collision_matrix__traits.hpp"
// Member 'link_padding'
#include "moveit_msgs/msg/detail/link_padding__traits.hpp"
// Member 'link_scale'
#include "moveit_msgs/msg/detail/link_scale__traits.hpp"
// Member 'object_colors'
#include "moveit_msgs/msg/detail/object_color__traits.hpp"
// Member 'world'
#include "moveit_msgs/msg/detail/planning_scene_world__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::PlanningScene & msg,
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

  // member: robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state:\n";
    to_yaml(msg.robot_state, out, indentation + 2);
  }

  // member: robot_model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_model_name: ";
    value_to_yaml(msg.robot_model_name, out);
    out << "\n";
  }

  // member: fixed_frame_transforms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fixed_frame_transforms.size() == 0) {
      out << "fixed_frame_transforms: []\n";
    } else {
      out << "fixed_frame_transforms:\n";
      for (auto item : msg.fixed_frame_transforms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: allowed_collision_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allowed_collision_matrix:\n";
    to_yaml(msg.allowed_collision_matrix, out, indentation + 2);
  }

  // member: link_padding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_padding.size() == 0) {
      out << "link_padding: []\n";
    } else {
      out << "link_padding:\n";
      for (auto item : msg.link_padding) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: link_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_scale.size() == 0) {
      out << "link_scale: []\n";
    } else {
      out << "link_scale:\n";
      for (auto item : msg.link_scale) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: object_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_colors.size() == 0) {
      out << "object_colors: []\n";
    } else {
      out << "object_colors:\n";
      for (auto item : msg.object_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world:\n";
    to_yaml(msg.world, out, indentation + 2);
  }

  // member: is_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_diff: ";
    value_to_yaml(msg.is_diff, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::PlanningScene & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::PlanningScene>()
{
  return "moveit_msgs::msg::PlanningScene";
}

template<>
inline const char * name<moveit_msgs::msg::PlanningScene>()
{
  return "moveit_msgs/msg/PlanningScene";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlanningScene>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlanningScene>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PlanningScene>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__TRAITS_HPP_
