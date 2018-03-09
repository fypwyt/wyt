// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Content/Fonts/SdfFontShader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct SdfFontShader;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShaderData;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class SdfFontShader :23
// {
::g::Uno::Content::Fonts::TextShader_type* SdfFontShader_typeof();
void SdfFontShader__Draw_fn(SdfFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data);

struct SdfFontShader : ::g::Uno::Content::Fonts::TextShader
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_379fdedc;
};
// }

}}}} // ::g::Uno::Content::Fonts
