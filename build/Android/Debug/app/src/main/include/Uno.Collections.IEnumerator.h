// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Collections/IEnumerator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// public abstract interface IEnumerator :6
// {
uInterfaceType* IEnumerator_typeof();

struct IEnumerator
{
    void(*fp_MoveNext)(uObject*, bool*);
    void(*fp_Reset)(uObject*);
    static bool MoveNext(const uInterface& __this) { bool __retval; return __this.VTable<IEnumerator>()->fp_MoveNext(__this, &__retval), __retval; }
    static void Reset(const uInterface& __this) { __this.VTable<IEnumerator>()->fp_Reset(__this); }
};
// }

}}} // ::g::Uno::Collections
