// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.6.0/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaSc-8e9ad5a9.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__RemoveAt;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.RemoveAt :568
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__RemoveAt_typeof();
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index);
void Observable__RemoveAt__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, Observable__RemoveAt** __retval);
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub);

struct Observable__RemoveAt : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    int32_t _index;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index);
    static Observable__RemoveAt* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
