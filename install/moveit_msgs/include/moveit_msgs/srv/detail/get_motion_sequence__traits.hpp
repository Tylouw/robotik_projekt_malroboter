// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetMotionSequence.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__TRAITS_HPP_

#include "moveit_msgs/srv/detail/get_motion_sequence__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_sequence_request__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetMotionSequence_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetMotionSequence_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionSequence_Request>()
{
  return "moveit_msgs::srv::GetMotionSequence_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetMotionSequence_Request>()
{
  return "moveit_msgs/srv/GetMotionSequence_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionSequence_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionSequenceRequest>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionSequence_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionSequenceRequest>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetMotionSequence_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "moveit_msgs/msg/detail/motion_sequence_response__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::GetMotionSequence_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::GetMotionSequence_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionSequence_Response>()
{
  return "moveit_msgs::srv::GetMotionSequence_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetMotionSequence_Response>()
{
  return "moveit_msgs/srv/GetMotionSequence_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionSequence_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionSequenceResponse>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionSequence_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionSequenceResponse>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetMotionSequence_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionSequence>()
{
  return "moveit_msgs::srv::GetMotionSequence";
}

template<>
inline const char * name<moveit_msgs::srv::GetMotionSequence>()
{
  return "moveit_msgs/srv/GetMotionSequence";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionSequence>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetMotionSequence_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetMotionSequence_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionSequence>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetMotionSequence_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetMotionSequence_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetMotionSequence>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetMotionSequence_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetMotionSequence_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__TRAITS_HPP_
