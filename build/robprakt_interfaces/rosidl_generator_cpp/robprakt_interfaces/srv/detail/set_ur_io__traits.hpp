// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robprakt_interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice

#ifndef ROBPRAKT_INTERFACES__SRV__DETAIL__SET_UR_IO__TRAITS_HPP_
#define ROBPRAKT_INTERFACES__SRV__DETAIL__SET_UR_IO__TRAITS_HPP_

#include "robprakt_interfaces/srv/detail/set_ur_io__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robprakt_interfaces::srv::SetUrIo_Request & msg,
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

inline std::string to_yaml(const robprakt_interfaces::srv::SetUrIo_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robprakt_interfaces::srv::SetUrIo_Request>()
{
  return "robprakt_interfaces::srv::SetUrIo_Request";
}

template<>
inline const char * name<robprakt_interfaces::srv::SetUrIo_Request>()
{
  return "robprakt_interfaces/srv/SetUrIo_Request";
}

template<>
struct has_fixed_size<robprakt_interfaces::srv::SetUrIo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robprakt_interfaces::srv::SetUrIo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robprakt_interfaces::srv::SetUrIo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robprakt_interfaces::srv::SetUrIo_Response & msg,
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

inline std::string to_yaml(const robprakt_interfaces::srv::SetUrIo_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robprakt_interfaces::srv::SetUrIo_Response>()
{
  return "robprakt_interfaces::srv::SetUrIo_Response";
}

template<>
inline const char * name<robprakt_interfaces::srv::SetUrIo_Response>()
{
  return "robprakt_interfaces/srv/SetUrIo_Response";
}

template<>
struct has_fixed_size<robprakt_interfaces::srv::SetUrIo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robprakt_interfaces::srv::SetUrIo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robprakt_interfaces::srv::SetUrIo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robprakt_interfaces::srv::SetUrIo>()
{
  return "robprakt_interfaces::srv::SetUrIo";
}

template<>
inline const char * name<robprakt_interfaces::srv::SetUrIo>()
{
  return "robprakt_interfaces/srv/SetUrIo";
}

template<>
struct has_fixed_size<robprakt_interfaces::srv::SetUrIo>
  : std::integral_constant<
    bool,
    has_fixed_size<robprakt_interfaces::srv::SetUrIo_Request>::value &&
    has_fixed_size<robprakt_interfaces::srv::SetUrIo_Response>::value
  >
{
};

template<>
struct has_bounded_size<robprakt_interfaces::srv::SetUrIo>
  : std::integral_constant<
    bool,
    has_bounded_size<robprakt_interfaces::srv::SetUrIo_Request>::value &&
    has_bounded_size<robprakt_interfaces::srv::SetUrIo_Response>::value
  >
{
};

template<>
struct is_service<robprakt_interfaces::srv::SetUrIo>
  : std::true_type
{
};

template<>
struct is_service_request<robprakt_interfaces::srv::SetUrIo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robprakt_interfaces::srv::SetUrIo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBPRAKT_INTERFACES__SRV__DETAIL__SET_UR_IO__TRAITS_HPP_
