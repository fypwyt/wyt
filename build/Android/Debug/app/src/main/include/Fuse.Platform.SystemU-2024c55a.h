// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Platform/1.6.0/SystemUI.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Platform{struct SystemUIWillResizeEventArgs;}}}

namespace g{
namespace Fuse{
namespace Platform{

// public sealed class SystemUIWillResizeEventArgs :28
// {
uType* SystemUIWillResizeEventArgs_typeof();
void SystemUIWillResizeEventArgs__ctor_1_fn(SystemUIWillResizeEventArgs* __this, int32_t* id, int32_t* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int32_t* animationCurve);
void SystemUIWillResizeEventArgs__get_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int32_t* __retval);
void SystemUIWillResizeEventArgs__set_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int32_t* value);
void SystemUIWillResizeEventArgs__get_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* __retval);
void SystemUIWillResizeEventArgs__set_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* value);
void SystemUIWillResizeEventArgs__get_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval);
void SystemUIWillResizeEventArgs__set_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value);
void SystemUIWillResizeEventArgs__get_ID_fn(SystemUIWillResizeEventArgs* __this, int32_t* __retval);
void SystemUIWillResizeEventArgs__set_ID_fn(SystemUIWillResizeEventArgs* __this, int32_t* value);
void SystemUIWillResizeEventArgs__get_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* __retval);
void SystemUIWillResizeEventArgs__set_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* value);
void SystemUIWillResizeEventArgs__New2_fn(int32_t* id, int32_t* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int32_t* animationCurve, SystemUIWillResizeEventArgs** __retval);
void SystemUIWillResizeEventArgs__get_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int32_t* __retval);
void SystemUIWillResizeEventArgs__set_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int32_t* value);
void SystemUIWillResizeEventArgs__get_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval);
void SystemUIWillResizeEventArgs__set_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value);

struct SystemUIWillResizeEventArgs : ::g::Uno::EventArgs
{
    int32_t _AnimationCurve;
    double _AnimationDuration;
    ::g::Uno::Rect _EndFrame;
    int32_t _ID;
    bool _IsAnimated;
    int32_t _ResizeReason;
    ::g::Uno::Rect _StartFrame;

    void ctor_1(int32_t id, int32_t resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int32_t animationCurve);
    int32_t AnimationCurve();
    void AnimationCurve(int32_t value);
    double AnimationDuration();
    void AnimationDuration(double value);
    ::g::Uno::Rect EndFrame();
    void EndFrame(::g::Uno::Rect value);
    int32_t ID();
    void ID(int32_t value);
    bool IsAnimated();
    void IsAnimated(bool value);
    int32_t ResizeReason();
    void ResizeReason(int32_t value);
    ::g::Uno::Rect StartFrame();
    void StartFrame(::g::Uno::Rect value);
    static SystemUIWillResizeEventArgs* New2(int32_t id, int32_t resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int32_t animationCurve);
};
// }

}}} // ::g::Fuse::Platform
