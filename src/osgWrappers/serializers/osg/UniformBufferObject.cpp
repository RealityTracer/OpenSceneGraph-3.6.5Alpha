#include <osg/BufferObject>
#include <osgDB/ObjectWrapper>
#include <osgDB/InputStream>
#include <osgDB/OutputStream>

//below codes are added in 2021 07 28 to support new feature buffer object 
REGISTER_OBJECT_WRAPPER( UniformBufferObject,
	new osg::UniformBufferObject,
	osg::UniformBufferObject,
	"osg::Object osg::BufferObject osg::UniformBufferObject")
{

}