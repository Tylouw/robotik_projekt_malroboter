// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Pointcoords.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POINTCOORDS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__POINTCOORDS__STRUCT_H_

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
// Member 'curves'
// Member 'size'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Pointcoords in the package interfaces.
typedef struct interfaces__msg__Pointcoords
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__int64__Sequence curves;
  rosidl_runtime_c__int64__Sequence size;
} interfaces__msg__Pointcoords;

// Struct for a sequence of interfaces__msg__Pointcoords.
typedef struct interfaces__msg__Pointcoords__Sequence
{
  interfaces__msg__Pointcoords * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Pointcoords__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__POINTCOORDS__STRUCT_H_
