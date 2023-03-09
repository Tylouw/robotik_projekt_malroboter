// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Picturetopoints.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PICTURETOPOINTS__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__PICTURETOPOINTS__BUILDER_HPP_

#include "interfaces/srv/detail/picturetopoints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Picturetopoints_Request_path
{
public:
  Init_Picturetopoints_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Picturetopoints_Request path(::interfaces::srv::Picturetopoints_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Picturetopoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Picturetopoints_Request>()
{
  return interfaces::srv::builder::Init_Picturetopoints_Request_path();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Picturetopoints_Response_points
{
public:
  Init_Picturetopoints_Response_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Picturetopoints_Response points(::interfaces::srv::Picturetopoints_Response::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Picturetopoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Picturetopoints_Response>()
{
  return interfaces::srv::builder::Init_Picturetopoints_Response_points();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__PICTURETOPOINTS__BUILDER_HPP_
