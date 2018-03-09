// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Tuple.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Uno{

// internal abstract interface ITuple :6
// {
uInterfaceType* ITuple_typeof();

struct ITuple
{
    void(*fp_AppendItems)(uObject*, ::g::Uno::Text::StringBuilder*);
    static void AppendItems(const uInterface& __this, ::g::Uno::Text::StringBuilder* sb) { __this.VTable<ITuple>()->fp_AppendItems(__this, sb); }
};
// }

}} // ::g::Uno
