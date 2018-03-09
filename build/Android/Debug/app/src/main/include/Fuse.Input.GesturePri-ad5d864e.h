// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.6.0/Input/Gesture.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}

namespace g{
namespace Fuse{
namespace Input{

// public struct GesturePriorityConfig :28
// {
uStructType* GesturePriorityConfig_typeof();
void GesturePriorityConfig__ctor__fn(GesturePriorityConfig* __this, int32_t* priority, float* significance, int32_t* adjustment);
void GesturePriorityConfig__New1_fn(int32_t* priority, float* significance, int32_t* adjustment, GesturePriorityConfig* __retval);

struct GesturePriorityConfig
{
    int32_t Priority;
    float Significance;
    int32_t Adjustment;

    void ctor_(int32_t priority, float significance, int32_t adjustment);
};

GesturePriorityConfig GesturePriorityConfig__New1(int32_t priority, float significance, int32_t adjustment);
// }

}}} // ::g::Fuse::Input
