// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Common/1.6.0/Internal/AndroidSystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__Alias;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.Alias :45
// {
uStructType* AndroidSystemFont__Alias_typeof();
void AndroidSystemFont__Alias__ctor__fn(AndroidSystemFont__Alias* __this, uString* to, int32_t* weight);
void AndroidSystemFont__Alias__New1_fn(uString* to, int32_t* weight, AndroidSystemFont__Alias* __retval);

struct AndroidSystemFont__Alias
{
    uStrong<uString*> To;
    int32_t Weight;

    void ctor_(uString* to, int32_t weight);
};

AndroidSystemFont__Alias AndroidSystemFont__Alias__New1(uString* to, int32_t weight);
// }

}}} // ::g::Fuse::Internal
