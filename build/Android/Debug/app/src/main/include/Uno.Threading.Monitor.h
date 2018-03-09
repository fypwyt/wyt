// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Threading/Monitor.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Threading{struct Monitor;}}}

namespace g{
namespace Uno{
namespace Threading{

// public static class Monitor :8
// {
uClassType* Monitor_typeof();
void Monitor__Enter_fn(uObject* obj);
void Monitor__Exit_fn(uObject* obj);

struct Monitor : uObject
{
    static void Enter(uObject* obj);
    static void Exit(uObject* obj);
};
// }

}}} // ::g::Uno::Threading
