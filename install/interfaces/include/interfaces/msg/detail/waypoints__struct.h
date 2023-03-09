// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WAYPOINTS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'z'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Waypoints in the package interfaces.
typedef struct interfaces__msg__Waypoints
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence z;
} interfaces__msg__Waypoints;

// Struct for a sequence of interfaces__msg__Waypoints.
typedef struct interfaces__msg__Waypoints__Sequence
{
  interfaces__msg__Waypoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Waypoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__WAYPOINTS__STRUCT_H_
