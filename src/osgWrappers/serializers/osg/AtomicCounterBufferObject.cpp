#include <osg/BufferObject>
#include <osgDB/ObjectWrapper>
#include <osgDB/InputStream>
#include <osgDB/OutputStream>

//below codes are added in 2021 07 28 to support new feature buffer object 
//this kind of buffer object has not yet been used, I am not sure if it's OK
REGISTER_OBJECT_WRAPPER( AtomicCounterBufferObject,
	new osg::AtomicCounterBufferObject,
	osg::AtomicCounterBufferObject,
	"osg::Object osg::BufferObject osg::AtomicCounterBufferObject")
{

}