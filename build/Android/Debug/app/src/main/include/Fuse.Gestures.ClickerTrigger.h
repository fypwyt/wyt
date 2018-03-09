// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Gestures/1.6.0/Internal/Clicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct ClickerTrigger;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class ClickerTrigger :19
// {
::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof();
void ClickerTrigger__ctor_5_fn(ClickerTrigger* __this);
void ClickerTrigger__Accept_fn(ClickerTrigger* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval);
void ClickerTrigger__get_GesturePriority_fn(ClickerTrigger* __this, int32_t* __retval);
void ClickerTrigger__set_GesturePriority_fn(ClickerTrigger* __this, int32_t* value);
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this);
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this);
void ClickerTrigger__get_PointerIndex_fn(ClickerTrigger* __this, int32_t* __retval);
void ClickerTrigger__set_PointerIndex_fn(ClickerTrigger* __this, int32_t* value);

struct ClickerTrigger : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;
    int32_t _pointerIndex;
    int32_t _gesturePriority;

    void ctor_5();
    bool Accept(::g::Fuse::Input::PointerEventArgs* args);
    int32_t GesturePriority();
    void GesturePriority(int32_t value);
    int32_t PointerIndex();
    void PointerIndex(int32_t value);
};
// }

}}} // ::g::Fuse::Gestures
