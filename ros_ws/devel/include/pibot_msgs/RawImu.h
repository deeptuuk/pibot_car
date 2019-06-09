// Generated by gencpp from file pibot_msgs/RawImu.msg
// DO NOT EDIT!


#ifndef PIBOT_MSGS_MESSAGE_RAWIMU_H
#define PIBOT_MSGS_MESSAGE_RAWIMU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace pibot_msgs
{
template <class ContainerAllocator>
struct RawImu_
{
  typedef RawImu_<ContainerAllocator> Type;

  RawImu_()
    : header()
    , accelerometer(false)
    , gyroscope(false)
    , magnetometer(false)
    , raw_linear_acceleration()
    , raw_angular_velocity()
    , raw_magnetic_field()  {
    }
  RawImu_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , accelerometer(false)
    , gyroscope(false)
    , magnetometer(false)
    , raw_linear_acceleration(_alloc)
    , raw_angular_velocity(_alloc)
    , raw_magnetic_field(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _accelerometer_type;
  _accelerometer_type accelerometer;

   typedef uint8_t _gyroscope_type;
  _gyroscope_type gyroscope;

   typedef uint8_t _magnetometer_type;
  _magnetometer_type magnetometer;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _raw_linear_acceleration_type;
  _raw_linear_acceleration_type raw_linear_acceleration;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _raw_angular_velocity_type;
  _raw_angular_velocity_type raw_angular_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _raw_magnetic_field_type;
  _raw_magnetic_field_type raw_magnetic_field;





  typedef boost::shared_ptr< ::pibot_msgs::RawImu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pibot_msgs::RawImu_<ContainerAllocator> const> ConstPtr;

}; // struct RawImu_

typedef ::pibot_msgs::RawImu_<std::allocator<void> > RawImu;

typedef boost::shared_ptr< ::pibot_msgs::RawImu > RawImuPtr;
typedef boost::shared_ptr< ::pibot_msgs::RawImu const> RawImuConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pibot_msgs::RawImu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pibot_msgs::RawImu_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pibot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'pibot_msgs': ['/home/pibotvm/pibot_ros/ros_ws/src/pibot_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pibot_msgs::RawImu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pibot_msgs::RawImu_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pibot_msgs::RawImu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pibot_msgs::RawImu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pibot_msgs::RawImu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pibot_msgs::RawImu_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pibot_msgs::RawImu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3bc0ea37781da51ad41a6868ff62faa9";
  }

  static const char* value(const ::pibot_msgs::RawImu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3bc0ea37781da51aULL;
  static const uint64_t static_value2 = 0xd41a6868ff62faa9ULL;
};

template<class ContainerAllocator>
struct DataType< ::pibot_msgs::RawImu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pibot_msgs/RawImu";
  }

  static const char* value(const ::pibot_msgs::RawImu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pibot_msgs::RawImu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool accelerometer\n\
bool gyroscope\n\
bool magnetometer\n\
geometry_msgs/Vector3 raw_linear_acceleration\n\
geometry_msgs/Vector3 raw_angular_velocity\n\
geometry_msgs/Vector3 raw_magnetic_field\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::pibot_msgs::RawImu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pibot_msgs::RawImu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.accelerometer);
      stream.next(m.gyroscope);
      stream.next(m.magnetometer);
      stream.next(m.raw_linear_acceleration);
      stream.next(m.raw_angular_velocity);
      stream.next(m.raw_magnetic_field);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RawImu_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pibot_msgs::RawImu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pibot_msgs::RawImu_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "accelerometer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.accelerometer);
    s << indent << "gyroscope: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gyroscope);
    s << indent << "magnetometer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.magnetometer);
    s << indent << "raw_linear_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.raw_linear_acceleration);
    s << indent << "raw_angular_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.raw_angular_velocity);
    s << indent << "raw_magnetic_field: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.raw_magnetic_field);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIBOT_MSGS_MESSAGE_RAWIMU_H
