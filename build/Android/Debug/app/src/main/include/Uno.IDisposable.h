// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/IDisposable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public abstract interface IDisposable :6
// {
uInterfaceType* IDisposable_typeof();

struct IDisposable
{
    void(*fp_Dispose)(uObject*);
    static void Dispose(const uInterface& __this) { __this.VTable<IDisposable>()->fp_Dispose(__this); }
};
// }

}} // ::g::Uno
