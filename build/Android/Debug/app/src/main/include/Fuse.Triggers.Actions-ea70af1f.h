// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.6.0/Actions/Visibility.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface ICollapse :78
// {
uInterfaceType* ICollapse_typeof();

struct ICollapse
{
    void(*fp_Collapse)(uObject*);
    static void Collapse(const uInterface& __this) { __this.VTable<ICollapse>()->fp_Collapse(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
