// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Android/1.6.0/AndroidProperties.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct AndroidProperties;}}

namespace g{
namespace Fuse{

// public static extern class AndroidProperties :9
// {
uClassType* AndroidProperties_typeof();
void AndroidProperties__GetReleaseVersion_fn(uString** __retval);
void AndroidProperties__get_ReleaseVersion_fn(uString** __retval);

struct AndroidProperties : uObject
{
    static uString* GetReleaseVersion();
    static uString* ReleaseVersion();
};
// }

}} // ::g::Fuse
