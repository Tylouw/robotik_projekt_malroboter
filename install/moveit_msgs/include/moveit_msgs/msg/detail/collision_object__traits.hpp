// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
// Member 'primitive_poses'
// Member 'mesh_poses'
// Member 'plane_poses'
// Member 'subframe_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'type'
#include "object_recognition_msgs/msg/detail/object_type__traits.hpp"
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__traits.hpp"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__traits.hpp"
// Member 'planes'
#include "shape_msgs/msg/detail/plane__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::CollisionObject & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_yaml(msg.type, out, indentation + 2);
  }

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

  // member: planes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planes.size() == 0) {
      out << "planes: []\n";
    } else {
      out << "planes:\n";
      for (auto item : msg.planes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: plane_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plane_poses.size() == 0) {
      out << "plane_poses: []\n";
    } else {
      out << "plane_poses:\n";
      for (auto item : msg.plane_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: subframe_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subframe_names.size() == 0) {
      out << "subframe_names: []\n";
    } else {
      out << "subframe_names:\n";
      for (auto item : msg.subframe_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: subframe_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subframe_poses.size() == 0) {
      out << "subframe_poses: []\n";
    } else {
      out << "subframe_poses:\n";
      for (auto item : msg.subframe_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    character_value_to_yaml(msg.operation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::CollisionObject & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::CollisionObject>()
{
  return "moveit_msgs::msg::CollisionObject";
}

template<>
inline const char * name<moveit_msgs::msg::CollisionObject>()
{
  return "moveit_msgs/msg/CollisionObject";
}

template<>
struct has_fixed_size<moveit_msgs::msg::CollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::CollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::CollisionObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_
