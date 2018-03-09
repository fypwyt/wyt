// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/QRCode.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.QRCode.h>
#include <_root.QRCode.Template1.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class QRCode.Template1 :32
// {
// static Template1() :41
static void QRCode__Template1__cctor__fn(uType* __type)
{
}

static void QRCode__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ID:");
    type->SetFields(2,
        ::g::QRCode_typeof(), offsetof(QRCode__Template1, __parent1), uFieldFlagsWeak,
        ::g::QRCode_typeof(), offsetof(QRCode__Template1, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* QRCode__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(QRCode__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("QRCode.Template1", options);
    type->fp_build_ = QRCode__Template1_build;
    type->fp_cctor_ = QRCode__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))QRCode__Template1__New1_fn;
    return type;
}

// public Template1(QRCode parent, QRCode parentInstance) :36
void QRCode__Template1__ctor_1_fn(QRCode__Template1* __this, ::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :44
void QRCode__Template1__New1_fn(QRCode__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __self1->Value(::STRINGS[0/*"ID:"*/]);
    return *__retval = __self1, void();
}

// public Template1 New(QRCode parent, QRCode parentInstance) :36
void QRCode__Template1__New2_fn(::g::QRCode* parent, ::g::QRCode* parentInstance, QRCode__Template1** __retval)
{
    *__retval = QRCode__Template1::New2(parent, parentInstance);
}

// public Template1(QRCode parent, QRCode parentInstance) [instance] :36
void QRCode__Template1::ctor_1(::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(QRCode parent, QRCode parentInstance) [static] :36
QRCode__Template1* QRCode__Template1::New2(::g::QRCode* parent, ::g::QRCode* parentInstance)
{
    QRCode__Template1* obj1 = (QRCode__Template1*)uNew(QRCode__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
