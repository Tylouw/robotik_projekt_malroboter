// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Waypoints.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/waypoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces__msg__Waypoints__init(interfaces__msg__Waypoints * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x, 0)) {
    interfaces__msg__Waypoints__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y, 0)) {
    interfaces__msg__Waypoints__fini(msg);
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__init(&msg->z, 0)) {
    interfaces__msg__Waypoints__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__Waypoints__fini(interfaces__msg__Waypoints * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__double__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__double__Sequence__fini(&msg->y);
  // z
  rosidl_runtime_c__double__Sequence__fini(&msg->z);
}

bool
interfaces__msg__Waypoints__are_equal(const interfaces__msg__Waypoints * lhs, const interfaces__msg__Waypoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->z), &(rhs->z)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__Waypoints__copy(
  const interfaces__msg__Waypoints * input,
  interfaces__msg__Waypoints * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->z), &(output->z)))
  {
    return false;
  }
  return true;
}

interfaces__msg__Waypoints *
interfaces__msg__Waypoints__create()
{
  interfaces__msg__Waypoints * msg = (interfaces__msg__Waypoints *)malloc(sizeof(interfaces__msg__Waypoints));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Waypoints));
  bool success = interfaces__msg__Waypoints__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Waypoints__destroy(interfaces__msg__Waypoints * msg)
{
  if (msg) {
    interfaces__msg__Waypoints__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__Waypoints__Sequence__init(interfaces__msg__Waypoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__Waypoints * data = NULL;
  if (size) {
    data = (interfaces__msg__Waypoints *)calloc(size, sizeof(interfaces__msg__Waypoints));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Waypoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Waypoints__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__Waypoints__Sequence__fini(interfaces__msg__Waypoints__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__Waypoints__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__Waypoints__Sequence *
interfaces__msg__Waypoints__Sequence__create(size_t size)
{
  interfaces__msg__Waypoints__Sequence * array = (interfaces__msg__Waypoints__Sequence *)malloc(sizeof(interfaces__msg__Waypoints__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Waypoints__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Waypoints__Sequence__destroy(interfaces__msg__Waypoints__Sequence * array)
{
  if (array) {
    interfaces__msg__Waypoints__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__msg__Waypoints__Sequence__are_equal(const interfaces__msg__Waypoints__Sequence * lhs, const interfaces__msg__Waypoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__Waypoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__Waypoints__Sequence__copy(
  const interfaces__msg__Waypoints__Sequence * input,
  interfaces__msg__Waypoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__Waypoints);
    interfaces__msg__Waypoints * data =
      (interfaces__msg__Waypoints *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__Waypoints__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__Waypoints__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__Waypoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
