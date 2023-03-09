// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__TRAITS_HPP_

#include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'target'
// Member 'movable_obstacles'
#include "moveit_msgs/msg/detail/collision_object__traits.hpp"
// Member 'candidate_grasps'
#include "moveit_msgs/msg/detail/grasp__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GraspPlanning_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_yaml(msg.target, out, indentation + 2);
  }

  // member: support_surfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.support_surfaces.size() == 0) {
      out << "support_surfaces: []\n";
    } else {
      out << "support_surfaces:\n";
      for (auto item : msg.support_surfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: candidate_grasps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.candidate_grasps.size() == 0) {
      out << "candidate_grasps: []\n";
    } else {
      out << "candidate_grasps:\n";
      for (auto item : msg.candidate_grasps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: movable_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.movable_obstacles.size() == 0) {
      out << "movable_obstacles: []\n";
    } else {
      out << "movable_obstacles:\n";
      for (auto item : msg.movable_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GraspPlanning_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GraspPlanning_Request>()
{
  return "moveit_msgs::srv::GraspPlanning_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GraspPlanning_Request>()
{
  return "moveit_msgs/srv/GraspPlanning_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GraspPlanning_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GraspPlanning_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GraspPlanning_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'grasps'
// already included above
// #include "moveit_msgs/msg/detail/grasp__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GraspPlanning_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grasps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grasps.size() == 0) {
      out << "grasps: []\n";
    } else {
      out << "grasps:\n";
      for (auto item : msg.grasps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const moveit_msgs::srv::GraspPlanning_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GraspPlanning_Response>()
{
  return "moveit_msgs::srv::GraspPlanning_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GraspPlanning_Response>()
{
  return "moveit_msgs/srv/GraspPlanning_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GraspPlanning_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GraspPlanning_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GraspPlanning_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GraspPlanning>()
{
  return "moveit_msgs::srv::GraspPlanning";
}

template<>
inline const char * name<moveit_msgs::srv::GraspPlanning>()
{
  return "moveit_msgs/srv/GraspPlanning";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GraspPlanning>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GraspPlanning_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GraspPlanning_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GraspPlanning>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GraspPlanning_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GraspPlanning_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GraspPlanning>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GraspPlanning_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GraspPlanning_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__TRAITS_HPP_
