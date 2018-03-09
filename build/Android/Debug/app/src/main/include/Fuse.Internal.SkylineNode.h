// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Common/1.6.0/Internal/RectPacker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct SkylineNode;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal struct SkylineNode :6
// {
uStructType* SkylineNode_typeof();
void SkylineNode__ctor__fn(SkylineNode* __this, ::g::Uno::Int2* position, int32_t* width);
void SkylineNode__New1_fn(::g::Uno::Int2* position, int32_t* width, SkylineNode* __retval);

struct SkylineNode
{
    ::g::Uno::Int2 Position;
    int32_t Width;

    void ctor_(::g::Uno::Int2 position, int32_t width);
};

SkylineNode SkylineNode__New1(::g::Uno::Int2 position, int32_t width);
// }

}}} // ::g::Fuse::Internal
