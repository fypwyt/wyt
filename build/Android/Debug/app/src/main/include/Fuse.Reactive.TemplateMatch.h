// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.6.0/Instantiator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct TemplateMatch;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal struct TemplateMatch :67
// {
uStructType* TemplateMatch_typeof();
void TemplateMatch__Matches_fn(TemplateMatch* __this, TemplateMatch* b, bool* __retval);

struct TemplateMatch
{
    bool All;
    uStrong< ::g::Uno::UX::Template*> Template;

    bool Matches(TemplateMatch b);
};
// }

}}} // ::g::Fuse::Reactive
