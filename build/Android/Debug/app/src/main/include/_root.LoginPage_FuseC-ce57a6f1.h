// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/LoginPage.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LoginPage_FuseControlsTextInputControl_Value_Property;}

namespace g{

// internal sealed class LoginPage_FuseControlsTextInputControl_Value_Property :10
// {
::g::Uno::UX::Property1_type* LoginPage_FuseControlsTextInputControl_Value_Property_typeof();
void LoginPage_FuseControlsTextInputControl_Value_Property__ctor_3_fn(LoginPage_FuseControlsTextInputControl_Value_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name);
void LoginPage_FuseControlsTextInputControl_Value_Property__Get1_fn(LoginPage_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void LoginPage_FuseControlsTextInputControl_Value_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, LoginPage_FuseControlsTextInputControl_Value_Property** __retval);
void LoginPage_FuseControlsTextInputControl_Value_Property__get_Object_fn(LoginPage_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LoginPage_FuseControlsTextInputControl_Value_Property__Set1_fn(LoginPage_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void LoginPage_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn(LoginPage_FuseControlsTextInputControl_Value_Property* __this, bool* __retval);

struct LoginPage_FuseControlsTextInputControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextInputControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
    static LoginPage_FuseControlsTextInputControl_Value_Property* New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
