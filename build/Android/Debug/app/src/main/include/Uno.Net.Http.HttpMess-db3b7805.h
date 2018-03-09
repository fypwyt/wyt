// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Uno.Net.Http/1.6.0/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest__ProgressClosure;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// private sealed class HttpMessageHandlerRequest.ProgressClosure :186
// {
uType* HttpMessageHandlerRequest__ProgressClosure_typeof();
void HttpMessageHandlerRequest__ProgressClosure__ctor__fn(HttpMessageHandlerRequest__ProgressClosure* __this, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int32_t* current, int32_t* total, bool* hasTotal);
void HttpMessageHandlerRequest__ProgressClosure__New1_fn(int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int32_t* current, int32_t* total, bool* hasTotal, HttpMessageHandlerRequest__ProgressClosure** __retval);
void HttpMessageHandlerRequest__ProgressClosure__Run_fn(HttpMessageHandlerRequest__ProgressClosure* __this);

struct HttpMessageHandlerRequest__ProgressClosure : uObject
{
    uStrong<uDelegate*> _action;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _request;
    int32_t _current;
    int32_t _total;
    bool _hasTotal;
    int32_t _state;

    void ctor_(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int32_t current, int32_t total, bool hasTotal);
    void Run();
    static HttpMessageHandlerRequest__ProgressClosure* New1(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int32_t current, int32_t total, bool hasTotal);
};
// }

}}}} // ::g::Uno::Net::Http
