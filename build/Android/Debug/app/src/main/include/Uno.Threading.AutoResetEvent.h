// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Uno.Threading/1.6.0/AutoResetEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Threading.EventWaitHandle.h>
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class AutoResetEvent :6
// {
::g::Uno::Threading::EventWaitHandle_type* AutoResetEvent_typeof();
void AutoResetEvent__ctor_1_fn(AutoResetEvent* __this, bool* initialState);
void AutoResetEvent__New2_fn(bool* initialState, AutoResetEvent** __retval);

struct AutoResetEvent : ::g::Uno::Threading::EventWaitHandle
{
    void ctor_1(bool initialState);
    static AutoResetEvent* New2(bool initialState);
};
// }

}}} // ::g::Uno::Threading
