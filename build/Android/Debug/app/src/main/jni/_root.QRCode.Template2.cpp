// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/QRCode.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginPage_FuseC-7f8524bb.h>
#include <_root.QRCode.h>
#include <_root.QRCode.Template2.h>
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

// public partial sealed class QRCode.Template2 :52
// {
// static Template2() :62
static void QRCode__Template2__cctor__fn(uType* __type)
{
    QRCode__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void QRCode__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("id");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::QRCode_typeof(), offsetof(QRCode__Template2, __parent1), uFieldFlagsWeak,
        ::g::QRCode_typeof(), offsetof(QRCode__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(QRCode__Template2, __self_Value_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&QRCode__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* QRCode__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(QRCode__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("QRCode.Template2", options);
    type->fp_build_ = QRCode__Template2_build;
    type->fp_cctor_ = QRCode__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))QRCode__Template2__New1_fn;
    return type;
}

// public Template2(QRCode parent, QRCode parentInstance) :56
void QRCode__Template2__ctor_1_fn(QRCode__Template2* __this, ::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :65
void QRCode__Template2__New1_fn(QRCode__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->__self_Value_inst1 = ::g::LoginPage_FuseControlsTextControl_Value_Property::New1(__self1, QRCode__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"id"*/]);
    ::g::Fuse::Reactive::DataBinding* temp1 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template2 New(QRCode parent, QRCode parentInstance) :56
void QRCode__Template2__New2_fn(::g::QRCode* parent, ::g::QRCode* parentInstance, QRCode__Template2** __retval)
{
    *__retval = QRCode__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector QRCode__Template2::__selector0_;

// public Template2(QRCode parent, QRCode parentInstance) [instance] :56
void QRCode__Template2::ctor_1(::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(QRCode parent, QRCode parentInstance) [static] :56
QRCode__Template2* QRCode__Template2::New2(::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    QRCode__Template2* obj1 = (QRCode__Template2*)uNew(QRCode__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
