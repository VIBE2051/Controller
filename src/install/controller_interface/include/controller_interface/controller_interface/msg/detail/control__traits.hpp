// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_interface:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__TRAITS_HPP_
#define CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_interface/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Control & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: a_button
  {
    out << "a_button: ";
    rosidl_generator_traits::value_to_yaml(msg.a_button, out);
    out << ", ";
  }

  // member: b_button
  {
    out << "b_button: ";
    rosidl_generator_traits::value_to_yaml(msg.b_button, out);
    out << ", ";
  }

  // member: bumper_right
  {
    out << "bumper_right: ";
    rosidl_generator_traits::value_to_yaml(msg.bumper_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: a_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_button: ";
    rosidl_generator_traits::value_to_yaml(msg.a_button, out);
    out << "\n";
  }

  // member: b_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b_button: ";
    rosidl_generator_traits::value_to_yaml(msg.b_button, out);
    out << "\n";
  }

  // member: bumper_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bumper_right: ";
    rosidl_generator_traits::value_to_yaml(msg.bumper_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Control & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace controller_interface

namespace rosidl_generator_traits
{

[[deprecated("use controller_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_interface::msg::Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const controller_interface::msg::Control & msg)
{
  return controller_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controller_interface::msg::Control>()
{
  return "controller_interface::msg::Control";
}

template<>
inline const char * name<controller_interface::msg::Control>()
{
  return "controller_interface/msg/Control";
}

template<>
struct has_fixed_size<controller_interface::msg::Control>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interface::msg::Control>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interface::msg::Control>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__TRAITS_HPP_
