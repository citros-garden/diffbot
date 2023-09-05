// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:srv/ListControllerTypes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/srv/detail/list_controller_types__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/srv/detail/list_controller_types__functions.h"
#include "controller_manager_msgs/srv/detail/list_controller_types__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListControllerTypes_Request__init(message_memory);
}

void controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListControllerTypes_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListControllerTypes_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListControllerTypes_Request",  // message name
  1,  // number of fields
  sizeof(controller_manager_msgs__srv__ListControllerTypes_Request),
  controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_member_array,  // message members
  controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllerTypes_Request)() {
  if (!controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListControllerTypes_Request__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_manager_msgs/srv/detail/list_controller_types__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controller_types__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controller_types__struct.h"


// Include directives for member types
// Member `types`
// Member `base_classes`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListControllerTypes_Response__init(message_memory);
}

void controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListControllerTypes_Response__fini(message_memory);
}

size_t controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__size_function__ListControllerTypes_Response__types(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllerTypes_Response__types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_function__ListControllerTypes_Response__types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__fetch_function__ListControllerTypes_Response__types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllerTypes_Response__types(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__assign_function__ListControllerTypes_Response__types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_function__ListControllerTypes_Response__types(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__resize_function__ListControllerTypes_Response__types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__size_function__ListControllerTypes_Response__base_classes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllerTypes_Response__base_classes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_function__ListControllerTypes_Response__base_classes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__fetch_function__ListControllerTypes_Response__base_classes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllerTypes_Response__base_classes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__assign_function__ListControllerTypes_Response__base_classes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_function__ListControllerTypes_Response__base_classes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__resize_function__ListControllerTypes_Response__base_classes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_member_array[2] = {
  {
    "types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListControllerTypes_Response, types),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__size_function__ListControllerTypes_Response__types,  // size() function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllerTypes_Response__types,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_function__ListControllerTypes_Response__types,  // get(index) function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__fetch_function__ListControllerTypes_Response__types,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__assign_function__ListControllerTypes_Response__types,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__resize_function__ListControllerTypes_Response__types  // resize(index) function pointer
  },
  {
    "base_classes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListControllerTypes_Response, base_classes),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__size_function__ListControllerTypes_Response__base_classes,  // size() function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_const_function__ListControllerTypes_Response__base_classes,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__get_function__ListControllerTypes_Response__base_classes,  // get(index) function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__fetch_function__ListControllerTypes_Response__base_classes,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__assign_function__ListControllerTypes_Response__base_classes,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__resize_function__ListControllerTypes_Response__base_classes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListControllerTypes_Response",  // message name
  2,  // number of fields
  sizeof(controller_manager_msgs__srv__ListControllerTypes_Response),
  controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_member_array,  // message members
  controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllerTypes_Response)() {
  if (!controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListControllerTypes_Response__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_controller_types__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_service_members = {
  "controller_manager_msgs__srv",  // service namespace
  "ListControllerTypes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_Request_message_type_support_handle,
  NULL  // response message
  // controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_Response_message_type_support_handle
};

static rosidl_service_type_support_t controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_service_type_support_handle = {
  0,
  &controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllerTypes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllerTypes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllerTypes)() {
  if (!controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_service_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllerTypes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListControllerTypes_Response)()->data;
  }

  return &controller_manager_msgs__srv__detail__list_controller_types__rosidl_typesupport_introspection_c__ListControllerTypes_service_type_support_handle;
}
