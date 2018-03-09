// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.6.0/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public abstract interface Node.ISubtreeDataProvider :15
// {
uInterfaceType* Node__ISubtreeDataProvider_typeof();

struct Node__ISubtreeDataProvider
{
    void(*fp_GetData)(uObject*, ::g::Fuse::Node*, uObject**);
    static uObject* GetData(const uInterface& __this, ::g::Fuse::Node* child) { uObject* __retval; return __this.VTable<Node__ISubtreeDataProvider>()->fp_GetData(__this, child, &__retval), __retval; }
};
// }

}} // ::g::Fuse
