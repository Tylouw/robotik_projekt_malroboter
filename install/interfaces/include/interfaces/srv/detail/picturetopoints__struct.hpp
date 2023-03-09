// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Picturetopoints.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PICTURETOPOINTS__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__PICTURETOPOINTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Picturetopoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Picturetopoints_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Picturetopoints_Request_
{
  using Type = Picturetopoints_Request_<ContainerAllocator>;

  explicit Picturetopoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
    }
  }

  explicit Picturetopoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
    }
  }

  // field types and members
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Picturetopoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Picturetopoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Picturetopoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Picturetopoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Picturetopoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Picturetopoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Picturetopoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Picturetopoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Picturetopoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Picturetopoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Picturetopoints_Request
    std::shared_ptr<interfaces::srv::Picturetopoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Picturetopoints_Request
    std::shared_ptr<interfaces::srv::Picturetopoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Picturetopoints_Request_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Picturetopoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Picturetopoints_Request_

// alias to use template instance with default allocator
using Picturetopoints_Request =
  interfaces::srv::Picturetopoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


// Include directives for member types
// Member 'points'
#include "interfaces/msg/detail/pointcoords__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Picturetopoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Picturetopoints_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Picturetopoints_Response_
{
  using Type = Picturetopoints_Response_<ContainerAllocator>;

  explicit Picturetopoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : points(_init)
  {
    (void)_init;
  }

  explicit Picturetopoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : points(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _points_type =
    interfaces::msg::Pointcoords_<ContainerAllocator>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__points(
    const interfaces::msg::Pointcoords_<ContainerAllocator> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Picturetopoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Picturetopoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Picturetopoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Picturetopoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Picturetopoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Picturetopoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Picturetopoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Picturetopoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Picturetopoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Picturetopoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Picturetopoints_Response
    std::shared_ptr<interfaces::srv::Picturetopoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Picturetopoints_Response
    std::shared_ptr<interfaces::srv::Picturetopoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Picturetopoints_Response_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const Picturetopoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Picturetopoints_Response_

// alias to use template instance with default allocator
using Picturetopoints_Response =
  interfaces::srv::Picturetopoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Picturetopoints
{
  using Request = interfaces::srv::Picturetopoints_Request;
  using Response = interfaces::srv::Picturetopoints_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__PICTURETOPOINTS__STRUCT_HPP_
