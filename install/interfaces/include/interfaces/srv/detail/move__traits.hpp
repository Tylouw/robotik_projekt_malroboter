// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MOVE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__MOVE__TRAITS_HPP_

#include "interfaces/srv/detail/move__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'waypoints'
#include "interfaces/msg/detail/waypoints__traits.hpp"
// Member 'planeorientation'
#include "interfaces/msg/detail/point_orientation3_d__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::srv::Move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints:\n";
    to_yaml(msg.waypoints, out, indentation + 2);
  }

  // member: planeorientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planeorientation:\n";
    to_yaml(msg.planeorientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::srv::Move_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::srv::Move_Request>()
{
  return "interfaces::srv::Move_Request";
}

template<>
inline const char * name<interfaces::srv::Move_Request>()
{
  return "interfaces/srv/Move_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Move_Request>
  : std::integral_constant<bool, has_fixed_size<interfaces::msg::PointOrientation3D>::value && has_fixed_size<interfaces::msg::Waypoints>::value> {};

template<>
struct has_bounded_size<interfaces::srv::Move_Request>
  : std::integral_constant<bool, has_bounded_size<interfaces::msg::PointOrientation3D>::value && has_bounded_size<interfaces::msg::Waypoints>::value> {};

template<>
struct is_message<interfaces::srv::Move_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pointtranslation'
#include "interfaces/msg/detail/point_translation3_d__traits.hpp"
// Member 'pointorientation'
// already included above
// #include "interfaces/msg/detail/point_orientation3_d__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::srv::Move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pointtranslation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pointtranslation:\n";
    to_yaml(msg.pointtranslation, out, indentation + 2);
  }

  // member: pointorientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pointorientation:\n";
    to_yaml(msg.pointorientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::srv::Move_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::srv::Move_Response>()
{
  return "interfaces::srv::Move_Response";
}

template<>
inline const char * name<interfaces::srv::Move_Response>()
{
  return "interfaces/srv/Move_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Move_Response>
  : std::integral_constant<bool, has_fixed_size<interfaces::msg::PointOrientation3D>::value && has_fixed_size<interfaces::msg::PointTranslation3D>::value> {};

template<>
struct has_bounded_size<interfaces::srv::Move_Response>
  : std::integral_constant<bool, has_bounded_size<interfaces::msg::PointOrientation3D>::value && has_bounded_size<interfaces::msg::PointTranslation3D>::value> {};

template<>
struct is_message<interfaces::srv::Move_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Move>()
{
  return "interfaces::srv::Move";
}

template<>
inline const char * name<interfaces::srv::Move>()
{
  return "interfaces/srv/Move";
}

template<>
struct has_fixed_size<interfaces::srv::Move>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Move_Request>::value &&
    has_fixed_size<interfaces::srv::Move_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Move>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Move_Request>::value &&
    has_bounded_size<interfaces::srv::Move_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Move>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Move_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Move_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__MOVE__TRAITS_HPP_
