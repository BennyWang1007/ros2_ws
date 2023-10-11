// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from system_interfaces:msg/CheckNode.idl
// generated code does not contain a copyright notice
#include "system_interfaces/msg/detail/check_node__rosidl_typesupport_fastrtps_cpp.hpp"
#include "system_interfaces/msg/detail/check_node__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace system_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
cdr_serialize(
  const system_interfaces::msg::CheckNode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: node_name
  cdr << ros_message.node_name;
  // Member: seconds
  cdr << ros_message.seconds;
  // Member: nanoseconds
  cdr << ros_message.nanoseconds;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  system_interfaces::msg::CheckNode & ros_message)
{
  // Member: node_name
  cdr >> ros_message.node_name;

  // Member: seconds
  cdr >> ros_message.seconds;

  // Member: nanoseconds
  cdr >> ros_message.nanoseconds;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
get_serialized_size(
  const system_interfaces::msg::CheckNode & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.node_name.size() + 1);
  // Member: seconds
  {
    size_t item_size = sizeof(ros_message.seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nanoseconds
  {
    size_t item_size = sizeof(ros_message.nanoseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_system_interfaces
max_serialized_size_CheckNode(
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


  // Member: node_name
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

  // Member: seconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: nanoseconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CheckNode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const system_interfaces::msg::CheckNode *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CheckNode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<system_interfaces::msg::CheckNode *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CheckNode__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const system_interfaces::msg::CheckNode *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CheckNode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CheckNode(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CheckNode__callbacks = {
  "system_interfaces::msg",
  "CheckNode",
  _CheckNode__cdr_serialize,
  _CheckNode__cdr_deserialize,
  _CheckNode__get_serialized_size,
  _CheckNode__max_serialized_size
};

static rosidl_message_type_support_t _CheckNode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CheckNode__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace system_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_system_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<system_interfaces::msg::CheckNode>()
{
  return &system_interfaces::msg::typesupport_fastrtps_cpp::_CheckNode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, system_interfaces, msg, CheckNode)() {
  return &system_interfaces::msg::typesupport_fastrtps_cpp::_CheckNode__handle;
}

#ifdef __cplusplus
}
#endif
