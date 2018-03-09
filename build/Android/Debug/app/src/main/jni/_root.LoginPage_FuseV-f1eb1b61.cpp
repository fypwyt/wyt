// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/LoginPage.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginPage_FuseV-f1eb1b61.h>
#include <Fuse.Visual.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LoginPage_FuseVisual_IsEnabled_Property :19
// {
static void LoginPage_FuseVisual_IsEnabled_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Visual*/], offsetof(LoginPage_FuseVisual_IsEnabled_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* LoginPage_FuseVisual_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LoginPage_FuseVisual_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LoginPage_FuseVisual_IsEnabled_Property", options);
    type->fp_build_ = LoginPage_FuseVisual_IsEnabled_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))LoginPage_FuseVisual_IsEnabled_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LoginPage_FuseVisual_IsEnabled_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))LoginPage_FuseVisual_IsEnabled_Property__Set1_fn;
    return type;
}

// public LoginPage_FuseVisual_IsEnabled_Property(Fuse.Visual obj, Uno.UX.Selector name) :22
void LoginPage_FuseVisual_IsEnabled_Property__ctor_3_fn(LoginPage_FuseVisual_IsEnabled_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :24
void LoginPage_FuseVisual_IsEnabled_Property__Get1_fn(LoginPage_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[0/*Fuse.Visual*/]))->IsEnabled(), void();
}

// public LoginPage_FuseVisual_IsEnabled_Property New(Fuse.Visual obj, Uno.UX.Selector name) :22
void LoginPage_FuseVisual_IsEnabled_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, LoginPage_FuseVisual_IsEnabled_Property** __retval)
{
    *__retval = LoginPage_FuseVisual_IsEnabled_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :23
void LoginPage_FuseVisual_IsEnabled_Property__get_Object_fn(LoginPage_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :25
void LoginPage_FuseVisual_IsEnabled_Property__Set1_fn(LoginPage_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[0/*Fuse.Visual*/]))->IsEnabled(v_);
}

// public LoginPage_FuseVisual_IsEnabled_Property(Fuse.Visual obj, Uno.UX.Selector name) [instance] :22
void LoginPage_FuseVisual_IsEnabled_Property::ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public LoginPage_FuseVisual_IsEnabled_Property New(Fuse.Visual obj, Uno.UX.Selector name) [static] :22
LoginPage_FuseVisual_IsEnabled_Property* LoginPage_FuseVisual_IsEnabled_Property::New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name)
{
    LoginPage_FuseVisual_IsEnabled_Property* obj1 = (LoginPage_FuseVisual_IsEnabled_Property*)uNew(LoginPage_FuseVisual_IsEnabled_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
