// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from as2_msgs:action/DetectArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef AS2_MSGS__ACTION__DETAIL__DETECT_ARUCO_MARKERS__TRAITS_HPP_
#define AS2_MSGS__ACTION__DETAIL__DETECT_ARUCO_MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "as2_msgs/action/detail/detect_aruco_markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace as2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DetectArucoMarkers_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_ids
  {
    if (msg.target_ids.size() == 0) {
      out << "target_ids: []";
    } else {
      out << "target_ids: [";
      size_t pending_items = msg.target_ids.size();
      for (auto item : msg.target_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectArucoMarkers_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_ids.size() == 0) {
      out << "target_ids: []\n";
    } else {
      out << "target_ids:\n";
      for (auto item : msg.target_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectArucoMarkers_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::action::DetectArucoMarkers_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::action::DetectArucoMarkers_Goal & msg)
{
  return as2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_Goal>()
{
  return "as2_msgs::action::DetectArucoMarkers_Goal";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_Goal>()
{
  return "as2_msgs/action/DetectArucoMarkers_Goal";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<as2_msgs::action::DetectArucoMarkers_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace as2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DetectArucoMarkers_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectArucoMarkers_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectArucoMarkers_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::action::DetectArucoMarkers_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::action::DetectArucoMarkers_Result & msg)
{
  return as2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_Result>()
{
  return "as2_msgs::action::DetectArucoMarkers_Result";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_Result>()
{
  return "as2_msgs/action/DetectArucoMarkers_Result";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<as2_msgs::action::DetectArucoMarkers_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace as2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DetectArucoMarkers_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: sucess
  {
    out << "sucess: ";
    rosidl_generator_traits::value_to_yaml(msg.sucess, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectArucoMarkers_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sucess
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sucess: ";
    rosidl_generator_traits::value_to_yaml(msg.sucess, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectArucoMarkers_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::action::DetectArucoMarkers_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::action::DetectArucoMarkers_Feedback & msg)
{
  return as2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_Feedback>()
{
  return "as2_msgs::action::DetectArucoMarkers_Feedback";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_Feedback>()
{
  return "as2_msgs/action/DetectArucoMarkers_Feedback";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<as2_msgs::action::DetectArucoMarkers_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "as2_msgs/action/detail/detect_aruco_markers__traits.hpp"

namespace as2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DetectArucoMarkers_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectArucoMarkers_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectArucoMarkers_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::action::DetectArucoMarkers_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::action::DetectArucoMarkers_SendGoal_Request & msg)
{
  return as2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_SendGoal_Request>()
{
  return "as2_msgs::action::DetectArucoMarkers_SendGoal_Request";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_SendGoal_Request>()
{
  return "as2_msgs/action/DetectArucoMarkers_SendGoal_Request";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<as2_msgs::action::DetectArucoMarkers_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<as2_msgs::action::DetectArucoMarkers_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<as2_msgs::action::DetectArucoMarkers_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace as2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DetectArucoMarkers_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectArucoMarkers_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectArucoMarkers_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::action::DetectArucoMarkers_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::action::DetectArucoMarkers_SendGoal_Response & msg)
{
  return as2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_SendGoal_Response>()
{
  return "as2_msgs::action::DetectArucoMarkers_SendGoal_Response";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_SendGoal_Response>()
{
  return "as2_msgs/action/DetectArucoMarkers_SendGoal_Response";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<as2_msgs::action::DetectArucoMarkers_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_SendGoal>()
{
  return "as2_msgs::action::DetectArucoMarkers_SendGoal";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_SendGoal>()
{
  return "as2_msgs/action/DetectArucoMarkers_SendGoal";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<as2_msgs::action::DetectArucoMarkers_SendGoal_Request>::value &&
    has_fixed_size<as2_msgs::action::DetectArucoMarkers_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<as2_msgs::action::DetectArucoMarkers_SendGoal_Request>::value &&
    has_bounded_size<as2_msgs::action::DetectArucoMarkers_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<as2_msgs::action::DetectArucoMarkers_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<as2_msgs::action::DetectArucoMarkers_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<as2_msgs::action::DetectArucoMarkers_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace as2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DetectArucoMarkers_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectArucoMarkers_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectArucoMarkers_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::action::DetectArucoMarkers_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::action::DetectArucoMarkers_GetResult_Request & msg)
{
  return as2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_GetResult_Request>()
{
  return "as2_msgs::action::DetectArucoMarkers_GetResult_Request";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_GetResult_Request>()
{
  return "as2_msgs/action/DetectArucoMarkers_GetResult_Request";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<as2_msgs::action::DetectArucoMarkers_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "as2_msgs/action/detail/detect_aruco_markers__traits.hpp"

namespace as2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DetectArucoMarkers_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectArucoMarkers_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectArucoMarkers_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::action::DetectArucoMarkers_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::action::DetectArucoMarkers_GetResult_Response & msg)
{
  return as2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_GetResult_Response>()
{
  return "as2_msgs::action::DetectArucoMarkers_GetResult_Response";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_GetResult_Response>()
{
  return "as2_msgs/action/DetectArucoMarkers_GetResult_Response";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<as2_msgs::action::DetectArucoMarkers_Result>::value> {};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<as2_msgs::action::DetectArucoMarkers_Result>::value> {};

template<>
struct is_message<as2_msgs::action::DetectArucoMarkers_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_GetResult>()
{
  return "as2_msgs::action::DetectArucoMarkers_GetResult";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_GetResult>()
{
  return "as2_msgs/action/DetectArucoMarkers_GetResult";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<as2_msgs::action::DetectArucoMarkers_GetResult_Request>::value &&
    has_fixed_size<as2_msgs::action::DetectArucoMarkers_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<as2_msgs::action::DetectArucoMarkers_GetResult_Request>::value &&
    has_bounded_size<as2_msgs::action::DetectArucoMarkers_GetResult_Response>::value
  >
{
};

template<>
struct is_service<as2_msgs::action::DetectArucoMarkers_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<as2_msgs::action::DetectArucoMarkers_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<as2_msgs::action::DetectArucoMarkers_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "as2_msgs/action/detail/detect_aruco_markers__traits.hpp"

namespace as2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DetectArucoMarkers_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectArucoMarkers_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectArucoMarkers_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use as2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const as2_msgs::action::DetectArucoMarkers_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  as2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use as2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const as2_msgs::action::DetectArucoMarkers_FeedbackMessage & msg)
{
  return as2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<as2_msgs::action::DetectArucoMarkers_FeedbackMessage>()
{
  return "as2_msgs::action::DetectArucoMarkers_FeedbackMessage";
}

template<>
inline const char * name<as2_msgs::action::DetectArucoMarkers_FeedbackMessage>()
{
  return "as2_msgs/action/DetectArucoMarkers_FeedbackMessage";
}

template<>
struct has_fixed_size<as2_msgs::action::DetectArucoMarkers_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<as2_msgs::action::DetectArucoMarkers_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<as2_msgs::action::DetectArucoMarkers_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<as2_msgs::action::DetectArucoMarkers_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<as2_msgs::action::DetectArucoMarkers_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<as2_msgs::action::DetectArucoMarkers>
  : std::true_type
{
};

template<>
struct is_action_goal<as2_msgs::action::DetectArucoMarkers_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<as2_msgs::action::DetectArucoMarkers_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<as2_msgs::action::DetectArucoMarkers_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // AS2_MSGS__ACTION__DETAIL__DETECT_ARUCO_MARKERS__TRAITS_HPP_
