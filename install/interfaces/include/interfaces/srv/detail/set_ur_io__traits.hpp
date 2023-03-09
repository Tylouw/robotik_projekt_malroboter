// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_UR_IO__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__SET_UR_IO__TRAITS_HPP_

#include "interfaces/srv/detail/set_ur_io__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::srv::SetUrIo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set: ";
    value_to_yaml(msg.set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::srv::SetUrIo_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::srv::SetUrIo_Request>()
{
  return "interfaces::srv::SetUrIo_Request";
}

template<>
inline const char * name<interfaces::srv::SetUrIo_Request>()
{
  return "interfaces/srv/SetUrIo_Request";
}

template<>
struct has_fixed_size<interfaces::srv::SetUrIo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::SetUrIo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::SetUrIo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::srv::SetUrIo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    value_to_yaml(msg.current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::srv::SetUrIo_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::srv::SetUrIo_Response>()
{
  return "interfaces::srv::SetUrIo_Response";
}

template<>
inline const char * name<interfaces::srv::SetUrIo_Response>()
{
  return "interfaces/srv/SetUrIo_Response";
}

template<>
struct has_fixed_size<interfaces::srv::SetUrIo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::SetUrIo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::SetUrIo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::SetUrIo>()
{
  return "interfaces::srv::SetUrIo";
}

template<>
inline const char * name<interfaces::srv::SetUrIo>()
{
  return "interfaces/srv/SetUrIo";
}

template<>
struct has_fixed_size<interfaces::srv::SetUrIo>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::SetUrIo_Request>::value &&
    has_fixed_size<interfaces::srv::SetUrIo_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::SetUrIo>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::SetUrIo_Request>::value &&
    has_bounded_size<interfaces::srv::SetUrIo_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::SetUrIo>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::SetUrIo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::SetUrIo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__SET_UR_IO__TRAITS_HPP_
