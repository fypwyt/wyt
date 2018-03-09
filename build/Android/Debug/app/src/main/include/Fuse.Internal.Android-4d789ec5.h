// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Common/1.6.0/Internal/AndroidSystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__FontDescriptor;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.FontDescriptor :29
// {
uStructType* AndroidSystemFont__FontDescriptor_typeof();
void AndroidSystemFont__FontDescriptor__ctor__fn(AndroidSystemFont__FontDescriptor* __this, uString* filePath, int32_t* index, int32_t* style, int32_t* weight);
void AndroidSystemFont__FontDescriptor__New1_fn(uString* filePath, int32_t* index, int32_t* style, int32_t* weight, AndroidSystemFont__FontDescriptor* __retval);

struct AndroidSystemFont__FontDescriptor
{
    uStrong<uString*> FilePath;
    int32_t Index;
    int32_t Style;
    int32_t Weight;

    void ctor_(uString* filePath, int32_t index, int32_t style, int32_t weight);
};

AndroidSystemFont__FontDescriptor AndroidSystemFont__FontDescriptor__New1(uString* filePath, int32_t index, int32_t style, int32_t weight);
// }

}}} // ::g::Fuse::Internal
