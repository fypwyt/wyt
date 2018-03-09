// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/MainPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainPage.h>
#include <_root.MainPage.Template2.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainPage.Template2 :51
// {
// static Template2() :60
static void MainPage__Template2__cctor__fn(uType* __type)
{
}

static void MainPage__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Credit point:");
    type->SetFields(2,
        ::g::MainPage_typeof(), offsetof(MainPage__Template2, __parent1), uFieldFlagsWeak,
        ::g::MainPage_typeof(), offsetof(MainPage__Template2, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* MainPage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainPage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainPage.Template2", options);
    type->fp_build_ = MainPage__Template2_build;
    type->fp_cctor_ = MainPage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainPage__Template2__New1_fn;
    return type;
}

// public Template2(MainPage parent, MainPage parentInstance) :55
void MainPage__Template2__ctor_1_fn(MainPage__Template2* __this, ::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :63
void MainPage__Template2__New1_fn(MainPage__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __self1->Value(::STRINGS[0/*"Credit point:"*/]);
    return *__retval = __self1, void();
}

// public Template2 New(MainPage parent, MainPage parentInstance) :55
void MainPage__Template2__New2_fn(::g::MainPage* parent, ::g::MainPage* parentInstance, MainPage__Template2** __retval)
{
    *__retval = MainPage__Template2::New2(parent, parentInstance);
}

// public Template2(MainPage parent, MainPage parentInstance) [instance] :55
void MainPage__Template2::ctor_1(::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MainPage parent, MainPage parentInstance) [static] :55
MainPage__Template2* MainPage__Template2::New2(::g::MainPage* parent, ::g::MainPage* parentInstance)
{
    MainPage__Template2* obj1 = (MainPage__Template2*)uNew(MainPage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
