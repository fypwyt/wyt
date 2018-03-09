// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Android/1.6.0/StatusBarConfig.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{struct StatusBarHelper;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class StatusBarHelper :15
// {
uClassType* StatusBarHelper_typeof();
void StatusBarHelper__InstallGlobalListener_fn();
void StatusBarHelper__SetStatusBarColor_fn(int32_t* color, bool* __retval);

struct StatusBarHelper : uObject
{
    static void InstallGlobalListener();
    static bool SetStatusBarColor(int32_t color);
};
// }

}}} // ::g::Fuse::Android
