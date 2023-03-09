// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_UR_IO__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SET_UR_IO__BUILDER_HPP_

#include "interfaces/srv/detail/set_ur_io__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetUrIo_Request_set
{
public:
  Init_SetUrIo_Request_set()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::SetUrIo_Request set(::interfaces::srv::SetUrIo_Request::_set_type arg)
  {
    msg_.set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetUrIo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetUrIo_Request>()
{
  return interfaces::srv::builder::Init_SetUrIo_Request_set();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetUrIo_Response_current
{
public:
  Init_SetUrIo_Response_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::SetUrIo_Response current(::interfaces::srv::SetUrIo_Response::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetUrIo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetUrIo_Response>()
{
  return interfaces::srv::builder::Init_SetUrIo_Response_current();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_UR_IO__BUILDER_HPP_
