// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.6.0/Input/Focus.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface INotifyFocus :18
// {
uInterfaceType* INotifyFocus_typeof();

struct INotifyFocus
{
    void(*fp_OnFocusGained)(uObject*);
    void(*fp_OnFocusLost)(uObject*);
    static void OnFocusGained(const uInterface& __this) { __this.VTable<INotifyFocus>()->fp_OnFocusGained(__this); }
    static void OnFocusLost(const uInterface& __this) { __this.VTable<INotifyFocus>()->fp_OnFocusLost(__this); }
};
// }

}}} // ::g::Fuse::Input
