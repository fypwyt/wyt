// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/MainPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainPage;}
namespace g{struct MainPage__Template1;}

namespace g{

// public partial sealed class MainPage.Template1 :26
// {
::g::Uno::UX::Template_type* MainPage__Template1_typeof();
void MainPage__Template1__ctor_1_fn(MainPage__Template1* __this, ::g::MainPage* parent, ::g::MainPage* parentInstance);
void MainPage__Template1__New1_fn(MainPage__Template1* __this, uObject** __retval);
void MainPage__Template1__New2_fn(::g::MainPage* parent, ::g::MainPage* parentInstance, MainPage__Template1** __retval);

struct MainPage__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::MainPage*> __parent1;
    uWeak< ::g::MainPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainPage__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::MainPage* parent, ::g::MainPage* parentInstance);
    static MainPage__Template1* New2(::g::MainPage* parent, ::g::MainPage* parentInstance);
};
// }

} // ::g
