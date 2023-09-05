// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/JointTolerance.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/joint_tolerance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointTolerance & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTolerance & msg, bool use_flow_style = false)
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

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::msg::JointTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::JointTolerance & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::JointTolerance>()
{
  return "control_msgs::msg::JointTolerance";
}

template<>
inline const char * name<control_msgs::msg::JointTolerance>()
{
  return "control_msgs/msg/JointTolerance";
}

template<>
struct has_fixed_size<control_msgs::msg::JointTolerance>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::JointTolerance>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::JointTolerance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__TRAITS_HPP_
