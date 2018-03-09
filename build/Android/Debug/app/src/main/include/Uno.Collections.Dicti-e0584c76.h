// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Collections/Dictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// internal struct Dictionary<TKey, TValue>.Bucket :16
// {
uStructType* Dictionary__Bucket_typeof();

template<class TKey, class TValue>
struct Dictionary__Bucket
{
    TKey Key;
    TValue Value;
    int32_t State;
};
// }

}}} // ::g::Uno::Collections
