// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.6.0/V8/V8Simple.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern struct JSScriptException :108
// {
uStructType* JSScriptException_typeof();
void JSScriptException__Equals_fn(::JSScriptException** __this, uType* __type, uObject* that, bool* __retval);
void JSScriptException__GetHashCode_fn(::JSScriptException** __this, uType* __type, int32_t* __retval);
void JSScriptException__op_Equality_fn(::JSScriptException** e1, ::JSScriptException** e2, bool* __retval);
void JSScriptException__op_Inequality_fn(::JSScriptException** e1, ::JSScriptException** e2, bool* __retval);

struct JSScriptException
{
    void* _handle;

    static bool Equals(::JSScriptException* __this, uType* __type, uObject* that) { bool __retval; return JSScriptException__Equals_fn(&__this, __type, that, &__retval), __retval; }
    static int32_t GetHashCode(::JSScriptException* __this, uType* __type) { int32_t __retval; return JSScriptException__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static bool op_Equality(::JSScriptException* e1, ::JSScriptException* e2);
    static bool op_Inequality(::JSScriptException* e1, ::JSScriptException* e2);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
