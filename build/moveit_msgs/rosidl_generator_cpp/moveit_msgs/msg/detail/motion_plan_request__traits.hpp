// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__TRAITS_HPP_

#include "moveit_msgs/msg/detail/motion_plan_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'workspace_parameters'
#include "moveit_msgs/msg/detail/workspace_parameters__traits.hpp"
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'goal_constraints'
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"
// Member 'trajectory_constraints'
#include "moveit_msgs/msg/detail/trajectory_constraints__traits.hpp"
// Member 'reference_trajectories'
#include "moveit_msgs/msg/detail/generic_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::msg::MotionPlanRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: workspace_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "workspace_parameters:\n";
    to_yaml(msg.workspace_parameters, out, indentation + 2);
  }

  // member: start_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_state:\n";
    to_yaml(msg.start_state, out, indentation + 2);
  }

  // member: goal_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_constraints.size() == 0) {
      out << "goal_constraints: []\n";
    } else {
      out << "goal_constraints:\n";
      for (auto item : msg.goal_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: path_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_constraints:\n";
    to_yaml(msg.path_constraints, out, indentation + 2);
  }

  // member: trajectory_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_constraints:\n";
    to_yaml(msg.trajectory_constraints, out, indentation + 2);
  }

  // member: reference_trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_trajectories.size() == 0) {
      out << "reference_trajectories: []\n";
    } else {
      out << "reference_trajectories:\n";
      for (auto item : msg.reference_trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
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

  // member: planner_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_id: ";
    value_to_yaml(msg.planner_id, out);
    out << "\n";
  }

  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: num_planning_attempts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_planning_attempts: ";
    value_to_yaml(msg.num_planning_attempts, out);
    out << "\n";
  }

  // member: allowed_planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allowed_planning_time: ";
    value_to_yaml(msg.allowed_planning_time, out);
    out << "\n";
  }

  // member: max_velocity_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity_scaling_factor: ";
    value_to_yaml(msg.max_velocity_scaling_factor, out);
    out << "\n";
  }

  // member: max_acceleration_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration_scaling_factor: ";
    value_to_yaml(msg.max_acceleration_scaling_factor, out);
    out << "\n";
  }

  // member: cartesian_speed_end_effector_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_speed_end_effector_link: ";
    value_to_yaml(msg.cartesian_speed_end_effector_link, out);
    out << "\n";
  }

  // member: max_cartesian_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_cartesian_speed: ";
    value_to_yaml(msg.max_cartesian_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::msg::MotionPlanRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::msg::MotionPlanRequest>()
{
  return "moveit_msgs::msg::MotionPlanRequest";
}

template<>
inline const char * name<moveit_msgs::msg::MotionPlanRequest>()
{
  return "moveit_msgs/msg/MotionPlanRequest";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionPlanRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionPlanRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::MotionPlanRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__TRAITS_HPP_
