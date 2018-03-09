// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/QRCode.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginPage_FuseC-15e70352.h>
#include <_root.QRCode.h>
#include <_root.QRCode.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Dock.h>
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

// public partial sealed class QRCode.Template :6
// {
// static Template() :16
static void QRCode__Template__cctor__fn(uType* __type)
{
    QRCode__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
}

static void QRCode__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("qr");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::QRCode_typeof(), offsetof(QRCode__Template, __parent1), uFieldFlagsWeak,
        ::g::QRCode_typeof(), offsetof(QRCode__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(QRCode__Template, __self_Url_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&QRCode__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* QRCode__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(QRCode__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("QRCode.Template", options);
    type->fp_build_ = QRCode__Template_build;
    type->fp_cctor_ = QRCode__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))QRCode__Template__New1_fn;
    return type;
}

// public Template(QRCode parent, QRCode parentInstance) :10
void QRCode__Template__ctor_1_fn(QRCode__Template* __this, ::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :19
void QRCode__Template__New1_fn(QRCode__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Image* __self1 = ::g::Fuse::Controls::Image::New3();
    __this->__self_Url_inst1 = ::g::LoginPage_FuseControlsImage_Url_Property::New1(__self1, QRCode__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"qr"*/]);
    ::g::Fuse::Reactive::DataBinding* temp1 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Url_inst1, (uObject*)temp, 3);
    ::g::Fuse::Controls::DockPanel::SetDock(__self1, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template New(QRCode parent, QRCode parentInstance) :10
void QRCode__Template__New2_fn(::g::QRCode* parent, ::g::QRCode* parentInstance, QRCode__Template** __retval)
{
    *__retval = QRCode__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector QRCode__Template::__selector0_;

// public Template(QRCode parent, QRCode parentInstance) [instance] :10
void QRCode__Template::ctor_1(::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(QRCode parent, QRCode parentInstance) [static] :10
QRCode__Template* QRCode__Template::New2(::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    QRCode__Template* obj1 = (QRCode__Template*)uNew(QRCode__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
