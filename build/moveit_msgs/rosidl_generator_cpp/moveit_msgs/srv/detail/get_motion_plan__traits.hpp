// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__TRAITS_HPP_

#include "moveit_msgs/srv/detail/get_motion_plan__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'motion_plan_request'
#include "moveit_msgs/msg/detail/motion_plan_request__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetMotionPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_plan_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_plan_request:\n";
    to_yaml(msg.motion_plan_request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetMotionPlan_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionPlan_Request>()
{
  return "moveit_msgs::srv::GetMotionPlan_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetMotionPlan_Request>()
{
  return "moveit_msgs/srv/GetMotionPlan_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionPlan_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionPlanRequest>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionPlan_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionPlanRequest>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetMotionPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'motion_plan_response'
#include "moveit_msgs/msg/detail/motion_plan_response__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetMotionPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_plan_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_plan_response:\n";
    to_yaml(msg.motion_plan_response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetMotionPlan_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionPlan_Response>()
{
  return "moveit_msgs::srv::GetMotionPlan_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetMotionPlan_Response>()
{
  return "moveit_msgs/srv/GetMotionPlan_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionPlan_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionPlanResponse>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionPlan_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionPlanResponse>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetMotionPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionPlan>()
{
  return "moveit_msgs::srv::GetMotionPlan";
}

template<>
inline const char * name<moveit_msgs::srv::GetMotionPlan>()
{
  return "moveit_msgs/srv/GetMotionPlan";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetMotionPlan_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetMotionPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetMotionPlan_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetMotionPlan_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetMotionPlan>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetMotionPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetMotionPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__TRAITS_HPP_
