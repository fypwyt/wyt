// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.6.0/Input/Pointer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Pointer__PELHolder;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// private sealed class Pointer.PELHolder :676
// {
uType* Pointer__PELHolder_typeof();
void Pointer__PELHolder__ctor__fn(Pointer__PELHolder* __this);
void Pointer__PELHolder__New1_fn(Pointer__PELHolder** __retval);

struct Pointer__PELHolder : uObject
{
    uStrong< ::g::Fuse::Visual*> Visual;
    int32_t Status;

    void ctor_();
    static Pointer__PELHolder* New1();
};
// }

}}} // ::g::Fuse::Input
