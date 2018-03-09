// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/MainPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginPage_FuseC-7f8524bb.h>
#include <_root.MainPage.h>
#include <_root.MainPage.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{

// public partial sealed class MainPage.Template1 :26
// {
// static Template1() :36
static void MainPage__Template1__cctor__fn(uType* __type)
{
    MainPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void MainPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("name");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::MainPage_typeof(), offsetof(MainPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::MainPage_typeof(), offsetof(MainPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainPage__Template1, __self_Value_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainPage__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MainPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainPage.Template1", options);
    type->fp_build_ = MainPage__Template1_build;
    type->fp_cctor_ = MainPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainPage__Template1__New1_fn;
    return type;
}

// public Template1(MainPage parent, MainPage parentInstance) :30
void MainPage__Template1__ctor_1_fn(MainPage__Template1* __this, ::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :39
void MainPage__Template1__New1_fn(MainPage__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->__self_Value_inst1 = ::g::LoginPage_FuseControlsTextControl_Value_Property::New1(__self1, MainPage__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"name"*/]);
    ::g::Fuse::Reactive::DataBinding* temp1 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template1 New(MainPage parent, MainPage parentInstance) :30
void MainPage__Template1__New2_fn(::g::MainPage* parent, ::g::MainPage* parentInstance, MainPage__Template1** __retval)
{
    *__retval = MainPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainPage__Template1::__selector0_;

// public Template1(MainPage parent, MainPage parentInstance) [instance] :30
void MainPage__Template1::ctor_1(::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(MainPage parent, MainPage parentInstance) [static] :30
MainPage__Template1* MainPage__Template1::New2(::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    MainPage__Template1* obj1 = (MainPage__Template1*)uNew(MainPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
