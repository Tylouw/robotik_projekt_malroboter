// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionSequenceResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__TRAITS_HPP_

#include "moveit_msgs/msg/detail/motion_sequence_response__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"
// Member 'sequence_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'planned_trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::MotionSequenceResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_yaml(msg.error_code, out, indentation + 2);
  }

  // member: sequence_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_start:\n";
    to_yaml(msg.sequence_start, out, indentation + 2);
  }

  // member: planned_trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planned_trajectories.size() == 0) {
      out << "planned_trajectories: []\n";
    } else {
      out << "planned_trajectories:\n";
      for (auto item : msg.planned_trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time: ";
    value_to_yaml(msg.planning_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::MotionSequenceResponse & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::MotionSequenceResponse>()
{
  return "moveit_msgs::msg::MotionSequenceResponse";
}

template<>
inline const char * name<moveit_msgs::msg::MotionSequenceResponse>()
{
  return "moveit_msgs/msg/MotionSequenceResponse";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionSequenceResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionSequenceResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::MotionSequenceResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__TRAITS_HPP_
