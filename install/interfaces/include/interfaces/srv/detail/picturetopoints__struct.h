// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/Picturetopoints.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PICTURETOPOINTS__STRUCT_H_
#define INTERFACES__SRV__DETAIL__PICTURETOPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Picturetopoints in the package interfaces.
typedef struct interfaces__srv__Picturetopoints_Request
{
  rosidl_runtime_c__String path;
} interfaces__srv__Picturetopoints_Request;

// Struct for a sequence of interfaces__srv__Picturetopoints_Request.
typedef struct interfaces__srv__Picturetopoints_Request__Sequence
{
  interfaces__srv__Picturetopoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Picturetopoints_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "interfaces/msg/detail/pointcoords__struct.h"

// Struct defined in srv/Picturetopoints in the package interfaces.
typedef struct interfaces__srv__Picturetopoints_Response
{
  interfaces__msg__Pointcoords points;
} interfaces__srv__Picturetopoints_Response;

// Struct for a sequence of interfaces__srv__Picturetopoints_Response.
typedef struct interfaces__srv__Picturetopoints_Response__Sequence
{
  interfaces__srv__Picturetopoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Picturetopoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__PICTURETOPOINTS__STRUCT_H_
