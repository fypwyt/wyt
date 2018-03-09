// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.6.0/V8/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaSc-7238a365.h>
#include <Fuse.Scripting.JavaSc-f78ac33b.h>
#include <include/V8Simple.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// public sealed extern class Context :12
// {
::g::Fuse::Scripting::JavaScript::JSContext_type* Context_typeof();
void Context__ctor_2_fn(Context* __this);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__get_IsDisposed_fn(Context* __this, bool* __retval);
void Context__set_IsDisposed_fn(Context* __this, bool* value);
void Context__New1_fn(Context** __retval);
void Context__OnScriptException_fn(Context* __this, ::JSScriptException** e);
void Context__ThrowPendingExceptions_fn(Context* __this);

struct Context : ::g::Fuse::Scripting::JavaScript::JSContext
{
    ::JSContext* _context;
    uStrong<uDelegate*> _errorHandler;
    uStrong< ::g::Fuse::Scripting::V8::Function*> _instanceOf;
    int32_t _vmDepth;
    uStrong< ::g::Uno::Exception*> _cachedException;
    bool _IsDisposed;

    void ctor_2();
    bool IsDisposed();
    void IsDisposed(bool value);
    void OnScriptException(::JSScriptException* e);
    void ThrowPendingExceptions();
    static Context* New1();
};
// }

}}}} // ::g::Fuse::Scripting::V8
