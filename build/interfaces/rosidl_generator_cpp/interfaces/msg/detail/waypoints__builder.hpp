// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_

#include "interfaces/msg/detail/waypoints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Waypoints_z
{
public:
  explicit Init_Waypoints_z(::interfaces::msg::Waypoints & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Waypoints z(::interfaces::msg::Waypoints::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Waypoints msg_;
};

class Init_Waypoints_y
{
public:
  explicit Init_Waypoints_y(::interfaces::msg::Waypoints & msg)
  : msg_(msg)
  {}
  Init_Waypoints_z y(::interfaces::msg::Waypoints::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Waypoints_z(msg_);
  }

private:
  ::interfaces::msg::Waypoints msg_;
};

class Init_Waypoints_x
{
public:
  Init_Waypoints_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoints_y x(::interfaces::msg::Waypoints::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Waypoints_y(msg_);
  }

private:
  ::interfaces::msg::Waypoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Waypoints>()
{
  return interfaces::msg::builder::Init_Waypoints_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_
