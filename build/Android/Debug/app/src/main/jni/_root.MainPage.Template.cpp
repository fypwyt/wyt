// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/MainPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainPage.h>
#include <_root.MainPage.Template.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainPage.Template :6
// {
// static Template() :15
static void MainPage__Template__cctor__fn(uType* __type)
{
}

static void MainPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Welcome!");
    type->SetFields(2,
        ::g::MainPage_typeof(), offsetof(MainPage__Template, __parent1), uFieldFlagsWeak,
        ::g::MainPage_typeof(), offsetof(MainPage__Template, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* MainPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainPage.Template", options);
    type->fp_build_ = MainPage__Template_build;
    type->fp_cctor_ = MainPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainPage__Template__New1_fn;
    return type;
}

// public Template(MainPage parent, MainPage parentInstance) :10
void MainPage__Template__ctor_1_fn(MainPage__Template* __this, ::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void MainPage__Template__New1_fn(MainPage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __self1->Value(::STRINGS[0/*"Welcome!"*/]);
    return *__retval = __self1, void();
}

// public Template New(MainPage parent, MainPage parentInstance) :10
void MainPage__Template__New2_fn(::g::MainPage* parent, ::g::MainPage* parentInstance, MainPage__Template** __retval)
{
    *__retval = MainPage__Template::New2(parent, parentInstance);
}

// public Template(MainPage parent, MainPage parentInstance) [instance] :10
void MainPage__Template::ctor_1(::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MainPage parent, MainPage parentInstance) [static] :10
MainPage__Template* MainPage__Template::New2(::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    MainPage__Template* obj1 = (MainPage__Template*)uNew(MainPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
