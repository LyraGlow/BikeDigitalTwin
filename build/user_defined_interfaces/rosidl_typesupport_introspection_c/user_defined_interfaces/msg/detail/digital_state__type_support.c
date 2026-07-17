// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from user_defined_interfaces:msg/DigitalState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "user_defined_interfaces/msg/detail/digital_state__rosidl_typesupport_introspection_c.h"
#include "user_defined_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "user_defined_interfaces/msg/detail/digital_state__functions.h"
#include "user_defined_interfaces/msg/detail/digital_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  user_defined_interfaces__msg__DigitalState__init(message_memory);
}

void user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_fini_function(void * message_memory)
{
  user_defined_interfaces__msg__DigitalState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(user_defined_interfaces__msg__DigitalState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(user_defined_interfaces__msg__DigitalState, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(user_defined_interfaces__msg__DigitalState, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_members = {
  "user_defined_interfaces__msg",  // message namespace
  "DigitalState",  // message name
  3,  // number of fields
  sizeof(user_defined_interfaces__msg__DigitalState),
  false,  // has_any_key_member_
  user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_member_array,  // message members
  user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_init_function,  // function to initialize message memory (memory has to be allocated)
  user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_type_support_handle = {
  0,
  &user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_members,
  get_message_typesupport_handle_function,
  &user_defined_interfaces__msg__DigitalState__get_type_hash,
  &user_defined_interfaces__msg__DigitalState__get_type_description,
  &user_defined_interfaces__msg__DigitalState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_user_defined_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, user_defined_interfaces, msg, DigitalState)() {
  user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_type_support_handle.typesupport_identifier) {
    user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &user_defined_interfaces__msg__DigitalState__rosidl_typesupport_introspection_c__DigitalState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
