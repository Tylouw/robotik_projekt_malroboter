// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__TRAITS_HPP_

#include "moveit_msgs/srv/detail/get_cartesian_path__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetCartesianPath_Request & msg,
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

  // member: start_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_state:\n";
    to_yaml(msg.start_state, out, indentation + 2);
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

  // member: link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_name: ";
    value_to_yaml(msg.link_name, out);
    out << "\n";
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: max_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_step: ";
    value_to_yaml(msg.max_step, out);
    out << "\n";
  }

  // member: jump_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jump_threshold: ";
    value_to_yaml(msg.jump_threshold, out);
    out << "\n";
  }

  // member: prismatic_jump_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prismatic_jump_threshold: ";
    value_to_yaml(msg.prismatic_jump_threshold, out);
    out << "\n";
  }

  // member: revolute_jump_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revolute_jump_threshold: ";
    value_to_yaml(msg.revolute_jump_threshold, out);
    out << "\n";
  }

  // member: avoid_collisions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoid_collisions: ";
    value_to_yaml(msg.avoid_collisions, out);
    out << "\n";
  }

  // member: path_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_constraints:\n";
    to_yaml(msg.path_constraints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetCartesianPath_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetCartesianPath_Request>()
{
  return "moveit_msgs::srv::GetCartesianPath_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetCartesianPath_Request>()
{
  return "moveit_msgs/srv/GetCartesianPath_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetCartesianPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetCartesianPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetCartesianPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'start_state'
// already included above
// #include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'solution'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetCartesianPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_state:\n";
    to_yaml(msg.start_state, out, indentation + 2);
  }

  // member: solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution:\n";
    to_yaml(msg.solution, out, indentation + 2);
  }

  // member: fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fraction: ";
    value_to_yaml(msg.fraction, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_yaml(msg.error_code, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetCartesianPath_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetCartesianPath_Response>()
{
  return "moveit_msgs::srv::GetCartesianPath_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetCartesianPath_Response>()
{
  return "moveit_msgs/srv/GetCartesianPath_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetCartesianPath_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_fixed_size<moveit_msgs::msg::RobotState>::value && has_fixed_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetCartesianPath_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_bounded_size<moveit_msgs::msg::RobotState>::value && has_bounded_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetCartesianPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetCartesianPath>()
{
  return "moveit_msgs::srv::GetCartesianPath";
}

template<>
inline const char * name<moveit_msgs::srv::GetCartesianPath>()
{
  return "moveit_msgs/srv/GetCartesianPath";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetCartesianPath>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetCartesianPath_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetCartesianPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetCartesianPath>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetCartesianPath_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetCartesianPath_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetCartesianPath>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetCartesianPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetCartesianPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__TRAITS_HPP_
