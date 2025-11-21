// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interfaces:srv/GetFlightTimeout.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__STRUCT_HPP_
#define MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mission_interfaces__srv__GetFlightTimeout_Request __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__srv__GetFlightTimeout_Request __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFlightTimeout_Request_
{
  using Type = GetFlightTimeout_Request_<ContainerAllocator>;

  explicit GetFlightTimeout_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetFlightTimeout_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__srv__GetFlightTimeout_Request
    std::shared_ptr<mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__srv__GetFlightTimeout_Request
    std::shared_ptr<mission_interfaces::srv::GetFlightTimeout_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFlightTimeout_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFlightTimeout_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFlightTimeout_Request_

// alias to use template instance with default allocator
using GetFlightTimeout_Request =
  mission_interfaces::srv::GetFlightTimeout_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mission_interfaces


#ifndef _WIN32
# define DEPRECATED__mission_interfaces__srv__GetFlightTimeout_Response __attribute__((deprecated))
#else
# define DEPRECATED__mission_interfaces__srv__GetFlightTimeout_Response __declspec(deprecated)
#endif

namespace mission_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFlightTimeout_Response_
{
  using Type = GetFlightTimeout_Response_<ContainerAllocator>;

  explicit GetFlightTimeout_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = 0l;
      this->message = "";
      this->success = false;
    }
  }

  explicit GetFlightTimeout_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = 0l;
      this->message = "";
      this->success = false;
    }
  }

  // field types and members
  using _timeout_type =
    int32_t;
  _timeout_type timeout;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__timeout(
    const int32_t & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interfaces__srv__GetFlightTimeout_Response
    std::shared_ptr<mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interfaces__srv__GetFlightTimeout_Response
    std::shared_ptr<mission_interfaces::srv::GetFlightTimeout_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFlightTimeout_Response_ & other) const
  {
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFlightTimeout_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFlightTimeout_Response_

// alias to use template instance with default allocator
using GetFlightTimeout_Response =
  mission_interfaces::srv::GetFlightTimeout_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mission_interfaces

namespace mission_interfaces
{

namespace srv
{

struct GetFlightTimeout
{
  using Request = mission_interfaces::srv::GetFlightTimeout_Request;
  using Response = mission_interfaces::srv::GetFlightTimeout_Response;
};

}  // namespace srv

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__STRUCT_HPP_
