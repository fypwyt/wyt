// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.6.0/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.Route-a9d98f4f.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct PushRouteCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class PushRouteCommand :193
// {
::g::Fuse::Navigation::RouteModificationCommand_type* PushRouteCommand_typeof();
void PushRouteCommand__ProcessArguments_fn(PushRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval);

struct PushRouteCommand : ::g::Fuse::Navigation::RouteModificationCommand
{
};
// }

}}} // ::g::Fuse::Navigation
