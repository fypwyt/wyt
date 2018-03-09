// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Common/1.6.0/Internal/SystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Internal{struct SystemFont;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class SystemFont :57
// {
uClassType* SystemFont_typeof();
void SystemFont__get_Default_fn(::g::Uno::Collections::List** __retval);
void SystemFont__Get_fn(uString* family, int32_t* style, int32_t* weight, ::g::Uno::Collections::List** __retval);

struct SystemFont : uObject
{
    static ::g::Uno::Collections::List* Get(uString* family, int32_t style, int32_t weight);
    static ::g::Uno::Collections::List* Default();
};
// }

}}} // ::g::Fuse::Internal
