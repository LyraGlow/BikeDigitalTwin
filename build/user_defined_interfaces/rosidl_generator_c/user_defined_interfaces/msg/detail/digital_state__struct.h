// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from user_defined_interfaces:msg/DigitalState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "user_defined_interfaces/msg/digital_state.h"


#ifndef USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__STRUCT_H_
#define USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/DigitalState in the package user_defined_interfaces.
/**
  * 时间戳和坐标系
 */
typedef struct user_defined_interfaces__msg__DigitalState
{
  std_msgs__msg__Header header;
  /// 位置（x, y, z + 四元数朝向）
  geometry_msgs__msg__Pose pose;
  /// 速度（线速度 + 角速度）
  geometry_msgs__msg__Twist twist;
} user_defined_interfaces__msg__DigitalState;

// Struct for a sequence of user_defined_interfaces__msg__DigitalState.
typedef struct user_defined_interfaces__msg__DigitalState__Sequence
{
  user_defined_interfaces__msg__DigitalState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} user_defined_interfaces__msg__DigitalState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__STRUCT_H_
