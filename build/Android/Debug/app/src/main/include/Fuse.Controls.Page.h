// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Controls.Navigation/1.6.0/Page.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class Page :46
// {
::g::Fuse::Controls::Panel_type* Page_typeof();
void Page__ctor_7_fn(Page* __this);
void Page__CleanupBusy_fn(Page* __this);
void Page__CleanupFreezeTrigger_fn(Page* __this);
void Page__get_Freeze_fn(Page* __this, int32_t* __retval);
void Page__set_Freeze_fn(Page* __this, int32_t* value);
void Page__ListenBusy_fn(Page* __this);
void Page__OnBusyUpdate_fn(Page* __this);
void Page__OnRooted_fn(Page* __this);
void Page__OnUnrooted_fn(Page* __this);
void Page__Prepare_fn(Page* __this, uString* parameter);
void Page__get_PrepareBusy_fn(Page* __this, int32_t* __retval);
void Page__set_PrepareBusy_fn(Page* __this, int32_t* value);
void Page__SetupFreezeTrigger_fn(Page* __this);

struct Page : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Triggers::Trigger*> _freezeTrigger;
    int32_t _freeze;
    int32_t _prepare;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _prepareBusy;
    int32_t _busyFrames;
    bool _isBusy;

    void ctor_7();
    void CleanupBusy();
    void CleanupFreezeTrigger();
    int32_t Freeze();
    void Freeze(int32_t value);
    void ListenBusy();
    void OnBusyUpdate();
    int32_t PrepareBusy();
    void PrepareBusy(int32_t value);
    void SetupFreezeTrigger();
};
// }

}}} // ::g::Fuse::Controls
