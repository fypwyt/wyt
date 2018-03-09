// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Uno.Net.Http/1.6.0/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest__DispatchClosure;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// private sealed class HttpMessageHandlerRequest.DispatchClosure :138
// {
uType* HttpMessageHandlerRequest__DispatchClosure_typeof();
void HttpMessageHandlerRequest__DispatchClosure__ctor__fn(HttpMessageHandlerRequest__DispatchClosure* __this, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg);
void HttpMessageHandlerRequest__DispatchClosure__New1_fn(int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg, HttpMessageHandlerRequest__DispatchClosure** __retval);
void HttpMessageHandlerRequest__DispatchClosure__Run_fn(HttpMessageHandlerRequest__DispatchClosure* __this);

struct HttpMessageHandlerRequest__DispatchClosure : uObject
{
    uStrong<uDelegate*> _action;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _arg;
    int32_t _state;

    void ctor_(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg);
    void Run();
    static HttpMessageHandlerRequest__DispatchClosure* New1(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg);
};
// }

}}}} // ::g::Uno::Net::Http
