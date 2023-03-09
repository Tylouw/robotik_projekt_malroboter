// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/QueryPlannerInterfaces.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__TRAITS_HPP_

#include "moveit_msgs/srv/detail/query_planner_interfaces__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::QueryPlannerInterfaces_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::QueryPlannerInterfaces_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::QueryPlannerInterfaces_Request>()
{
  return "moveit_msgs::srv::QueryPlannerInterfaces_Request";
}

template<>
inline const char * name<moveit_msgs::srv::QueryPlannerInterfaces_Request>()
{
  return "moveit_msgs/srv/QueryPlannerInterfaces_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::QueryPlannerInterfaces_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'planner_interfaces'
#include "moveit_msgs/msg/detail/planner_interface_description__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::QueryPlannerInterfaces_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planner_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planner_interfaces.size() == 0) {
      out << "planner_interfaces: []\n";
    } else {
      out << "planner_interfaces:\n";
      for (auto item : msg.planner_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::QueryPlannerInterfaces_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::QueryPlannerInterfaces_Response>()
{
  return "moveit_msgs::srv::QueryPlannerInterfaces_Response";
}

template<>
inline const char * name<moveit_msgs::srv::QueryPlannerInterfaces_Response>()
{
  return "moveit_msgs/srv/QueryPlannerInterfaces_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::QueryPlannerInterfaces_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::QueryPlannerInterfaces>()
{
  return "moveit_msgs::srv::QueryPlannerInterfaces";
}

template<>
inline const char * name<moveit_msgs::srv::QueryPlannerInterfaces>()
{
  return "moveit_msgs/srv/QueryPlannerInterfaces";
}

template<>
struct has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces_Request>::value &&
    has_fixed_size<moveit_msgs::srv::QueryPlannerInterfaces_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces_Request>::value &&
    has_bounded_size<moveit_msgs::srv::QueryPlannerInterfaces_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::QueryPlannerInterfaces>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::QueryPlannerInterfaces_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::QueryPlannerInterfaces_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__TRAITS_HPP_
