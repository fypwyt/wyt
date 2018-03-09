// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Graphics/IndexBuffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Graphics{

// public sealed class IndexBuffer :6
// {
::g::Uno::Graphics::DeviceBuffer_type* IndexBuffer_typeof();
void IndexBuffer__ctor_1_fn(IndexBuffer* __this, uArray* data, int32_t* usage);
void IndexBuffer__ctor_3_fn(IndexBuffer* __this, ::g::Uno::Buffer* data, int32_t* usage);
void IndexBuffer__New1_fn(uArray* data, int32_t* usage, IndexBuffer** __retval);
void IndexBuffer__New3_fn(::g::Uno::Buffer* data, int32_t* usage, IndexBuffer** __retval);

struct IndexBuffer : ::g::Uno::Graphics::DeviceBuffer
{
    void ctor_1(uArray* data, int32_t usage);
    void ctor_3(::g::Uno::Buffer* data, int32_t usage);
    static IndexBuffer* New1(uArray* data, int32_t usage);
    static IndexBuffer* New3(::g::Uno::Buffer* data, int32_t usage);
};
// }

}}} // ::g::Uno::Graphics
