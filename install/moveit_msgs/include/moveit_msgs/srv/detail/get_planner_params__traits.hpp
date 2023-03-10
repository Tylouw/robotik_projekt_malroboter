// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetPlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__TRAITS_HPP_

#include "moveit_msgs/srv/detail/get_planner_params__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetPlannerParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pipeline_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pipeline_id: ";
    value_to_yaml(msg.pipeline_id, out);
    out << "\n";
  }

  // member: planner_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_config: ";
    value_to_yaml(msg.planner_config, out);
    out << "\n";
  }

  // member: group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group: ";
    value_to_yaml(msg.group, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetPlannerParams_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams_Request>()
{
  return "moveit_msgs::srv::GetPlannerParams_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetPlannerParams_Request>()
{
  return "moveit_msgs/srv/GetPlannerParams_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetPlannerParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'params'
#include "moveit_msgs/msg/detail/planner_params__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetPlannerParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params:\n";
    to_yaml(msg.params, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetPlannerParams_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams_Response>()
{
  return "moveit_msgs::srv::GetPlannerParams_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetPlannerParams_Response>()
{
  return "moveit_msgs/srv/GetPlannerParams_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlannerParams>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlannerParams>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetPlannerParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams>()
{
  return "moveit_msgs::srv::GetPlannerParams";
}

template<>
inline const char * name<moveit_msgs::srv::GetPlannerParams>()
{
  return "moveit_msgs/srv/GetPlannerParams";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetPlannerParams_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetPlannerParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetPlannerParams_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetPlannerParams_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetPlannerParams>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetPlannerParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetPlannerParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__TRAITS_HPP_
