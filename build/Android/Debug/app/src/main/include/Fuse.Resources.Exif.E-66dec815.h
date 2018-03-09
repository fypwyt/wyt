// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Elements/1.6.0/Resources/Exif/Exif.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{namespace Exif{struct ExifAndroidImpl;}}}}
namespace g{namespace Fuse{namespace Resources{namespace Exif{struct ExifData;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Resources{
namespace Exif{

// internal sealed extern class ExifAndroidImpl :181
// {
uType* ExifAndroidImpl_typeof();
void ExifAndroidImpl__FromByteArray_fn(uArray* bytes, ::g::Fuse::Resources::Exif::ExifData* __retval);
void ExifAndroidImpl__GetOrientation_fn(::g::Java::Object* stream, int32_t* __retval);
void ExifAndroidImpl__InputStreamFromByteArray_fn(::g::Java::Object* buf, ::g::Java::Object** __retval);

struct ExifAndroidImpl : uObject
{
    static ::g::Fuse::Resources::Exif::ExifData FromByteArray(uArray* bytes);
    static int32_t GetOrientation(::g::Java::Object* stream);
    static ::g::Java::Object* InputStreamFromByteArray(::g::Java::Object* buf);
};
// }

}}}} // ::g::Fuse::Resources::Exif
