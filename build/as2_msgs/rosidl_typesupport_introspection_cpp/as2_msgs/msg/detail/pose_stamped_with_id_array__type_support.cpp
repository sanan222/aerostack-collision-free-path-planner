// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from as2_msgs:msg/PoseStampedWithIDArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "as2_msgs/msg/detail/pose_stamped_with_id_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace as2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PoseStampedWithIDArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) as2_msgs::msg::PoseStampedWithIDArray(_init);
}

void PoseStampedWithIDArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<as2_msgs::msg::PoseStampedWithIDArray *>(message_memory);
  typed_message->~PoseStampedWithIDArray();
}

size_t size_function__PoseStampedWithIDArray__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<as2_msgs::msg::PoseStampedWithID> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseStampedWithIDArray__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<as2_msgs::msg::PoseStampedWithID> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseStampedWithIDArray__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<as2_msgs::msg::PoseStampedWithID> *>(untyped_member);
  return &member[index];
}

void fetch_function__PoseStampedWithIDArray__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const as2_msgs::msg::PoseStampedWithID *>(
    get_const_function__PoseStampedWithIDArray__poses(untyped_member, index));
  auto & value = *reinterpret_cast<as2_msgs::msg::PoseStampedWithID *>(untyped_value);
  value = item;
}

void assign_function__PoseStampedWithIDArray__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<as2_msgs::msg::PoseStampedWithID *>(
    get_function__PoseStampedWithIDArray__poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const as2_msgs::msg::PoseStampedWithID *>(untyped_value);
  item = value;
}

void resize_function__PoseStampedWithIDArray__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<as2_msgs::msg::PoseStampedWithID> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseStampedWithIDArray_message_member_array[1] = {
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<as2_msgs::msg::PoseStampedWithID>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(as2_msgs::msg::PoseStampedWithIDArray, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseStampedWithIDArray__poses,  // size() function pointer
    get_const_function__PoseStampedWithIDArray__poses,  // get_const(index) function pointer
    get_function__PoseStampedWithIDArray__poses,  // get(index) function pointer
    fetch_function__PoseStampedWithIDArray__poses,  // fetch(index, &value) function pointer
    assign_function__PoseStampedWithIDArray__poses,  // assign(index, value) function pointer
    resize_function__PoseStampedWithIDArray__poses  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseStampedWithIDArray_message_members = {
  "as2_msgs::msg",  // message namespace
  "PoseStampedWithIDArray",  // message name
  1,  // number of fields
  sizeof(as2_msgs::msg::PoseStampedWithIDArray),
  PoseStampedWithIDArray_message_member_array,  // message members
  PoseStampedWithIDArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseStampedWithIDArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseStampedWithIDArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseStampedWithIDArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace as2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::msg::PoseStampedWithIDArray>()
{
  return &::as2_msgs::msg::rosidl_typesupport_introspection_cpp::PoseStampedWithIDArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, msg, PoseStampedWithIDArray)() {
  return &::as2_msgs::msg::rosidl_typesupport_introspection_cpp::PoseStampedWithIDArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
