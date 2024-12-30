// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/temperature.hpp"


#ifndef INTERFACES__SRV__DETAIL__TEMPERATURE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__TEMPERATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/temperature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Temperature_Request_city
{
public:
  Init_Temperature_Request_city()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Temperature_Request city(::interfaces::srv::Temperature_Request::_city_type arg)
  {
    msg_.city = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Temperature_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Temperature_Request>()
{
  return interfaces::srv::builder::Init_Temperature_Request_city();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Temperature_Response_temp
{
public:
  Init_Temperature_Response_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Temperature_Response temp(::interfaces::srv::Temperature_Response::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Temperature_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Temperature_Response>()
{
  return interfaces::srv::builder::Init_Temperature_Response_temp();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Temperature_Event_response
{
public:
  explicit Init_Temperature_Event_response(::interfaces::srv::Temperature_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Temperature_Event response(::interfaces::srv::Temperature_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Temperature_Event msg_;
};

class Init_Temperature_Event_request
{
public:
  explicit Init_Temperature_Event_request(::interfaces::srv::Temperature_Event & msg)
  : msg_(msg)
  {}
  Init_Temperature_Event_response request(::interfaces::srv::Temperature_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Temperature_Event_response(msg_);
  }

private:
  ::interfaces::srv::Temperature_Event msg_;
};

class Init_Temperature_Event_info
{
public:
  Init_Temperature_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temperature_Event_request info(::interfaces::srv::Temperature_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Temperature_Event_request(msg_);
  }

private:
  ::interfaces::srv::Temperature_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Temperature_Event>()
{
  return interfaces::srv::builder::Init_Temperature_Event_info();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__TEMPERATURE__BUILDER_HPP_
