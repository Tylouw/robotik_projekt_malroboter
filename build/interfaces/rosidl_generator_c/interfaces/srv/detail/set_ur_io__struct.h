// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_H_
#define INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetUrIo in the package interfaces.
typedef struct interfaces__srv__SetUrIo_Request
{
  int64_t set;
} interfaces__srv__SetUrIo_Request;

// Struct for a sequence of interfaces__srv__SetUrIo_Request.
typedef struct interfaces__srv__SetUrIo_Request__Sequence
{
  interfaces__srv__SetUrIo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetUrIo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetUrIo in the package interfaces.
typedef struct interfaces__srv__SetUrIo_Response
{
  int64_t current;
} interfaces__srv__SetUrIo_Response;

// Struct for a sequence of interfaces__srv__SetUrIo_Response.
typedef struct interfaces__srv__SetUrIo_Response__Sequence
{
  interfaces__srv__SetUrIo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetUrIo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_H_
