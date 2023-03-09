// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__TRAITS_HPP_

#include "moveit_msgs/srv/detail/get_state_validity__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetStateValidity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state:\n";
    to_yaml(msg.robot_state, out, indentation + 2);
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

  // member: constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constraints:\n";
    to_yaml(msg.constraints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetStateValidity_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetStateValidity_Request>()
{
  return "moveit_msgs::srv::GetStateValidity_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetStateValidity_Request>()
{
  return "moveit_msgs/srv/GetStateValidity_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetStateValidity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetStateValidity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetStateValidity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'contacts'
#include "moveit_msgs/msg/detail/contact_information__traits.hpp"
// Member 'cost_sources'
#include "moveit_msgs/msg/detail/cost_source__traits.hpp"
// Member 'constraint_result'
#include "moveit_msgs/msg/detail/constraint_eval_result__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetStateValidity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: contacts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contacts.size() == 0) {
      out << "contacts: []\n";
    } else {
      out << "contacts:\n";
      for (auto item : msg.contacts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cost_sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cost_sources.size() == 0) {
      out << "cost_sources: []\n";
    } else {
      out << "cost_sources:\n";
      for (auto item : msg.cost_sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: constraint_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constraint_result.size() == 0) {
      out << "constraint_result: []\n";
    } else {
      out << "constraint_result:\n";
      for (auto item : msg.constraint_result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetStateValidity_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetStateValidity_Response>()
{
  return "moveit_msgs::srv::GetStateValidity_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetStateValidity_Response>()
{
  return "moveit_msgs/srv/GetStateValidity_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetStateValidity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetStateValidity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetStateValidity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetStateValidity>()
{
  return "moveit_msgs::srv::GetStateValidity";
}

template<>
inline const char * name<moveit_msgs::srv::GetStateValidity>()
{
  return "moveit_msgs/srv/GetStateValidity";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetStateValidity>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetStateValidity_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetStateValidity_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetStateValidity>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetStateValidity_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetStateValidity_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetStateValidity>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetStateValidity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetStateValidity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__TRAITS_HPP_
