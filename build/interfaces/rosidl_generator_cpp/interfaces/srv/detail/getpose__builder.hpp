// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Getpose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GETPOSE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__GETPOSE__BUILDER_HPP_

#include "interfaces/srv/detail/getpose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Getpose_Request_eingang
{
public:
  Init_Getpose_Request_eingang()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Getpose_Request eingang(::interfaces::srv::Getpose_Request::_eingang_type arg)
  {
    msg_.eingang = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Getpose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Getpose_Request>()
{
  return interfaces::srv::builder::Init_Getpose_Request_eingang();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Getpose_Response_pointorientation
{
public:
  explicit Init_Getpose_Response_pointorientation(::interfaces::srv::Getpose_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Getpose_Response pointorientation(::interfaces::srv::Getpose_Response::_pointorientation_type arg)
  {
    msg_.pointorientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Getpose_Response msg_;
};

class Init_Getpose_Response_pointtranslation
{
public:
  Init_Getpose_Response_pointtranslation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Getpose_Response_pointorientation pointtranslation(::interfaces::srv::Getpose_Response::_pointtranslation_type arg)
  {
    msg_.pointtranslation = std::move(arg);
    return Init_Getpose_Response_pointorientation(msg_);
  }

private:
  ::interfaces::srv::Getpose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Getpose_Response>()
{
  return interfaces::srv::builder::Init_Getpose_Response_pointtranslation();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__GETPOSE__BUILDER_HPP_
