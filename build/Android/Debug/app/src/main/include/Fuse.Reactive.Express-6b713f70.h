// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.6.0/ExpressionListener.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Express-2cf41af6.h>
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ExpressionListener;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ExpressionListener :152
// {
::g::Fuse::Reactive::ExpressionSubscriber_type* ExpressionListener_typeof();
void ExpressionListener__ctor_2_fn(ExpressionListener* __this, ::g::Fuse::Reactive::Expression* source, uObject* listener, uArray* args, int32_t* flags);
void ExpressionListener__ClearData_fn(ExpressionListener* __this);
void ExpressionListener__Dispose_fn(ExpressionListener* __this);
void ExpressionListener__get_Listener_fn(ExpressionListener* __this, uObject** __retval);
void ExpressionListener__OnClearData_fn(ExpressionListener* __this);
void ExpressionListener__SetData_fn(ExpressionListener* __this, uObject* value);

struct ExpressionListener : ::g::Fuse::Reactive::ExpressionSubscriber
{
    uStrong<uObject*> _listener;
    bool _hasData;
    uStrong<uObject*> _curData;
    uStrong< ::g::Fuse::Reactive::Expression*> _source1;

    void ctor_2(::g::Fuse::Reactive::Expression* source, uObject* listener, uArray* args, int32_t flags);
    void ClearData();
    uObject* Listener();
    void SetData(uObject* value);
};
// }

}}} // ::g::Fuse::Reactive
