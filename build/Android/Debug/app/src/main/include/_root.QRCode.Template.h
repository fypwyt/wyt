// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/QRCode.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct QRCode;}
namespace g{struct QRCode__Template;}

namespace g{

// public partial sealed class QRCode.Template :6
// {
::g::Uno::UX::Template_type* QRCode__Template_typeof();
void QRCode__Template__ctor_1_fn(QRCode__Template* __this, ::g::QRCode* parent, ::g::QRCode* parentInstance);
void QRCode__Template__New1_fn(QRCode__Template* __this, uObject** __retval);
void QRCode__Template__New2_fn(::g::QRCode* parent, ::g::QRCode* parentInstance, QRCode__Template** __retval);

struct QRCode__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::QRCode*> __parent1;
    uWeak< ::g::QRCode*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_Url_inst1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return QRCode__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::QRCode* parent, ::g::QRCode* parentInstance);
    static QRCode__Template* New2(::g::QRCode* parent, ::g::QRCode* parentInstance);
};
// }

} // ::g
