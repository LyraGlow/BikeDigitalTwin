// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from user_defined_interfaces:msg/DigitalState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "user_defined_interfaces/msg/digital_state.hpp"


#ifndef USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__TRAITS_HPP_
#define USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "user_defined_interfaces/msg/detail/digital_state__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace user_defined_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DigitalState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DigitalState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DigitalState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, user_defined_interfaces::msg::DigitalState>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).pose,
    std::forward<T>(msg).twist);
}

}  // namespace msg

}  // namespace user_defined_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<user_defined_interfaces::msg::DigitalState>()
{
  return "user_defined_interfaces::msg::DigitalState";
}

template<>
constexpr const char * name<user_defined_interfaces::msg::DigitalState>()
{
  return "user_defined_interfaces/msg/DigitalState";
}

template<>
struct has_fixed_size<user_defined_interfaces::msg::DigitalState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<user_defined_interfaces::msg::DigitalState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<user_defined_interfaces::msg::DigitalState>
  : std::true_type {};

template<>
struct MessageTraits<user_defined_interfaces::msg::DigitalState>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "pose",
    "twist",
  };
};

}  // namespace rosidl_generator_traits

#endif  // USER_DEFINED_INTERFACES__MSG__DETAIL__DIGITAL_STATE__TRAITS_HPP_
