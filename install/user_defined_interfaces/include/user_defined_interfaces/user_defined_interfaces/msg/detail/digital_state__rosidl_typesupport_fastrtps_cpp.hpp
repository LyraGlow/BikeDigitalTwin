// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from user_defined_interfaces:msg/DigitalState.idl
// generated code does not contain a copyright notice

#ifndef USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "user_defined_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "user_defined_interfaces/msg/detail/digital_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace user_defined_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_defined_interfaces
cdr_serialize(
  const user_defined_interfaces::msg::DigitalState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_defined_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  user_defined_interfaces::msg::DigitalState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_defined_interfaces
get_serialized_size(
  const user_defined_interfaces::msg::DigitalState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_defined_interfaces
max_serialized_size_DigitalState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_defined_interfaces
cdr_serialize_key(
  const user_defined_interfaces::msg::DigitalState & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_defined_interfaces
get_serialized_size_key(
  const user_defined_interfaces::msg::DigitalState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_defined_interfaces
max_serialized_size_key_DigitalState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace user_defined_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_defined_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, user_defined_interfaces, msg, DigitalState)();

#ifdef __cplusplus
}
#endif

#endif  // USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
