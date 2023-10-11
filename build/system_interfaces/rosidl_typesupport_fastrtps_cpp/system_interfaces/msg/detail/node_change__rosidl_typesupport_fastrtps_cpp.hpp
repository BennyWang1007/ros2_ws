// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from system_interfaces:msg/NodeChange.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "system_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "system_interfaces/msg/detail/node_change__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace system_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
cdr_serialize(
  const system_interfaces::msg::NodeChange & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  system_interfaces::msg::NodeChange & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
get_serialized_size(
  const system_interfaces::msg::NodeChange & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
max_serialized_size_NodeChange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace system_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, system_interfaces, msg, NodeChange)();

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_