// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:srv/SetComConfig.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__SET_COM_CONFIG__STRUCT_HPP_
#define MISSION_INTERFACES__SRV__DETAIL__SET_COM_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mission_interfaces__srv__SetComConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__srv__SetComConfig_Request __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetComConfig_Request_
{
  using Type = SetComConfig_Request_<ContainerAllocator>;

  explicit SetComConfig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_ip = "";
      this->ros_port = "";
      this->scout_video_port = "";
      this->scout_video_ip = "";
      this->delivery_video_port = "";
      this->delivery_video_ip = "";
    }
  }

  explicit SetComConfig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ros_ip(_alloc),
    ros_port(_alloc),
    scout_video_port(_alloc),
    scout_video_ip(_alloc),
    delivery_video_port(_alloc),
    delivery_video_ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_ip = "";
      this->ros_port = "";
      this->scout_video_port = "";
      this->scout_video_ip = "";
      this->delivery_video_port = "";
      this->delivery_video_ip = "";
    }
  }

  // field types and members
  using _ros_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ros_ip_type ros_ip;
  using _ros_port_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ros_port_type ros_port;
  using _scout_video_port_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _scout_video_port_type scout_video_port;
  using _scout_video_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _scout_video_ip_type scout_video_ip;
  using _delivery_video_port_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _delivery_video_port_type delivery_video_port;
  using _delivery_video_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _delivery_video_ip_type delivery_video_ip;

  // setters for named parameter idiom
  Type & set__ros_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ros_ip = _arg;
    return *this;
  }
  Type & set__ros_port(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ros_port = _arg;
    return *this;
  }
  Type & set__scout_video_port(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->scout_video_port = _arg;
    return *this;
  }
  Type & set__scout_video_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->scout_video_ip = _arg;
    return *this;
  }
  Type & set__delivery_video_port(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->delivery_video_port = _arg;
    return *this;
  }
  Type & set__delivery_video_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->delivery_video_ip = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__srv__SetComConfig_Request
    std::shared_ptr<mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__srv__SetComConfig_Request
    std::shared_ptr<mission_interfaces::srv::SetComConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetComConfig_Request_ & other) const
  {
    if (this->ros_ip != other.ros_ip) {
      return false;
    }
    if (this->ros_port != other.ros_port) {
      return false;
    }
    if (this->scout_video_port != other.scout_video_port) {
      return false;
    }
    if (this->scout_video_ip != other.scout_video_ip) {
      return false;
    }
    if (this->delivery_video_port != other.delivery_video_port) {
      return false;
    }
    if (this->delivery_video_ip != other.delivery_video_ip) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetComConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetComConfig_Request_

// alias to use template instance with default allocator
using SetComConfig_Request =
  mission_interfaces::srv::SetComConfig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mission_interfaces


#ifndef _WIN32
# define DEPRECATED__mission_interfaces__srv__SetComConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__srv__SetComConfig_Response __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetComConfig_Response_
{
  using Type = SetComConfig_Response_<ContainerAllocator>;

  explicit SetComConfig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetComConfig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__srv__SetComConfig_Response
    std::shared_ptr<mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__srv__SetComConfig_Response
    std::shared_ptr<mission_interfaces::srv::SetComConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetComConfig_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetComConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetComConfig_Response_

// alias to use template instance with default allocator
using SetComConfig_Response =
  mission_interfaces::srv::SetComConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mission_interfaces

namespace mission_interfaces
{

namespace srv
{

struct SetComConfig
{
  using Request = mission_interfaces::srv::SetComConfig_Request;
  using Response = mission_interfaces::srv::SetComConfig_Response;
};

}  // namespace srv

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__SRV__DETAIL__SET_COM_CONFIG__STRUCT_HPP_
