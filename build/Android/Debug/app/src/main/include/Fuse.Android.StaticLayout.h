// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Android.TextRenderer/1.6.0/Internal/StaticLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{struct Canvas;}}}
namespace g{namespace Fuse{namespace Android{struct StaticLayout;}}}
namespace g{namespace Fuse{namespace Android{struct TextPaint;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class StaticLayout :12
// {
uType* StaticLayout_typeof();
void StaticLayout__ctor__fn(StaticLayout* __this, ::g::Java::Object* handle);
void StaticLayout__ctor_1_fn(StaticLayout* __this, uString* text, ::g::Fuse::Android::TextPaint* paint, int32_t* width, int32_t* align, float* spacingMult, float* spacingAdd, bool* includePad);
void StaticLayout__ctor_2_fn(StaticLayout* __this, uString* text, int32_t* bufStart, int32_t* bufEnd, ::g::Fuse::Android::TextPaint* paint, int32_t* outerWidth, int32_t* align, float* spacingMult, float* spacingAdd, bool* includePad, int32_t* truncateAt, int32_t* ellipsizedWith);
void StaticLayout__Create_fn(uString* text, int32_t* bufStart, int32_t* bufEnd, ::g::Java::Object* paintHandle, int32_t* outerWidth, int32_t* align, float* spacingMult, float* spacingAdd, bool* includePad, int32_t* truncateAt, int32_t* ellipsizedWith, ::g::Java::Object** __retval);
void StaticLayout__Create1_fn(uString* text, ::g::Java::Object* paintHandle, int32_t* width, int32_t* align, float* spacingMult, float* spacingAdd, bool* includePad, ::g::Java::Object** __retval);
void StaticLayout__Draw_fn(StaticLayout* __this, ::g::Fuse::Android::Canvas* canvas);
void StaticLayout__Draw1_fn(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle);
void StaticLayout__get_EllipsizedWidth_fn(StaticLayout* __this, int32_t* __retval);
void StaticLayout__GetDesiredWidth_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, float* __retval);
void StaticLayout__GetDesiredWidthImpl_fn(uString* text, ::g::Java::Object* paintHandle, float* __retval);
void StaticLayout__GetEllipsizedWidth_fn(::g::Java::Object* handle, int32_t* __retval);
void StaticLayout__GetHeight_fn(::g::Java::Object* handle, int32_t* __retval);
void StaticLayout__GetLineBaseline_fn(StaticLayout* __this, int32_t* line, int32_t* __retval);
void StaticLayout__GetLineBaseline1_fn(::g::Java::Object* handle, int32_t* line, int32_t* __retval);
void StaticLayout__GetLineCount_fn(::g::Java::Object* handle, int32_t* __retval);
void StaticLayout__GetLineEnd_fn(StaticLayout* __this, int32_t* line, int32_t* __retval);
void StaticLayout__GetLineEnd1_fn(::g::Java::Object* handle, int32_t* line, int32_t* __retval);
void StaticLayout__GetLineLeft_fn(StaticLayout* __this, int32_t* line, float* __retval);
void StaticLayout__GetLineLeft1_fn(::g::Java::Object* handle, int32_t* line, float* __retval);
void StaticLayout__GetLineStart_fn(StaticLayout* __this, int32_t* line, int32_t* __retval);
void StaticLayout__GetLineStart1_fn(::g::Java::Object* handle, int32_t* line, int32_t* __retval);
void StaticLayout__get_Handle_fn(StaticLayout* __this, ::g::Java::Object** __retval);
void StaticLayout__get_Height_fn(StaticLayout* __this, int32_t* __retval);
void StaticLayout__get_LineCount_fn(StaticLayout* __this, int32_t* __retval);
void StaticLayout__New2_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, int32_t* width, int32_t* align, float* spacingMult, float* spacingAdd, bool* includePad, StaticLayout** __retval);
void StaticLayout__New3_fn(uString* text, int32_t* bufStart, int32_t* bufEnd, ::g::Fuse::Android::TextPaint* paint, int32_t* outerWidth, int32_t* align, float* spacingMult, float* spacingAdd, bool* includePad, int32_t* truncateAt, int32_t* ellipsizedWith, StaticLayout** __retval);

struct StaticLayout : uObject
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_(::g::Java::Object* handle);
    void ctor_1(uString* text, ::g::Fuse::Android::TextPaint* paint, int32_t width, int32_t align, float spacingMult, float spacingAdd, bool includePad);
    void ctor_2(uString* text, int32_t bufStart, int32_t bufEnd, ::g::Fuse::Android::TextPaint* paint, int32_t outerWidth, int32_t align, float spacingMult, float spacingAdd, bool includePad, int32_t truncateAt, int32_t ellipsizedWith);
    void Draw(::g::Fuse::Android::Canvas* canvas);
    int32_t EllipsizedWidth();
    int32_t GetLineBaseline(int32_t line);
    int32_t GetLineEnd(int32_t line);
    float GetLineLeft(int32_t line);
    int32_t GetLineStart(int32_t line);
    ::g::Java::Object* Handle();
    int32_t Height();
    int32_t LineCount();
    static ::g::Java::Object* Create(uString* text, int32_t bufStart, int32_t bufEnd, ::g::Java::Object* paintHandle, int32_t outerWidth, int32_t align, float spacingMult, float spacingAdd, bool includePad, int32_t truncateAt, int32_t ellipsizedWith);
    static ::g::Java::Object* Create1(uString* text, ::g::Java::Object* paintHandle, int32_t width, int32_t align, float spacingMult, float spacingAdd, bool includePad);
    static void Draw1(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle);
    static float GetDesiredWidth(uString* text, ::g::Fuse::Android::TextPaint* paint);
    static float GetDesiredWidthImpl(uString* text, ::g::Java::Object* paintHandle);
    static int32_t GetEllipsizedWidth(::g::Java::Object* handle);
    static int32_t GetHeight(::g::Java::Object* handle);
    static int32_t GetLineBaseline1(::g::Java::Object* handle, int32_t line);
    static int32_t GetLineCount(::g::Java::Object* handle);
    static int32_t GetLineEnd1(::g::Java::Object* handle, int32_t line);
    static float GetLineLeft1(::g::Java::Object* handle, int32_t line);
    static int32_t GetLineStart1(::g::Java::Object* handle, int32_t line);
    static StaticLayout* New2(uString* text, ::g::Fuse::Android::TextPaint* paint, int32_t width, int32_t align, float spacingMult, float spacingAdd, bool includePad);
    static StaticLayout* New3(uString* text, int32_t bufStart, int32_t bufEnd, ::g::Fuse::Android::TextPaint* paint, int32_t outerWidth, int32_t align, float spacingMult, float spacingAdd, bool includePad, int32_t truncateAt, int32_t ellipsizedWith);
};
// }

}}} // ::g::Fuse::Android
