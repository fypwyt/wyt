// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.6.0/Android/InputDispatch.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct MotionEvent;}}}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class MotionEvent :283
// {
uType* MotionEvent_typeof();
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle);
void MotionEvent__get_Action_fn(MotionEvent* __this, int32_t* __retval);
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int32_t* __retval);
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval);
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval);
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval);
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval);
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval);
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval);
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval);
void MotionEvent__GetLocationOnScreen1_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, uArray* result);
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval);
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int32_t* pointerIndex, int32_t* __retval);
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, int32_t* __retval);
void MotionEvent__GetPointerIndexMask_fn(int32_t* __retval);
void MotionEvent__GetPointerIndexShift_fn(int32_t* __retval);
void MotionEvent__GetPosition_fn(MotionEvent* __this, int32_t* pointerIndex, ::g::Uno::Float2* __retval);
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, float* __retval);
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, float* __retval);
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval);
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int32_t* __retval);
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* rootView, ::g::Java::Object* view, float* pointDensity, uArray** __retval);
void MotionEvent__get_PointerIndexMask_fn(int32_t* __retval);
void MotionEvent__get_PointerIndexShift_fn(int32_t* __retval);

struct MotionEvent : uObject
{
    uStrong< ::g::Java::Object*> _handle;
    static uSStrong<uArray*> _locationOnScreen_;
    static uSStrong<uArray*>& _locationOnScreen() { return MotionEvent_typeof()->Init(), _locationOnScreen_; }

    void ctor_(::g::Java::Object* handle);
    int32_t Action();
    int32_t ActionMasked();
    int64_t EventTime();
    int32_t GetAction(::g::Java::Object* handle);
    int32_t GetActionMasked(::g::Java::Object* handle);
    int64_t GetEventTime(::g::Java::Object* handle);
    ::g::Uno::Float2 GetLocationOnScreen(::g::Java::Object* viewHandle);
    void GetLocationOnScreen1(::g::Java::Object* viewHandle, uArray* result);
    int32_t GetPointerCount(::g::Java::Object* handle);
    int32_t GetPointerId(int32_t pointerIndex);
    int32_t GetPointerId1(::g::Java::Object* handle, int32_t pointerIndex);
    ::g::Uno::Float2 GetPosition(int32_t pointerIndex);
    float GetX(::g::Java::Object* handle, int32_t pointerIndex);
    float GetY(::g::Java::Object* handle, int32_t pointerIndex);
    int32_t PointerCount();
    uArray* PointerEventDataForView(::g::Java::Object* rootView, ::g::Java::Object* view, float pointDensity);
    static bool Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2);
    static int32_t GetPointerIndexMask();
    static int32_t GetPointerIndexShift();
    static MotionEvent* New1(::g::Java::Object* handle);
    static int32_t PointerIndexMask();
    static int32_t PointerIndexShift();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
