// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Android.TextRenderer/1.6.0/Internal/Bitmap.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{struct Bitmap;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class Bitmap :12
// {
struct Bitmap_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Bitmap_type* Bitmap_typeof();
void Bitmap__ctor__fn(Bitmap* __this, ::g::Java::Object* handle);
void Bitmap__CreateBitmapARGB8888_fn(int32_t* width, int32_t* height, Bitmap** __retval);
void Bitmap__CreateBitmapARGB8888Impl_fn(int32_t* width, int32_t* height, ::g::Java::Object** __retval);
void Bitmap__Dispose_fn(Bitmap* __this);
void Bitmap__EraseColor_fn(Bitmap* __this, ::g::Uno::Float4* color);
void Bitmap__EraseColor1_fn(::g::Java::Object* handle, int32_t* color);
void Bitmap__get_Handle_fn(Bitmap* __this, ::g::Java::Object** __retval);
void Bitmap__New1_fn(::g::Java::Object* handle, Bitmap** __retval);
void Bitmap__Recycle_fn(Bitmap* __this);
void Bitmap__Recycle1_fn(::g::Java::Object* handle);

struct Bitmap : uObject
{
    uStrong< ::g::Java::Object*> _handle;
    bool _isDisposed;

    void ctor_(::g::Java::Object* handle);
    void Dispose();
    void EraseColor(::g::Uno::Float4 color);
    ::g::Java::Object* Handle();
    void Recycle();
    static Bitmap* CreateBitmapARGB8888(int32_t width, int32_t height);
    static ::g::Java::Object* CreateBitmapARGB8888Impl(int32_t width, int32_t height);
    static void EraseColor1(::g::Java::Object* handle, int32_t color);
    static Bitmap* New1(::g::Java::Object* handle);
    static void Recycle1(::g::Java::Object* handle);
};
// }

}}} // ::g::Fuse::Android
