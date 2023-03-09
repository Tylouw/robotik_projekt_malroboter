// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MOVE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__MOVE__BUILDER_HPP_

#include "interfaces/srv/detail/move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Move_Request_planeorientation
{
public:
  explicit Init_Move_Request_planeorientation(::interfaces::srv::Move_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Move_Request planeorientation(::interfaces::srv::Move_Request::_planeorientation_type arg)
  {
    msg_.planeorientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Move_Request msg_;
};

class Init_Move_Request_waypoints
{
public:
  Init_Move_Request_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Request_planeorientation waypoints(::interfaces::srv::Move_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_Move_Request_planeorientation(msg_);
  }

private:
  ::interfaces::srv::Move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Move_Request>()
{
  return interfaces::srv::builder::Init_Move_Request_waypoints();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Move_Response_pointorientation
{
public:
  explicit Init_Move_Response_pointorientation(::interfaces::srv::Move_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Move_Response pointorientation(::interfaces::srv::Move_Response::_pointorientation_type arg)
  {
    msg_.pointorientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Move_Response msg_;
};

class Init_Move_Response_pointtranslation
{
public:
  Init_Move_Response_pointtranslation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Response_pointorientation pointtranslation(::interfaces::srv::Move_Response::_pointtranslation_type arg)
  {
    msg_.pointtranslation = std::move(arg);
    return Init_Move_Response_pointorientation(msg_);
  }

private:
  ::interfaces::srv::Move_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Move_Response>()
{
  return interfaces::srv::builder::Init_Move_Response_pointtranslation();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__MOVE__BUILDER_HPP_
