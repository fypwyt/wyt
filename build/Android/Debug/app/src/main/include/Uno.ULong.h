// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/ULong.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct ULong :10
// {
uStructType* ULong_typeof();
void ULong__Equals_fn(uint64_t* __this, uType* __type, uObject* o, bool* __retval);
void ULong__GetHashCode_fn(uint64_t* __this, uType* __type, int32_t* __retval);
void ULong__ToString_fn(uint64_t* __this, uType* __type, uString** __retval);

struct ULong
{
    static bool Equals(uint64_t __this, uType* __type, uObject* o) { bool __retval; return ULong__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(uint64_t __this, uType* __type) { int32_t __retval; return ULong__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uint64_t __this, uType* __type) { uString* __retval; return ULong__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
