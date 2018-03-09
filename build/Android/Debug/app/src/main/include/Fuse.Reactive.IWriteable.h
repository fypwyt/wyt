// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Reactive/1.6.0/IExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IWriteable :37
// {
uInterfaceType* IWriteable_typeof();

struct IWriteable
{
    void(*fp_TrySetExclusive)(uObject*, uObject*, bool*);
    static bool TrySetExclusive(const uInterface& __this, uObject* value) { bool __retval; return __this.VTable<IWriteable>()->fp_TrySetExclusive(__this, value, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
