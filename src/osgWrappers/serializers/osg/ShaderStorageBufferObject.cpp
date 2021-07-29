#include <osg/BufferObject>
#include <osgDB/ObjectWrapper>
#include <osgDB/InputStream>
#include <osgDB/OutputStream>

//below codes are added in 2021 07 28 to support new feature buffer object 
REGISTER_OBJECT_WRAPPER(ShaderStorageBufferObject,
	new osg::ShaderStorageBufferObject,
	osg::ShaderStorageBufferObject,
	"osg::Object osg::BufferObject osg::ShaderStorageBufferObject")
{

}