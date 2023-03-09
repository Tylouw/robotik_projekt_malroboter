// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Pointcoords.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/pointcoords__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `x`
// Member `y`
// Member `curves`
// Member `size`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces__msg__Pointcoords__init(interfaces__msg__Pointcoords * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x, 0)) {
    interfaces__msg__Pointcoords__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y, 0)) {
    interfaces__msg__Pointcoords__fini(msg);
    return false;
  }
  // curves
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->curves, 0)) {
    interfaces__msg__Pointcoords__fini(msg);
    return false;
  }
  // size
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->size, 0)) {
    interfaces__msg__Pointcoords__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__Pointcoords__fini(interfaces__msg__Pointcoords * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__double__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__double__Sequence__fini(&msg->y);
  // curves
  rosidl_runtime_c__int64__Sequence__fini(&msg->curves);
  // size
  rosidl_runtime_c__int64__Sequence__fini(&msg->size);
}

bool
interfaces__msg__Pointcoords__are_equal(const interfaces__msg__Pointcoords * lhs, const interfaces__msg__Pointcoords * rhs)
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
  // curves
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->curves), &(rhs->curves)))
  {
    return false;
  }
  // size
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__Pointcoords__copy(
  const interfaces__msg__Pointcoords * input,
  interfaces__msg__Pointcoords * output)
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
  // curves
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->curves), &(output->curves)))
  {
    return false;
  }
  // size
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

interfaces__msg__Pointcoords *
interfaces__msg__Pointcoords__create()
{
  interfaces__msg__Pointcoords * msg = (interfaces__msg__Pointcoords *)malloc(sizeof(interfaces__msg__Pointcoords));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Pointcoords));
  bool success = interfaces__msg__Pointcoords__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Pointcoords__destroy(interfaces__msg__Pointcoords * msg)
{
  if (msg) {
    interfaces__msg__Pointcoords__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__Pointcoords__Sequence__init(interfaces__msg__Pointcoords__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__Pointcoords * data = NULL;
  if (size) {
    data = (interfaces__msg__Pointcoords *)calloc(size, sizeof(interfaces__msg__Pointcoords));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Pointcoords__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Pointcoords__fini(&data[i - 1]);
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
interfaces__msg__Pointcoords__Sequence__fini(interfaces__msg__Pointcoords__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__Pointcoords__fini(&array->data[i]);
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

interfaces__msg__Pointcoords__Sequence *
interfaces__msg__Pointcoords__Sequence__create(size_t size)
{
  interfaces__msg__Pointcoords__Sequence * array = (interfaces__msg__Pointcoords__Sequence *)malloc(sizeof(interfaces__msg__Pointcoords__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Pointcoords__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Pointcoords__Sequence__destroy(interfaces__msg__Pointcoords__Sequence * array)
{
  if (array) {
    interfaces__msg__Pointcoords__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__msg__Pointcoords__Sequence__are_equal(const interfaces__msg__Pointcoords__Sequence * lhs, const interfaces__msg__Pointcoords__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__Pointcoords__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__Pointcoords__Sequence__copy(
  const interfaces__msg__Pointcoords__Sequence * input,
  interfaces__msg__Pointcoords__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__Pointcoords);
    interfaces__msg__Pointcoords * data =
      (interfaces__msg__Pointcoords *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__Pointcoords__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__Pointcoords__fini(&data[i]);
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
    if (!interfaces__msg__Pointcoords__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
