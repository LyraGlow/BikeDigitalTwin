// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from user_defined_interfaces:msg/DigitalState.idl
// generated code does not contain a copyright notice
#include "user_defined_interfaces/msg/detail/digital_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
user_defined_interfaces__msg__DigitalState__init(user_defined_interfaces__msg__DigitalState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    user_defined_interfaces__msg__DigitalState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    user_defined_interfaces__msg__DigitalState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    user_defined_interfaces__msg__DigitalState__fini(msg);
    return false;
  }
  return true;
}

void
user_defined_interfaces__msg__DigitalState__fini(user_defined_interfaces__msg__DigitalState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
}

bool
user_defined_interfaces__msg__DigitalState__are_equal(const user_defined_interfaces__msg__DigitalState * lhs, const user_defined_interfaces__msg__DigitalState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
user_defined_interfaces__msg__DigitalState__copy(
  const user_defined_interfaces__msg__DigitalState * input,
  user_defined_interfaces__msg__DigitalState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

user_defined_interfaces__msg__DigitalState *
user_defined_interfaces__msg__DigitalState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_defined_interfaces__msg__DigitalState * msg = (user_defined_interfaces__msg__DigitalState *)allocator.allocate(sizeof(user_defined_interfaces__msg__DigitalState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(user_defined_interfaces__msg__DigitalState));
  bool success = user_defined_interfaces__msg__DigitalState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
user_defined_interfaces__msg__DigitalState__destroy(user_defined_interfaces__msg__DigitalState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    user_defined_interfaces__msg__DigitalState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
user_defined_interfaces__msg__DigitalState__Sequence__init(user_defined_interfaces__msg__DigitalState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_defined_interfaces__msg__DigitalState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(user_defined_interfaces__msg__DigitalState)) {
      return false;
    }
    data = (user_defined_interfaces__msg__DigitalState *)allocator.zero_allocate(size, sizeof(user_defined_interfaces__msg__DigitalState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = user_defined_interfaces__msg__DigitalState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        user_defined_interfaces__msg__DigitalState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
user_defined_interfaces__msg__DigitalState__Sequence__fini(user_defined_interfaces__msg__DigitalState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      user_defined_interfaces__msg__DigitalState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

user_defined_interfaces__msg__DigitalState__Sequence *
user_defined_interfaces__msg__DigitalState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_defined_interfaces__msg__DigitalState__Sequence * array = (user_defined_interfaces__msg__DigitalState__Sequence *)allocator.allocate(sizeof(user_defined_interfaces__msg__DigitalState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = user_defined_interfaces__msg__DigitalState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
user_defined_interfaces__msg__DigitalState__Sequence__destroy(user_defined_interfaces__msg__DigitalState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    user_defined_interfaces__msg__DigitalState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
user_defined_interfaces__msg__DigitalState__Sequence__are_equal(const user_defined_interfaces__msg__DigitalState__Sequence * lhs, const user_defined_interfaces__msg__DigitalState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!user_defined_interfaces__msg__DigitalState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
user_defined_interfaces__msg__DigitalState__Sequence__copy(
  const user_defined_interfaces__msg__DigitalState__Sequence * input,
  user_defined_interfaces__msg__DigitalState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(user_defined_interfaces__msg__DigitalState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(user_defined_interfaces__msg__DigitalState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    user_defined_interfaces__msg__DigitalState * data =
      (user_defined_interfaces__msg__DigitalState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!user_defined_interfaces__msg__DigitalState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          user_defined_interfaces__msg__DigitalState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!user_defined_interfaces__msg__DigitalState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
