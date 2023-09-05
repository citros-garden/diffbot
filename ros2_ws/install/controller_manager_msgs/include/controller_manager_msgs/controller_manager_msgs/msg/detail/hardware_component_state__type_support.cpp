// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_manager_msgs/msg/detail/hardware_component_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace controller_manager_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HardwareComponentState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) controller_manager_msgs::msg::HardwareComponentState(_init);
}

void HardwareComponentState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<controller_manager_msgs::msg::HardwareComponentState *>(message_memory);
  typed_message->~HardwareComponentState();
}

size_t size_function__HardwareComponentState__command_interfaces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<controller_manager_msgs::msg::HardwareInterface> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HardwareComponentState__command_interfaces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<controller_manager_msgs::msg::HardwareInterface> *>(untyped_member);
  return &member[index];
}

void * get_function__HardwareComponentState__command_interfaces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<controller_manager_msgs::msg::HardwareInterface> *>(untyped_member);
  return &member[index];
}

void fetch_function__HardwareComponentState__command_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const controller_manager_msgs::msg::HardwareInterface *>(
    get_const_function__HardwareComponentState__command_interfaces(untyped_member, index));
  auto & value = *reinterpret_cast<controller_manager_msgs::msg::HardwareInterface *>(untyped_value);
  value = item;
}

void assign_function__HardwareComponentState__command_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<controller_manager_msgs::msg::HardwareInterface *>(
    get_function__HardwareComponentState__command_interfaces(untyped_member, index));
  const auto & value = *reinterpret_cast<const controller_manager_msgs::msg::HardwareInterface *>(untyped_value);
  item = value;
}

void resize_function__HardwareComponentState__command_interfaces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<controller_manager_msgs::msg::HardwareInterface> *>(untyped_member);
  member->resize(size);
}

size_t size_function__HardwareComponentState__state_interfaces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<controller_manager_msgs::msg::HardwareInterface> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HardwareComponentState__state_interfaces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<controller_manager_msgs::msg::HardwareInterface> *>(untyped_member);
  return &member[index];
}

void * get_function__HardwareComponentState__state_interfaces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<controller_manager_msgs::msg::HardwareInterface> *>(untyped_member);
  return &member[index];
}

void fetch_function__HardwareComponentState__state_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const controller_manager_msgs::msg::HardwareInterface *>(
    get_const_function__HardwareComponentState__state_interfaces(untyped_member, index));
  auto & value = *reinterpret_cast<controller_manager_msgs::msg::HardwareInterface *>(untyped_value);
  value = item;
}

void assign_function__HardwareComponentState__state_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<controller_manager_msgs::msg::HardwareInterface *>(
    get_function__HardwareComponentState__state_interfaces(untyped_member, index));
  const auto & value = *reinterpret_cast<const controller_manager_msgs::msg::HardwareInterface *>(untyped_value);
  item = value;
}

void resize_function__HardwareComponentState__state_interfaces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<controller_manager_msgs::msg::HardwareInterface> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HardwareComponentState_message_member_array[6] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::msg::HardwareComponentState, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::msg::HardwareComponentState, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "class_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::msg::HardwareComponentState, class_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lifecycle_msgs::msg::State>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::msg::HardwareComponentState, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "command_interfaces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<controller_manager_msgs::msg::HardwareInterface>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::msg::HardwareComponentState, command_interfaces),  // bytes offset in struct
    nullptr,  // default value
    size_function__HardwareComponentState__command_interfaces,  // size() function pointer
    get_const_function__HardwareComponentState__command_interfaces,  // get_const(index) function pointer
    get_function__HardwareComponentState__command_interfaces,  // get(index) function pointer
    fetch_function__HardwareComponentState__command_interfaces,  // fetch(index, &value) function pointer
    assign_function__HardwareComponentState__command_interfaces,  // assign(index, value) function pointer
    resize_function__HardwareComponentState__command_interfaces  // resize(index) function pointer
  },
  {
    "state_interfaces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<controller_manager_msgs::msg::HardwareInterface>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::msg::HardwareComponentState, state_interfaces),  // bytes offset in struct
    nullptr,  // default value
    size_function__HardwareComponentState__state_interfaces,  // size() function pointer
    get_const_function__HardwareComponentState__state_interfaces,  // get_const(index) function pointer
    get_function__HardwareComponentState__state_interfaces,  // get(index) function pointer
    fetch_function__HardwareComponentState__state_interfaces,  // fetch(index, &value) function pointer
    assign_function__HardwareComponentState__state_interfaces,  // assign(index, value) function pointer
    resize_function__HardwareComponentState__state_interfaces  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HardwareComponentState_message_members = {
  "controller_manager_msgs::msg",  // message namespace
  "HardwareComponentState",  // message name
  6,  // number of fields
  sizeof(controller_manager_msgs::msg::HardwareComponentState),
  HardwareComponentState_message_member_array,  // message members
  HardwareComponentState_init_function,  // function to initialize message memory (memory has to be allocated)
  HardwareComponentState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HardwareComponentState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HardwareComponentState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace controller_manager_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::msg::HardwareComponentState>()
{
  return &::controller_manager_msgs::msg::rosidl_typesupport_introspection_cpp::HardwareComponentState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, msg, HardwareComponentState)() {
  return &::controller_manager_msgs::msg::rosidl_typesupport_introspection_cpp::HardwareComponentState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
