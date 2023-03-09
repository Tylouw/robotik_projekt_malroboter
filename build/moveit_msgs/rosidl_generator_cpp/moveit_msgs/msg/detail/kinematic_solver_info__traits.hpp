// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/KinematicSolverInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__TRAITS_HPP_

#include "moveit_msgs/msg/detail/kinematic_solver_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'limits'
#include "moveit_msgs/msg/detail/joint_limits__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::KinematicSolverInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limits.size() == 0) {
      out << "limits: []\n";
    } else {
      out << "limits:\n";
      for (auto item : msg.limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_names.size() == 0) {
      out << "link_names: []\n";
    } else {
      out << "link_names:\n";
      for (auto item : msg.link_names) {
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

inline std::string to_yaml(const moveit_msgs::msg::KinematicSolverInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::KinematicSolverInfo>()
{
  return "moveit_msgs::msg::KinematicSolverInfo";
}

template<>
inline const char * name<moveit_msgs::msg::KinematicSolverInfo>()
{
  return "moveit_msgs/msg/KinematicSolverInfo";
}

template<>
struct has_fixed_size<moveit_msgs::msg::KinematicSolverInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::KinematicSolverInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::KinematicSolverInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__TRAITS_HPP_
