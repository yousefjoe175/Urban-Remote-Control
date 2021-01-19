// Generated by gencpp from file zed_interfaces/Objects.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_OBJECTS_H
#define ZED_INTERFACES_MESSAGE_OBJECTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <zed_interfaces/ObjectStamped.h>

namespace zed_interfaces
{
template <class ContainerAllocator>
struct Objects_
{
  typedef Objects_<ContainerAllocator> Type;

  Objects_()
    : objects()  {
    }
  Objects_(const ContainerAllocator& _alloc)
    : objects(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::zed_interfaces::ObjectStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::zed_interfaces::ObjectStamped_<ContainerAllocator> >::other >  _objects_type;
  _objects_type objects;





  typedef boost::shared_ptr< ::zed_interfaces::Objects_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::Objects_<ContainerAllocator> const> ConstPtr;

}; // struct Objects_

typedef ::zed_interfaces::Objects_<std::allocator<void> > Objects;

typedef boost::shared_ptr< ::zed_interfaces::Objects > ObjectsPtr;
typedef boost::shared_ptr< ::zed_interfaces::Objects const> ObjectsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::Objects_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::Objects_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'zed_interfaces': ['/home/shelleco/catkin_ws_zed/src/zed-ros-wrapper/zed_interfaces/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::Objects_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::Objects_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::Objects_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::Objects_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::Objects_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::Objects_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::Objects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f74a9cc2a8c886c042be0d913eabb9fd";
  }

  static const char* value(const ::zed_interfaces::Objects_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf74a9cc2a8c886c0ULL;
  static const uint64_t static_value2 = 0x42be0d913eabb9fdULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::Objects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/Objects";
  }

  static const char* value(const ::zed_interfaces::Objects_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::Objects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Array of `object_stamped` topics\n"
"zed_interfaces/ObjectStamped[] objects\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/ObjectStamped\n"
"# Standard Header\n"
"Header header\n"
"\n"
"# Object label\n"
"string label\n"
"\n"
"# Object label ID\n"
"int16 label_id\n"
"\n"
"# Object confidence level (1-99)\n"
"float32 confidence\n"
"\n"
"# Object centroid\n"
"geometry_msgs/Point32 position\n"
"\n"
"# Object velocity\n"
"geometry_msgs/Vector3 linear_vel\n"
"\n"
"# Tracking state\n"
"# 0 -> OFF (object not valid)\n"
"# 1 -> OK\n"
"# 2 -> SEARCHING (occlusion occurred, trajectory is estimated)\n"
"int8 tracking_state \n"
"\n"
"# 2D Bounding box projected to Camera image\n"
"#      0 ------- 1\n"
"#      |         |\n"
"#      |         |\n"
"#      |         |\n"
"#      3 ------- 2\n"
"geometry_msgs/Point32[4] bbox_2d\n"
"\n"
"# 3D Bounding box in world frame\n"
"#      1 ------- 2\n"
"#     /.        /|\n"
"#    0 ------- 3 |\n"
"#    | .       | |           \n"
"#    | 5.......| 6\n"
"#    |.        |/       \n"
"#    4 ------- 7\n"
"geometry_msgs/Point32[8] bbox_3d\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::zed_interfaces::Objects_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::Objects_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Objects_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::Objects_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::Objects_<ContainerAllocator>& v)
  {
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::zed_interfaces::ObjectStamped_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_OBJECTS_H
