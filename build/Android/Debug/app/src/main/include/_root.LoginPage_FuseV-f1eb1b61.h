// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/LoginPage.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LoginPage_FuseVisual_IsEnabled_Property;}

namespace g{

// internal sealed class LoginPage_FuseVisual_IsEnabled_Property :19
// {
::g::Uno::UX::Property1_type* LoginPage_FuseVisual_IsEnabled_Property_typeof();
void LoginPage_FuseVisual_IsEnabled_Property__ctor_3_fn(LoginPage_FuseVisual_IsEnabled_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name);
void LoginPage_FuseVisual_IsEnabled_Property__Get1_fn(LoginPage_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void LoginPage_FuseVisual_IsEnabled_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, LoginPage_FuseVisual_IsEnabled_Property** __retval);
void LoginPage_FuseVisual_IsEnabled_Property__get_Object_fn(LoginPage_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LoginPage_FuseVisual_IsEnabled_Property__Set1_fn(LoginPage_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct LoginPage_FuseVisual_IsEnabled_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Visual*> _obj;

    void ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
    static LoginPage_FuseVisual_IsEnabled_Property* New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
