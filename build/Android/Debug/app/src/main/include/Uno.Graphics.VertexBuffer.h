// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Graphics/VertexBuffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public sealed class VertexBuffer :6
// {
::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof();
void VertexBuffer__ctor_1_fn(VertexBuffer* __this, uArray* data, int32_t* usage);
void VertexBuffer__ctor_4_fn(VertexBuffer* __this, int32_t* usage);
void VertexBuffer__New1_fn(uArray* data, int32_t* usage, VertexBuffer** __retval);
void VertexBuffer__New4_fn(int32_t* usage, VertexBuffer** __retval);

struct VertexBuffer : ::g::Uno::Graphics::DeviceBuffer
{
    void ctor_1(uArray* data, int32_t usage);
    void ctor_4(int32_t usage);
    static VertexBuffer* New1(uArray* data, int32_t usage);
    static VertexBuffer* New4(int32_t usage);
};
// }

}}} // ::g::Uno::Graphics
