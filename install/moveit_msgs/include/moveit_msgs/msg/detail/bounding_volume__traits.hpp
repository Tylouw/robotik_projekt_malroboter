// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__TRAITS_HPP_

#include "moveit_msgs/msg/detail/bounding_volume__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__traits.hpp"
// Member 'primitive_poses'
// Member 'mesh_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::BoundingVolume & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: primitives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.primitives.size() == 0) {
      out << "primitives: []\n";
    } else {
      out << "primitives:\n";
      for (auto item : msg.primitives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: primitive_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.primitive_poses.size() == 0) {
      out << "primitive_poses: []\n";
    } else {
      out << "primitive_poses:\n";
      for (auto item : msg.primitive_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: meshes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.meshes.size() == 0) {
      out << "meshes: []\n";
    } else {
      out << "meshes:\n";
      for (auto item : msg.meshes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: mesh_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mesh_poses.size() == 0) {
      out << "mesh_poses: []\n";
    } else {
      out << "mesh_poses:\n";
      for (auto item : msg.mesh_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::BoundingVolume & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::BoundingVolume>()
{
  return "moveit_msgs::msg::BoundingVolume";
}

template<>
inline const char * name<moveit_msgs::msg::BoundingVolume>()
{
  return "moveit_msgs/msg/BoundingVolume";
}

template<>
struct has_fixed_size<moveit_msgs::msg::BoundingVolume>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::BoundingVolume>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::BoundingVolume>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__TRAITS_HPP_
