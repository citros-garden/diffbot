// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_msgs:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice
#include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_msgs/action/detail/follow_joint_trajectory__struct.h"
#include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/duration__functions.h"  // goal_time_tolerance
#include "control_msgs/msg/detail/joint_component_tolerance__functions.h"  // component_goal_tolerance, component_path_tolerance
#include "control_msgs/msg/detail/joint_tolerance__functions.h"  // goal_tolerance, path_tolerance
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"  // trajectory
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__functions.h"  // multi_dof_trajectory

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();
size_t get_serialized_size_control_msgs__msg__JointComponentTolerance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_control_msgs__msg__JointComponentTolerance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, msg, JointComponentTolerance)();
size_t get_serialized_size_control_msgs__msg__JointTolerance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_control_msgs__msg__JointTolerance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, msg, JointTolerance)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectory)();


using _FollowJointTrajectory_Goal__ros_msg_type = control_msgs__action__FollowJointTrajectory_Goal;

static bool _FollowJointTrajectory_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowJointTrajectory_Goal__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: multi_dof_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->multi_dof_trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: path_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, msg, JointTolerance
      )()->data);
    size_t size = ros_message->path_tolerance.size;
    auto array_ptr = ros_message->path_tolerance.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: component_path_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, msg, JointComponentTolerance
      )()->data);
    size_t size = ros_message->component_path_tolerance.size;
    auto array_ptr = ros_message->component_path_tolerance.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: goal_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, msg, JointTolerance
      )()->data);
    size_t size = ros_message->goal_tolerance.size;
    auto array_ptr = ros_message->goal_tolerance.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: component_goal_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, msg, JointComponentTolerance
      )()->data);
    size_t size = ros_message->component_goal_tolerance.size;
    auto array_ptr = ros_message->component_goal_tolerance.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: goal_time_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_time_tolerance, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowJointTrajectory_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowJointTrajectory_Goal__ros_msg_type * ros_message = static_cast<_FollowJointTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory))
    {
      return false;
    }
  }

  // Field name: multi_dof_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->multi_dof_trajectory))
    {
      return false;
    }
  }

  // Field name: path_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, msg, JointTolerance
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path_tolerance.data) {
      control_msgs__msg__JointTolerance__Sequence__fini(&ros_message->path_tolerance);
    }
    if (!control_msgs__msg__JointTolerance__Sequence__init(&ros_message->path_tolerance, size)) {
      fprintf(stderr, "failed to create array for field 'path_tolerance'");
      return false;
    }
    auto array_ptr = ros_message->path_tolerance.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: component_path_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, msg, JointComponentTolerance
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->component_path_tolerance.data) {
      control_msgs__msg__JointComponentTolerance__Sequence__fini(&ros_message->component_path_tolerance);
    }
    if (!control_msgs__msg__JointComponentTolerance__Sequence__init(&ros_message->component_path_tolerance, size)) {
      fprintf(stderr, "failed to create array for field 'component_path_tolerance'");
      return false;
    }
    auto array_ptr = ros_message->component_path_tolerance.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: goal_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, msg, JointTolerance
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->goal_tolerance.data) {
      control_msgs__msg__JointTolerance__Sequence__fini(&ros_message->goal_tolerance);
    }
    if (!control_msgs__msg__JointTolerance__Sequence__init(&ros_message->goal_tolerance, size)) {
      fprintf(stderr, "failed to create array for field 'goal_tolerance'");
      return false;
    }
    auto array_ptr = ros_message->goal_tolerance.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: component_goal_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, msg, JointComponentTolerance
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->component_goal_tolerance.data) {
      control_msgs__msg__JointComponentTolerance__Sequence__fini(&ros_message->component_goal_tolerance);
    }
    if (!control_msgs__msg__JointComponentTolerance__Sequence__init(&ros_message->component_goal_tolerance, size)) {
      fprintf(stderr, "failed to create array for field 'component_goal_tolerance'");
      return false;
    }
    auto array_ptr = ros_message->component_goal_tolerance.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: goal_time_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_time_tolerance))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowJointTrajectory_Goal__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
    &(ros_message->trajectory), current_alignment);
  // field.name multi_dof_trajectory

  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectory(
    &(ros_message->multi_dof_trajectory), current_alignment);
  // field.name path_tolerance
  {
    size_t array_size = ros_message->path_tolerance.size;
    auto array_ptr = ros_message->path_tolerance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_control_msgs__msg__JointTolerance(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name component_path_tolerance
  {
    size_t array_size = ros_message->component_path_tolerance.size;
    auto array_ptr = ros_message->component_path_tolerance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_control_msgs__msg__JointComponentTolerance(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name goal_tolerance
  {
    size_t array_size = ros_message->goal_tolerance.size;
    auto array_ptr = ros_message->goal_tolerance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_control_msgs__msg__JointTolerance(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name component_goal_tolerance
  {
    size_t array_size = ros_message->component_goal_tolerance.size;
    auto array_ptr = ros_message->component_goal_tolerance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_control_msgs__msg__JointComponentTolerance(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name goal_time_tolerance

  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->goal_time_tolerance), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowJointTrajectory_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__action__FollowJointTrajectory_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: multi_dof_trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: path_tolerance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_control_msgs__msg__JointTolerance(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: component_path_tolerance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_control_msgs__msg__JointComponentTolerance(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: goal_tolerance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_control_msgs__msg__JointTolerance(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: component_goal_tolerance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_control_msgs__msg__JointComponentTolerance(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: goal_time_tolerance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FollowJointTrajectory_Goal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__action__FollowJointTrajectory_Goal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowJointTrajectory_Goal = {
  "control_msgs::action",
  "FollowJointTrajectory_Goal",
  _FollowJointTrajectory_Goal__cdr_serialize,
  _FollowJointTrajectory_Goal__cdr_deserialize,
  _FollowJointTrajectory_Goal__get_serialized_size,
  _FollowJointTrajectory_Goal__max_serialized_size
};

static rosidl_message_type_support_t _FollowJointTrajectory_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowJointTrajectory_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Goal)() {
  return &_FollowJointTrajectory_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // error_string
#include "rosidl_runtime_c/string_functions.h"  // error_string

// forward declare type support functions


using _FollowJointTrajectory_Result__ros_msg_type = control_msgs__action__FollowJointTrajectory_Result;

static bool _FollowJointTrajectory_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowJointTrajectory_Result__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: error_string
  {
    const rosidl_runtime_c__String * str = &ros_message->error_string;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _FollowJointTrajectory_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowJointTrajectory_Result__ros_msg_type * ros_message = static_cast<_FollowJointTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: error_string
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_string.data) {
      rosidl_runtime_c__String__init(&ros_message->error_string);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_string,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_string'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowJointTrajectory_Result__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_string.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowJointTrajectory_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__action__FollowJointTrajectory_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error_string
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FollowJointTrajectory_Result__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__action__FollowJointTrajectory_Result(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowJointTrajectory_Result = {
  "control_msgs::action",
  "FollowJointTrajectory_Result",
  _FollowJointTrajectory_Result__cdr_serialize,
  _FollowJointTrajectory_Result__cdr_deserialize,
  _FollowJointTrajectory_Result__get_serialized_size,
  _FollowJointTrajectory_Result__max_serialized_size
};

static rosidl_message_type_support_t _FollowJointTrajectory_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowJointTrajectory_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Result)() {
  return &_FollowJointTrajectory_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // joint_names, multi_dof_joint_names
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // joint_names, multi_dof_joint_names
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"  // actual, desired, error
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"  // multi_dof_actual, multi_dof_desired, multi_dof_error

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();


using _FollowJointTrajectory_Feedback__ros_msg_type = control_msgs__action__FollowJointTrajectory_Feedback;

static bool _FollowJointTrajectory_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowJointTrajectory_Feedback__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: joint_names
  {
    size_t size = ros_message->joint_names.size;
    auto array_ptr = ros_message->joint_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->desired, cdr))
    {
      return false;
    }
  }

  // Field name: actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->actual, cdr))
    {
      return false;
    }
  }

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->error, cdr))
    {
      return false;
    }
  }

  // Field name: multi_dof_joint_names
  {
    size_t size = ros_message->multi_dof_joint_names.size;
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: multi_dof_desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->multi_dof_desired, cdr))
    {
      return false;
    }
  }

  // Field name: multi_dof_actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->multi_dof_actual, cdr))
    {
      return false;
    }
  }

  // Field name: multi_dof_error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->multi_dof_error, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowJointTrajectory_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowJointTrajectory_Feedback__ros_msg_type * ros_message = static_cast<_FollowJointTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: joint_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->joint_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->joint_names, size)) {
      fprintf(stderr, "failed to create array for field 'joint_names'");
      return false;
    }
    auto array_ptr = ros_message->joint_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'joint_names'\n");
        return false;
      }
    }
  }

  // Field name: desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->desired))
    {
      return false;
    }
  }

  // Field name: actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->actual))
    {
      return false;
    }
  }

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->error))
    {
      return false;
    }
  }

  // Field name: multi_dof_joint_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->multi_dof_joint_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->multi_dof_joint_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->multi_dof_joint_names, size)) {
      fprintf(stderr, "failed to create array for field 'multi_dof_joint_names'");
      return false;
    }
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'multi_dof_joint_names'\n");
        return false;
      }
    }
  }

  // Field name: multi_dof_desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->multi_dof_desired))
    {
      return false;
    }
  }

  // Field name: multi_dof_actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->multi_dof_actual))
    {
      return false;
    }
  }

  // Field name: multi_dof_error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->multi_dof_error))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowJointTrajectory_Feedback__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name joint_names
  {
    size_t array_size = ros_message->joint_names.size;
    auto array_ptr = ros_message->joint_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name desired

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->desired), current_alignment);
  // field.name actual

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->actual), current_alignment);
  // field.name error

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->error), current_alignment);
  // field.name multi_dof_joint_names
  {
    size_t array_size = ros_message->multi_dof_joint_names.size;
    auto array_ptr = ros_message->multi_dof_joint_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name multi_dof_desired

  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_desired), current_alignment);
  // field.name multi_dof_actual

  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_actual), current_alignment);
  // field.name multi_dof_error

  current_alignment += get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    &(ros_message->multi_dof_error), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowJointTrajectory_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__action__FollowJointTrajectory_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: actual
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: multi_dof_joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: multi_dof_desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: multi_dof_actual
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: multi_dof_error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FollowJointTrajectory_Feedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__action__FollowJointTrajectory_Feedback(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowJointTrajectory_Feedback = {
  "control_msgs::action",
  "FollowJointTrajectory_Feedback",
  _FollowJointTrajectory_Feedback__cdr_serialize,
  _FollowJointTrajectory_Feedback__cdr_deserialize,
  _FollowJointTrajectory_Feedback__get_serialized_size,
  _FollowJointTrajectory_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _FollowJointTrajectory_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowJointTrajectory_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Feedback)() {
  return &_FollowJointTrajectory_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FollowJointTrajectory_SendGoal_Request__ros_msg_type = control_msgs__action__FollowJointTrajectory_SendGoal_Request;

static bool _FollowJointTrajectory_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowJointTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowJointTrajectory_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowJointTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<_FollowJointTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowJointTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_control_msgs__action__FollowJointTrajectory_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowJointTrajectory_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__action__FollowJointTrajectory_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_SendGoal_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_control_msgs__action__FollowJointTrajectory_Goal(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FollowJointTrajectory_SendGoal_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__action__FollowJointTrajectory_SendGoal_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowJointTrajectory_SendGoal_Request = {
  "control_msgs::action",
  "FollowJointTrajectory_SendGoal_Request",
  _FollowJointTrajectory_SendGoal_Request__cdr_serialize,
  _FollowJointTrajectory_SendGoal_Request__cdr_deserialize,
  _FollowJointTrajectory_SendGoal_Request__get_serialized_size,
  _FollowJointTrajectory_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _FollowJointTrajectory_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowJointTrajectory_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_SendGoal_Request)() {
  return &_FollowJointTrajectory_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _FollowJointTrajectory_SendGoal_Response__ros_msg_type = control_msgs__action__FollowJointTrajectory_SendGoal_Response;

static bool _FollowJointTrajectory_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowJointTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowJointTrajectory_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowJointTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<_FollowJointTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowJointTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowJointTrajectory_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__action__FollowJointTrajectory_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_SendGoal_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FollowJointTrajectory_SendGoal_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__action__FollowJointTrajectory_SendGoal_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowJointTrajectory_SendGoal_Response = {
  "control_msgs::action",
  "FollowJointTrajectory_SendGoal_Response",
  _FollowJointTrajectory_SendGoal_Response__cdr_serialize,
  _FollowJointTrajectory_SendGoal_Response__cdr_deserialize,
  _FollowJointTrajectory_SendGoal_Response__get_serialized_size,
  _FollowJointTrajectory_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _FollowJointTrajectory_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowJointTrajectory_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_SendGoal_Response)() {
  return &_FollowJointTrajectory_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_msgs/action/follow_joint_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FollowJointTrajectory_SendGoal__callbacks = {
  "control_msgs::action",
  "FollowJointTrajectory_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_SendGoal_Response)(),
};

static rosidl_service_type_support_t FollowJointTrajectory_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FollowJointTrajectory_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_SendGoal)() {
  return &FollowJointTrajectory_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FollowJointTrajectory_GetResult_Request__ros_msg_type = control_msgs__action__FollowJointTrajectory_GetResult_Request;

static bool _FollowJointTrajectory_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowJointTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowJointTrajectory_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowJointTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<_FollowJointTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowJointTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowJointTrajectory_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__action__FollowJointTrajectory_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_GetResult_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FollowJointTrajectory_GetResult_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__action__FollowJointTrajectory_GetResult_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowJointTrajectory_GetResult_Request = {
  "control_msgs::action",
  "FollowJointTrajectory_GetResult_Request",
  _FollowJointTrajectory_GetResult_Request__cdr_serialize,
  _FollowJointTrajectory_GetResult_Request__cdr_deserialize,
  _FollowJointTrajectory_GetResult_Request__get_serialized_size,
  _FollowJointTrajectory_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _FollowJointTrajectory_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowJointTrajectory_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_GetResult_Request)() {
  return &_FollowJointTrajectory_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Result)();


using _FollowJointTrajectory_GetResult_Response__ros_msg_type = control_msgs__action__FollowJointTrajectory_GetResult_Response;

static bool _FollowJointTrajectory_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowJointTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowJointTrajectory_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowJointTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<_FollowJointTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowJointTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_control_msgs__action__FollowJointTrajectory_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowJointTrajectory_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__action__FollowJointTrajectory_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_GetResult_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_control_msgs__action__FollowJointTrajectory_Result(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FollowJointTrajectory_GetResult_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__action__FollowJointTrajectory_GetResult_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowJointTrajectory_GetResult_Response = {
  "control_msgs::action",
  "FollowJointTrajectory_GetResult_Response",
  _FollowJointTrajectory_GetResult_Response__cdr_serialize,
  _FollowJointTrajectory_GetResult_Response__cdr_deserialize,
  _FollowJointTrajectory_GetResult_Response__get_serialized_size,
  _FollowJointTrajectory_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _FollowJointTrajectory_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowJointTrajectory_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_GetResult_Response)() {
  return &_FollowJointTrajectory_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "control_msgs/action/follow_joint_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FollowJointTrajectory_GetResult__callbacks = {
  "control_msgs::action",
  "FollowJointTrajectory_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_GetResult_Response)(),
};

static rosidl_service_type_support_t FollowJointTrajectory_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FollowJointTrajectory_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_GetResult)() {
  return &FollowJointTrajectory_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FollowJointTrajectory_FeedbackMessage__ros_msg_type = control_msgs__action__FollowJointTrajectory_FeedbackMessage;

static bool _FollowJointTrajectory_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowJointTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowJointTrajectory_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowJointTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<_FollowJointTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__action__FollowJointTrajectory_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowJointTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _FollowJointTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_control_msgs__action__FollowJointTrajectory_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowJointTrajectory_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__action__FollowJointTrajectory_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__action__FollowJointTrajectory_FeedbackMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_control_msgs__action__FollowJointTrajectory_Feedback(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FollowJointTrajectory_FeedbackMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__action__FollowJointTrajectory_FeedbackMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowJointTrajectory_FeedbackMessage = {
  "control_msgs::action",
  "FollowJointTrajectory_FeedbackMessage",
  _FollowJointTrajectory_FeedbackMessage__cdr_serialize,
  _FollowJointTrajectory_FeedbackMessage__cdr_deserialize,
  _FollowJointTrajectory_FeedbackMessage__get_serialized_size,
  _FollowJointTrajectory_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _FollowJointTrajectory_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowJointTrajectory_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, action, FollowJointTrajectory_FeedbackMessage)() {
  return &_FollowJointTrajectory_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
