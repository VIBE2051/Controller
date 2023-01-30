// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_interface:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_interface/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_interface
{

namespace msg
{

namespace builder
{

class Init_Control_bumper_right
{
public:
  explicit Init_Control_bumper_right(::controller_interface::msg::Control & msg)
  : msg_(msg)
  {}
  ::controller_interface::msg::Control bumper_right(::controller_interface::msg::Control::_bumper_right_type arg)
  {
    msg_.bumper_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interface::msg::Control msg_;
};

class Init_Control_b_button
{
public:
  explicit Init_Control_b_button(::controller_interface::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_bumper_right b_button(::controller_interface::msg::Control::_b_button_type arg)
  {
    msg_.b_button = std::move(arg);
    return Init_Control_bumper_right(msg_);
  }

private:
  ::controller_interface::msg::Control msg_;
};

class Init_Control_a_button
{
public:
  explicit Init_Control_a_button(::controller_interface::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_b_button a_button(::controller_interface::msg::Control::_a_button_type arg)
  {
    msg_.a_button = std::move(arg);
    return Init_Control_b_button(msg_);
  }

private:
  ::controller_interface::msg::Control msg_;
};

class Init_Control_y
{
public:
  explicit Init_Control_y(::controller_interface::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_a_button y(::controller_interface::msg::Control::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Control_a_button(msg_);
  }

private:
  ::controller_interface::msg::Control msg_;
};

class Init_Control_x
{
public:
  Init_Control_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_y x(::controller_interface::msg::Control::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Control_y(msg_);
  }

private:
  ::controller_interface::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::msg::Control>()
{
  return controller_interface::msg::builder::Init_Control_x();
}

}  // namespace controller_interface

#endif  // CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__BUILDER_HPP_
