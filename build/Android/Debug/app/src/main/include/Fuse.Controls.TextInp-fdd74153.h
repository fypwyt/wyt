// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.6.0/TextControls/TextInputControl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputActionArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class TextInputActionArgs :10
// {
::g::Fuse::VisualEventArgs_type* TextInputActionArgs_typeof();
void TextInputActionArgs__ctor_2_fn(TextInputActionArgs* __this, ::g::Fuse::Visual* visual, int32_t* type);
void TextInputActionArgs__New3_fn(::g::Fuse::Visual* visual, int32_t* type, TextInputActionArgs** __retval);
void TextInputActionArgs__get_Type_fn(TextInputActionArgs* __this, int32_t* __retval);
void TextInputActionArgs__set_Type_fn(TextInputActionArgs* __this, int32_t* value);

struct TextInputActionArgs : ::g::Fuse::VisualEventArgs
{
    int32_t _Type;

    void ctor_2(::g::Fuse::Visual* visual, int32_t type);
    int32_t Type();
    void Type(int32_t value);
    static TextInputActionArgs* New3(::g::Fuse::Visual* visual, int32_t type);
};
// }

}}} // ::g::Fuse::Controls
