// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_interface:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_interface__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__msg__Control __declspec(deprecated)
#endif

namespace controller_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->a_button = 0;
      this->b_button = 0;
      this->bumper_right = 0;
    }
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->a_button = 0;
      this->b_button = 0;
      this->bumper_right = 0;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _a_button_type =
    uint16_t;
  _a_button_type a_button;
  using _b_button_type =
    uint16_t;
  _b_button_type b_button;
  using _bumper_right_type =
    uint16_t;
  _bumper_right_type bumper_right;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__a_button(
    const uint16_t & _arg)
  {
    this->a_button = _arg;
    return *this;
  }
  Type & set__b_button(
    const uint16_t & _arg)
  {
    this->b_button = _arg;
    return *this;
  }
  Type & set__bumper_right(
    const uint16_t & _arg)
  {
    this->bumper_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__msg__Control
    std::shared_ptr<controller_interface::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__msg__Control
    std::shared_ptr<controller_interface::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->a_button != other.a_button) {
      return false;
    }
    if (this->b_button != other.b_button) {
      return false;
    }
    if (this->bumper_right != other.bumper_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  controller_interface::msg::Control_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_interface

#endif  // CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__STRUCT_HPP_
