// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from as2_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef AS2_MSGS__ACTION__DETAIL__FOLLOW_PATH__STRUCT_HPP_
#define AS2_MSGS__ACTION__DETAIL__FOLLOW_PATH__STRUCT_HPP_

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
// Member 'yaw'
#include "as2_msgs/msg/detail/yaw_mode__struct.hpp"
// Member 'path'
#include "as2_msgs/msg/detail/pose_with_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__as2_msgs__action__FollowPath_Goal __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__action__FollowPath_Goal __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowPath_Goal_
{
  using Type = FollowPath_Goal_<ContainerAllocator>;

  explicit FollowPath_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    yaw(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_speed = 0.0f;
    }
  }

  explicit FollowPath_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    yaw(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_speed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _yaw_type =
    as2_msgs::msg::YawMode_<ContainerAllocator>;
  _yaw_type yaw;
  using _path_type =
    std::vector<as2_msgs::msg::PoseWithID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<as2_msgs::msg::PoseWithID_<ContainerAllocator>>>;
  _path_type path;
  using _max_speed_type =
    float;
  _max_speed_type max_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__yaw(
    const as2_msgs::msg::YawMode_<ContainerAllocator> & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__path(
    const std::vector<as2_msgs::msg::PoseWithID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<as2_msgs::msg::PoseWithID_<ContainerAllocator>>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__max_speed(
    const float & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::action::FollowPath_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::action::FollowPath_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__action__FollowPath_Goal
    std::shared_ptr<as2_msgs::action::FollowPath_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__action__FollowPath_Goal
    std::shared_ptr<as2_msgs::action::FollowPath_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPath_Goal_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->max_speed != other.max_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPath_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPath_Goal_

// alias to use template instance with default allocator
using FollowPath_Goal =
  as2_msgs::action::FollowPath_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace as2_msgs


#ifndef _WIN32
# define DEPRECATED__as2_msgs__action__FollowPath_Result __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__action__FollowPath_Result __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowPath_Result_
{
  using Type = FollowPath_Result_<ContainerAllocator>;

  explicit FollowPath_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->follow_path_success = false;
    }
  }

  explicit FollowPath_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->follow_path_success = false;
    }
  }

  // field types and members
  using _follow_path_success_type =
    bool;
  _follow_path_success_type follow_path_success;

  // setters for named parameter idiom
  Type & set__follow_path_success(
    const bool & _arg)
  {
    this->follow_path_success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::action::FollowPath_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::action::FollowPath_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__action__FollowPath_Result
    std::shared_ptr<as2_msgs::action::FollowPath_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__action__FollowPath_Result
    std::shared_ptr<as2_msgs::action::FollowPath_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPath_Result_ & other) const
  {
    if (this->follow_path_success != other.follow_path_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPath_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPath_Result_

// alias to use template instance with default allocator
using FollowPath_Result =
  as2_msgs::action::FollowPath_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace as2_msgs


#ifndef _WIN32
# define DEPRECATED__as2_msgs__action__FollowPath_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__action__FollowPath_Feedback __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowPath_Feedback_
{
  using Type = FollowPath_Feedback_<ContainerAllocator>;

  explicit FollowPath_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actual_speed = 0.0f;
      this->actual_distance_to_next_waypoint = 0.0f;
      this->remaining_waypoints = 0;
      this->next_waypoint_id = "";
    }
  }

  explicit FollowPath_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : next_waypoint_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actual_speed = 0.0f;
      this->actual_distance_to_next_waypoint = 0.0f;
      this->remaining_waypoints = 0;
      this->next_waypoint_id = "";
    }
  }

  // field types and members
  using _actual_speed_type =
    float;
  _actual_speed_type actual_speed;
  using _actual_distance_to_next_waypoint_type =
    float;
  _actual_distance_to_next_waypoint_type actual_distance_to_next_waypoint;
  using _remaining_waypoints_type =
    uint16_t;
  _remaining_waypoints_type remaining_waypoints;
  using _next_waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _next_waypoint_id_type next_waypoint_id;

  // setters for named parameter idiom
  Type & set__actual_speed(
    const float & _arg)
  {
    this->actual_speed = _arg;
    return *this;
  }
  Type & set__actual_distance_to_next_waypoint(
    const float & _arg)
  {
    this->actual_distance_to_next_waypoint = _arg;
    return *this;
  }
  Type & set__remaining_waypoints(
    const uint16_t & _arg)
  {
    this->remaining_waypoints = _arg;
    return *this;
  }
  Type & set__next_waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->next_waypoint_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::action::FollowPath_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::action::FollowPath_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__action__FollowPath_Feedback
    std::shared_ptr<as2_msgs::action::FollowPath_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__action__FollowPath_Feedback
    std::shared_ptr<as2_msgs::action::FollowPath_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPath_Feedback_ & other) const
  {
    if (this->actual_speed != other.actual_speed) {
      return false;
    }
    if (this->actual_distance_to_next_waypoint != other.actual_distance_to_next_waypoint) {
      return false;
    }
    if (this->remaining_waypoints != other.remaining_waypoints) {
      return false;
    }
    if (this->next_waypoint_id != other.next_waypoint_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPath_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPath_Feedback_

// alias to use template instance with default allocator
using FollowPath_Feedback =
  as2_msgs::action::FollowPath_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace as2_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "as2_msgs/action/detail/follow_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__as2_msgs__action__FollowPath_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__action__FollowPath_SendGoal_Request __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowPath_SendGoal_Request_
{
  using Type = FollowPath_SendGoal_Request_<ContainerAllocator>;

  explicit FollowPath_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FollowPath_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    as2_msgs::action::FollowPath_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const as2_msgs::action::FollowPath_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__action__FollowPath_SendGoal_Request
    std::shared_ptr<as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__action__FollowPath_SendGoal_Request
    std::shared_ptr<as2_msgs::action::FollowPath_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPath_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPath_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPath_SendGoal_Request_

// alias to use template instance with default allocator
using FollowPath_SendGoal_Request =
  as2_msgs::action::FollowPath_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace as2_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__as2_msgs__action__FollowPath_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__action__FollowPath_SendGoal_Response __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowPath_SendGoal_Response_
{
  using Type = FollowPath_SendGoal_Response_<ContainerAllocator>;

  explicit FollowPath_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FollowPath_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__action__FollowPath_SendGoal_Response
    std::shared_ptr<as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__action__FollowPath_SendGoal_Response
    std::shared_ptr<as2_msgs::action::FollowPath_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPath_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPath_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPath_SendGoal_Response_

// alias to use template instance with default allocator
using FollowPath_SendGoal_Response =
  as2_msgs::action::FollowPath_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace as2_msgs

namespace as2_msgs
{

namespace action
{

struct FollowPath_SendGoal
{
  using Request = as2_msgs::action::FollowPath_SendGoal_Request;
  using Response = as2_msgs::action::FollowPath_SendGoal_Response;
};

}  // namespace action

}  // namespace as2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__as2_msgs__action__FollowPath_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__action__FollowPath_GetResult_Request __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowPath_GetResult_Request_
{
  using Type = FollowPath_GetResult_Request_<ContainerAllocator>;

  explicit FollowPath_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FollowPath_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__action__FollowPath_GetResult_Request
    std::shared_ptr<as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__action__FollowPath_GetResult_Request
    std::shared_ptr<as2_msgs::action::FollowPath_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPath_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPath_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPath_GetResult_Request_

// alias to use template instance with default allocator
using FollowPath_GetResult_Request =
  as2_msgs::action::FollowPath_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace as2_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "as2_msgs/action/detail/follow_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__as2_msgs__action__FollowPath_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__action__FollowPath_GetResult_Response __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowPath_GetResult_Response_
{
  using Type = FollowPath_GetResult_Response_<ContainerAllocator>;

  explicit FollowPath_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FollowPath_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    as2_msgs::action::FollowPath_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const as2_msgs::action::FollowPath_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__action__FollowPath_GetResult_Response
    std::shared_ptr<as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__action__FollowPath_GetResult_Response
    std::shared_ptr<as2_msgs::action::FollowPath_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPath_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPath_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPath_GetResult_Response_

// alias to use template instance with default allocator
using FollowPath_GetResult_Response =
  as2_msgs::action::FollowPath_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace as2_msgs

namespace as2_msgs
{

namespace action
{

struct FollowPath_GetResult
{
  using Request = as2_msgs::action::FollowPath_GetResult_Request;
  using Response = as2_msgs::action::FollowPath_GetResult_Response;
};

}  // namespace action

}  // namespace as2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "as2_msgs/action/detail/follow_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__as2_msgs__action__FollowPath_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__action__FollowPath_FeedbackMessage __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowPath_FeedbackMessage_
{
  using Type = FollowPath_FeedbackMessage_<ContainerAllocator>;

  explicit FollowPath_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FollowPath_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    as2_msgs::action::FollowPath_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const as2_msgs::action::FollowPath_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__action__FollowPath_FeedbackMessage
    std::shared_ptr<as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__action__FollowPath_FeedbackMessage
    std::shared_ptr<as2_msgs::action::FollowPath_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowPath_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowPath_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowPath_FeedbackMessage_

// alias to use template instance with default allocator
using FollowPath_FeedbackMessage =
  as2_msgs::action::FollowPath_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace as2_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace as2_msgs
{

namespace action
{

struct FollowPath
{
  /// The goal message defined in the action definition.
  using Goal = as2_msgs::action::FollowPath_Goal;
  /// The result message defined in the action definition.
  using Result = as2_msgs::action::FollowPath_Result;
  /// The feedback message defined in the action definition.
  using Feedback = as2_msgs::action::FollowPath_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = as2_msgs::action::FollowPath_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = as2_msgs::action::FollowPath_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = as2_msgs::action::FollowPath_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FollowPath FollowPath;

}  // namespace action

}  // namespace as2_msgs

#endif  // AS2_MSGS__ACTION__DETAIL__FOLLOW_PATH__STRUCT_HPP_
