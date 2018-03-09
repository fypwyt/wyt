// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Diagnostics/Clock.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Clock;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Clock :9
// {
uClassType* Clock_typeof();
void Clock__GetSeconds_fn(double* __retval);
void Clock__GetTicks_fn(int64_t* __retval);
void Clock__GetTimezoneOffset_fn(int32_t* year, int32_t* month, int32_t* day, int32_t* __retval);

struct Clock : uObject
{
    static double GetSeconds();
    static int64_t GetTicks();
    static int32_t GetTimezoneOffset(int32_t year, int32_t month, int32_t day);
};
// }

}}} // ::g::Uno::Diagnostics
