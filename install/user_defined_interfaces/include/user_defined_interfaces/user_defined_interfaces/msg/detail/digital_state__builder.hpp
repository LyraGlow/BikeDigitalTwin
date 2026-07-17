// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from user_defined_interfaces:msg/DigitalState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "user_defined_interfaces/msg/digital_state.hpp"


#ifndef USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__BUILDER_HPP_
#define USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "user_defined_interfaces/msg/detail/digital_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace user_defined_interfaces
{

namespace msg
{

namespace builder
{

class Init_DigitalState_twist
{
public:
  explicit Init_DigitalState_twist(::user_defined_interfaces::msg::DigitalState & msg)
  : msg_(msg)
  {}
  ::user_defined_interfaces::msg::DigitalState twist(::user_defined_interfaces::msg::DigitalState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::user_defined_interfaces::msg::DigitalState msg_;
};

class Init_DigitalState_pose
{
public:
  explicit Init_DigitalState_pose(::user_defined_interfaces::msg::DigitalState & msg)
  : msg_(msg)
  {}
  Init_DigitalState_twist pose(::user_defined_interfaces::msg::DigitalState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DigitalState_twist(msg_);
  }

private:
  ::user_defined_interfaces::msg::DigitalState msg_;
};

class Init_DigitalState_header
{
public:
  Init_DigitalState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DigitalState_pose header(::user_defined_interfaces::msg::DigitalState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DigitalState_pose(msg_);
  }

private:
  ::user_defined_interfaces::msg::DigitalState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::user_defined_interfaces::msg::DigitalState>()
{
  return user_defined_interfaces::msg::builder::Init_DigitalState_header();
}

}  // namespace user_defined_interfaces

#endif  // USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__BUILDER_HPP_
