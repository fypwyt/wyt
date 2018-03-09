// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.6.0/TextControls/TextBox.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct TextBox;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class TextBox :12
// {
::g::Fuse::Controls::TextInputControl_type* TextBox_typeof();
void TextBox__ctor_8_fn(TextBox* __this);
void TextBox__InitializeUX_fn(TextBox* __this);
void TextBox__New4_fn(TextBox** __retval);

struct TextBox : ::g::Fuse::Controls::TextInput
{
    uStrong< ::g::Uno::UX::Property1*> stroke_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> text_box_Fill_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> text_box;
    uStrong< ::g::Fuse::Drawing::Stroke*> stroke;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TextBox_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TextBox_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return TextBox_typeof()->Init(), __selector2_; }

    void ctor_8();
    void InitializeUX();
    static TextBox* New4();
};
// }

}}} // ::g::Fuse::Controls
