// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Android.TextRenderer/1.6.0/Internal/GLUtils.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{struct Bitmap;}}}
namespace g{namespace Fuse{namespace Android{struct GLUtils;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class GLUtils :12
// {
uType* GLUtils_typeof();
void GLUtils__TexImage2D_fn(int32_t* target, int32_t* level, ::g::Java::Object* bitmap, int32_t* border);
void GLUtils__TexImage2D1_fn(int32_t* target, int32_t* level, ::g::Fuse::Android::Bitmap* bitmap, int32_t* border);

struct GLUtils : uObject
{
    static void TexImage2D(int32_t target, int32_t level, ::g::Java::Object* bitmap, int32_t border);
    static void TexImage2D1(int32_t target, int32_t level, ::g::Fuse::Android::Bitmap* bitmap, int32_t border);
};
// }

}}} // ::g::Fuse::Android
