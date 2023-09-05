// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__functions.h"
#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__init(message_memory);
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListHardwareInterfaces_Request",  // message name
  1,  // number of fields
  sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Request),
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_member_array,  // message members
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Request)() {
  if (!controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.h"


// Include directives for member types
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/hardware_interface.h"
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/detail/hardware_interface__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__init(message_memory);
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__fini(message_memory);
}

size_t controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Response__command_interfaces(
  const void * untyped_member)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__command_interfaces(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__command_interfaces(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Response__command_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__msg__HardwareInterface * item =
    ((const controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__command_interfaces(untyped_member, index));
  controller_manager_msgs__msg__HardwareInterface * value =
    (controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Response__command_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__msg__HardwareInterface * item =
    ((controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__command_interfaces(untyped_member, index));
  const controller_manager_msgs__msg__HardwareInterface * value =
    (const controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Response__command_interfaces(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(member);
  return controller_manager_msgs__msg__HardwareInterface__Sequence__init(member, size);
}

size_t controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Response__state_interfaces(
  const void * untyped_member)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__state_interfaces(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__state_interfaces(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Response__state_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__msg__HardwareInterface * item =
    ((const controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__state_interfaces(untyped_member, index));
  controller_manager_msgs__msg__HardwareInterface * value =
    (controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Response__state_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__msg__HardwareInterface * item =
    ((controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__state_interfaces(untyped_member, index));
  const controller_manager_msgs__msg__HardwareInterface * value =
    (const controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Response__state_interfaces(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(member);
  return controller_manager_msgs__msg__HardwareInterface__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_member_array[2] = {
  {
    "command_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Response, command_interfaces),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Response__command_interfaces,  // size() function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__command_interfaces,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__command_interfaces,  // get(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Response__command_interfaces,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Response__command_interfaces,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Response__command_interfaces  // resize(index) function pointer
  },
  {
    "state_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Response, state_interfaces),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Response__state_interfaces,  // size() function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__state_interfaces,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__state_interfaces,  // get(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Response__state_interfaces,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Response__state_interfaces,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Response__state_interfaces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListHardwareInterfaces_Response",  // message name
  2,  // number of fields
  sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Response),
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_member_array,  // message members
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Response)() {
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, HardwareInterface)();
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, HardwareInterface)();
  if (!controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_members = {
  "controller_manager_msgs__srv",  // service namespace
  "ListHardwareInterfaces",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle,
  NULL  // response message
  // controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle
};

static rosidl_service_type_support_t controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle = {
  0,
  &controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces)() {
  if (!controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Response)()->data;
  }

  return &controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle;
}
