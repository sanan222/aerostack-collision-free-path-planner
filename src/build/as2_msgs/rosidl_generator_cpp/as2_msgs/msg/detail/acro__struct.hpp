// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from as2_msgs:msg/Acro.idl
// generated code does not contain a copyright notice

#ifndef AS2_MSGS__MSG__DETAIL__ACRO__STRUCT_HPP_
#define AS2_MSGS__MSG__DETAIL__ACRO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'angular_rates'
// Member 'thrust'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__as2_msgs__msg__Acro __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__msg__Acro __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Acro_
{
  using Type = Acro_<ContainerAllocator>;

  explicit Acro_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    angular_rates(_init),
    thrust(_init)
  {
    (void)_init;
  }

  explicit Acro_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    angular_rates(_alloc, _init),
    thrust(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angular_rates_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_rates_type angular_rates;
  using _thrust_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _thrust_type thrust;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angular_rates(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_rates = _arg;
    return *this;
  }
  Type & set__thrust(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->thrust = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::msg::Acro_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::msg::Acro_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::msg::Acro_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::msg::Acro_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::msg::Acro_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::msg::Acro_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::msg::Acro_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::msg::Acro_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::msg::Acro_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::msg::Acro_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__msg__Acro
    std::shared_ptr<as2_msgs::msg::Acro_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__msg__Acro
    std::shared_ptr<as2_msgs::msg::Acro_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Acro_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angular_rates != other.angular_rates) {
      return false;
    }
    if (this->thrust != other.thrust) {
      return false;
    }
    return true;
  }
  bool operator!=(const Acro_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Acro_

// alias to use template instance with default allocator
using Acro =
  as2_msgs::msg::Acro_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace as2_msgs

#endif  // AS2_MSGS__MSG__DETAIL__ACRO__STRUCT_HPP_
