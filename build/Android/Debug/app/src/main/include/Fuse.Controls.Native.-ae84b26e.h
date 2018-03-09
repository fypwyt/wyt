// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.6.0/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ITextEditHost :37
// {
uInterfaceType* ITextEditHost_typeof();

struct ITextEditHost
{
    void(*fp_OnFocusGained)(uObject*);
    void(*fp_OnFocusLost)(uObject*);
    void(*fp_OnInputAction)(uObject*, int32_t*, bool*);
    void(*fp_OnValueChanged)(uObject*, uString*);
    static void OnFocusGained(const uInterface& __this) { __this.VTable<ITextEditHost>()->fp_OnFocusGained(__this); }
    static void OnFocusLost(const uInterface& __this) { __this.VTable<ITextEditHost>()->fp_OnFocusLost(__this); }
    static bool OnInputAction(const uInterface& __this, int32_t type) { bool __retval; return __this.VTable<ITextEditHost>()->fp_OnInputAction(__this, &type, &__retval), __retval; }
    static void OnValueChanged(const uInterface& __this, uString* newValue) { __this.VTable<ITextEditHost>()->fp_OnValueChanged(__this, newValue); }
};
// }

}}}} // ::g::Fuse::Controls::Native
