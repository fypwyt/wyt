// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-45253430.h>
#include <Android.Base.Primitiv-ae5fb0f1.h>
#include <Android.Base.Primitiv-b7b09a.h>
#include <Android.Base.Primitiv-e437692f.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Android.AppRoot.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Controls.Native.-3a814c3c.h>
#include <Fuse.Controls.Native.-43e7fbf.h>
#include <Fuse.Controls.Native.-454aa827.h>
#include <Fuse.Controls.Native.-51b6e8e5.h>
#include <Fuse.Controls.Native.-c67cabe.h>
#include <Fuse.Controls.Native.-ca2427b3.h>
#include <Fuse.Controls.Native.-dd7dd49d.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.-f43d469d.h>
#include <Fuse.Controls.VideoIm-78c612f4.h>
#include <Fuse.Internal.Android-336f3d43.h>
#include <Fuse.Platform.SystemUI.h>
#include <Java.Object.h>
#include <jni.h>
#include <Neovisionaries.WebSocketClient.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Compiler.ExportTa-7a61a803.h>
#include <Uno.Compiler.ExportTa-d4b8b207.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Guid.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Platform.AndroidDisplay.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
//~
void __JavaUnoObject_Finalizer(JNIEnv *env , jclass clazz, jlong ptr)
{
    uAutoReleasePool pool;
    uRelease((::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject*)ptr);
}
jboolean JNICALL callUno_Func(JNIEnv *env,jclass clazz,jobject theDelegate)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    jboolean __jresult;
    JTRY
        bool __result=uUnbox<bool>(uno_theDelegate->Invoke());
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch144(JNIEnv *env,jclass clazz,jobject view,jobject motionEvent,jlong viewPtr,jlong motionEventPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_view = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(view, true);
    ::g::Java::Object* uno_motionEvent = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(motionEvent, true);
    jboolean __jresult;
    JTRY
        bool __result=::g::Fuse::Controls::Native::Android::InputDispatch::OnTouch(uCast<::g::Java::Object*>(uno_view, ::g::Java::Object_typeof()), uCast<::g::Java::Object*>(uno_motionEvent, ::g::Java::Object_typeof()));
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction196(JNIEnv *env,jclass clazz,jobject jthis,jint actionCode)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::TextInput* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::TextInput*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::TextInput_typeof());
    int32_t uno_actionCode = (int32_t)actionCode;
    jboolean __jresult;
    JTRY
        bool __result=uno_jthis->OnEditorAction(uno_actionCode);
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Fuse_Platform_SystemUI_firstSizingGet103(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jboolean __jresult;
    JTRY
        bool __result=::g::Fuse::Platform::SystemUI::firstSizing();
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet86(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jboolean __jresult;
    JTRY
        bool __result=::g::Fuse::Platform::SystemUI::hasCachedStatusBarSize();
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool16(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jboolean __jresult;
    JTRY
        bool __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetBool(uno_array, uno_index);
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool39(JNIEnv *env,jclass clazz,jobject array,jint index,jboolean val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    bool uno_val = (bool)val;
    jboolean __jresult;
    JTRY
        bool __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetBool(uno_array, uno_index, uno_val);
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jboolean JNICALL callUno_Uno_Platform_AndroidDisplay__initializedGet54(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jboolean __jresult;
    JTRY
        bool __result=::g::Uno::Platform::AndroidDisplay::_initialized_;
        __jresult = (jboolean)__result;
    JCATCH
    return __jresult;
}
jbyte JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte17(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jbyte __jresult;
    JTRY
        int8_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetByte(uno_array, uno_index);
        __jresult = (jbyte)__result;
    JCATCH
    return __jresult;
}
jbyte JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte26(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jbyte __jresult;
    JTRY
        int8_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetUByte(uno_array, uno_index);
        __jresult = (jbyte)__result;
    JCATCH
    return __jresult;
}
jbyte JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte40(JNIEnv *env,jclass clazz,jobject array,jint index,jbyte val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    int8_t uno_val = (int8_t)val;
    jbyte __jresult;
    JTRY
        int8_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetByte(uno_array, uno_index, uno_val);
        __jresult = (jbyte)__result;
    JCATCH
    return __jresult;
}
jbyte JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte49(JNIEnv *env,jclass clazz,jobject array,jint index,jbyte val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    int8_t uno_val = (int8_t)val;
    jbyte __jresult;
    JTRY
        int8_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetUByte(uno_array, uno_index, uno_val);
        __jresult = (jbyte)__result;
    JCATCH
    return __jresult;
}
jchar JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar18(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jchar __jresult;
    JTRY
        char16_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetChar(uno_array, uno_index);
        __jresult = (jchar)__result;
    JCATCH
    return __jresult;
}
jchar JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar41(JNIEnv *env,jclass clazz,jobject array,jint index,jchar val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    char16_t uno_val = (char16_t)val;
    jchar __jresult;
    JTRY
        char16_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetChar(uno_array, uno_index, uno_val);
        __jresult = (jchar)__result;
    JCATCH
    return __jresult;
}
jdouble JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble19(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jdouble __jresult;
    JTRY
        double __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetDouble(uno_array, uno_index);
        __jresult = (jdouble)__result;
    JCATCH
    return __jresult;
}
jdouble JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble42(JNIEnv *env,jclass clazz,jobject array,jint index,jdouble val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    double uno_val = (double)val;
    jdouble __jresult;
    JTRY
        double __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetDouble(uno_array, uno_index, uno_val);
        __jresult = (jdouble)__result;
    JCATCH
    return __jresult;
}
jfloat JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat20(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jfloat __jresult;
    JTRY
        float __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetFloat(uno_array, uno_index);
        __jresult = (jfloat)__result;
    JCATCH
    return __jresult;
}
jfloat JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat43(JNIEnv *env,jclass clazz,jobject array,jint index,jfloat val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    float uno_val = (float)val;
    jfloat __jresult;
    JTRY
        float __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetFloat(uno_array, uno_index, uno_val);
        __jresult = (jfloat)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI__systemUIStateGet79(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int32_t __result=::g::Fuse::Platform::SystemUI::_systemUIState();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet87(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int32_t __result=::g::Fuse::Platform::SystemUI::cachedOpenSize();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight75(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int32_t __result=::g::Fuse::Platform::SystemUI::GetRealDisplayHeight();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth94(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int32_t __result=::g::Fuse::Platform::SystemUI::GetRealDisplayWidth();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet102(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int32_t __result=::g::Fuse::Platform::SystemUI::lastKeyboardHeight();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_realHeightGet69(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int32_t __result=::g::Fuse::Platform::SystemUI::realHeight();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Fuse_Platform_SystemUI_realWidthGet68(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jint __jresult;
    JTRY
        int32_t __result=::g::Fuse::Platform::SystemUI::realWidth();
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt21(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jint __jresult;
    JTRY
        int32_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetInt(uno_array, uno_index);
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jint JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt44(JNIEnv *env,jclass clazz,jobject array,jint index,jint val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    int32_t uno_val = (int32_t)val;
    jint __jresult;
    JTRY
        int32_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetInt(uno_array, uno_index, uno_val);
        __jresult = (jint)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::BoolArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::ByteArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CharArrayToUnoArrayPtr2(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CharArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr14(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::DoubleArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr15(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::FloatArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong22(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetLong(uno_array, uno_index);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr27(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::IntArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr28(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::LongArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr29(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewBoolArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr30(JNIEnv *env,jclass clazz,jint length,jboolean unoIsUnsigned)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    bool uno_unoIsUnsigned = (bool)unoIsUnsigned;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewByteArrayPtr(uno_length, uno_unoIsUnsigned);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr31(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewCharArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr32(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewDoubleArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr33(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewFloatArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr34(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewIntArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr35(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewLongArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr36(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewObjectArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr37(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewShortArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr38(JNIEnv *env,jclass clazz,jint length)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_length = (int32_t)length;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::NewStringArrayPtr(uno_length);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong45(JNIEnv *env,jclass clazz,jobject array,jint index,jlong val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    int64_t uno_val = (int64_t)val;
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetLong(uno_array, uno_index, uno_val);
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jlong JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr50(JNIEnv *env,jclass clazz,jobject jarr,jlong jarrPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_jarr = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(jarr, true);
    jlong __jresult;
    JTRY
        int64_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::ShortArrayToUnoArrayPtr(uCast<::g::Java::Object*>(uno_jarr, ::g::Java::Object_typeof()));
        __jresult = (jlong)__result;
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet243(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::ViewHandle* uno_jthis = uCast<::g::Fuse::Controls::Native::ViewHandle*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::ViewHandle_typeof());
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=uno_jthis->NativeHandle;
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Platform_SystemUI__keyboardListenerGet66(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Fuse::Platform::SystemUI::_keyboardListener();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Platform_SystemUI_layoutAttachedToGet65(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Fuse::Platform::SystemUI::layoutAttachedTo();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Platform_SystemUI_RootLayoutGet72(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Fuse::Platform::SystemUI::RootLayout();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Fuse_Platform_SystemUI_SuperLayoutGet70(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Fuse::Platform::SystemUI::SuperLayout();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Neovisionaries_WebSocketClient__webSocketGet380(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Neovisionaries::WebSocketClient* uno_jthis = uCast<::g::Neovisionaries::WebSocketClient*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Neovisionaries::WebSocketClient_typeof());
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=uno_jthis->_webSocket;
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray3(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyBoolArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray4(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyByteArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray5(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyCharArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray6(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyDoubleArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray7(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyFloatArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray8(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyIntArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray9(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyLongArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray10(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyObjectArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray11(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyShortArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray12(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyStringArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray13(JNIEnv *env,jclass clazz,jobject array)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    jobject __jresult;
    JTRY
        ::g::Java::Object* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::CopyUByteArray(uno_array);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef(((__result==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__result, ::g::Android::Base::Wrappers::IJWrapper_typeof())))))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject23(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jobject __jresult;
    JTRY
        uObject* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetObject(uno_array, uno_index);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(__result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString25(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jobject __jresult;
    JTRY
        uString* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetString(uno_array, uno_index);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((JniHelper::UnoToJavaString(__result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject46(JNIEnv *env,jclass clazz,jobject array,jint index,jobject val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    uObject* uno_val = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(val);
    jobject __jresult;
    JTRY
        uObject* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetObject(uno_array, uno_index, uno_val);
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(__result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString48(JNIEnv *env,jclass clazz,jobject array,jint index,jobject val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    uString* uno_val = JniHelper::JavaToUnoString((jstring)val);
    jobject __jresult;
    JTRY
        uString* __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetString(uno_array, uno_index, uCast<uString*>(uno_val, ::g::Uno::String_typeof()));
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((JniHelper::UnoToJavaString(__result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_Guid__ctor60(JNIEnv *env,jclass clazz,jobject bytes)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uArray* uno_bytes = uCast<uArray*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(bytes), ::g::Uno::Byte_typeof()->Array());
    jobject __jresult;
    JTRY
        ::g::Uno::Guid __result=::g::Uno::Guid__New1(uCast<uArray*>(uno_bytes, ::g::Uno::Byte_typeof()->Array()));
        __jresult = U_JNIVAR->NewLocalRef((::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(uBox(::g::Uno::Guid_typeof(), __result))));
    JCATCH
    return __jresult;
}
jobject JNICALL callUno_Uno_IO_BundleFile_BundlePathGet323(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Uno::IO::BundleFile* uno_jthis = uCast<::g::Uno::IO::BundleFile*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Uno::IO::BundleFile_typeof());
    jobject __jresult;
    JTRY
        uString* __result=uno_jthis->BundlePath();
        __jresult = (__result==NULL ? NULL : U_JNIVAR->NewLocalRef((JniHelper::UnoToJavaString(__result))));
    JCATCH
    return __jresult;
}
jshort JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort24(JNIEnv *env,jclass clazz,jobject array,jint index)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    jshort __jresult;
    JTRY
        int16_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::GetShort(uno_array, uno_index);
        __jresult = (jshort)__result;
    JCATCH
    return __jresult;
}
jshort JNICALL callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort47(JNIEnv *env,jclass clazz,jobject array,jint index,jshort val)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uObject* uno_array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(array);
    int32_t uno_index = (int32_t)index;
    int16_t uno_val = (int16_t)val;
    jshort __jresult;
    JTRY
        int16_t __result=::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints::SetShort(uno_array, uno_index, uno_val);
        __jresult = (jshort)__result;
    JCATCH
    return __jresult;
}
void JNICALL callUno_Action(JNIEnv *env,jclass clazz,jobject theDelegate)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action_typeof());
    JTRY
        uno_theDelegate->InvokeVoid();
    JCATCH
}
void JNICALL callUno_Action_ByteArray(JNIEnv *env,jclass clazz,jobject theDelegate,jobject arg)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL));
    uArray* uno_arg = uCast<uArray*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(arg), ::g::Uno::Byte_typeof()->Array());
    JTRY
        uno_theDelegate->InvokeVoid(uCast<uArray*>(uno_arg, ::g::Uno::Byte_typeof()->Array()));
    JCATCH
}
void JNICALL callUno_Action_int(JNIEnv *env,jclass clazz,jobject theDelegate,jint arg)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    int32_t uno_arg = (int32_t)arg;
    JTRY
        uno_theDelegate->InvokeVoid(uCRef<int32_t>(uno_arg));
    JCATCH
}
void JNICALL callUno_Action_Object(JNIEnv *env,jclass clazz,jobject theDelegate,jobject arg,jlong argPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL));
    ::g::Java::Object* uno_arg = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(arg, true);
    JTRY
        uno_theDelegate->InvokeVoid(uCast<::g::Java::Object*>(uno_arg, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Action_String(JNIEnv *env,jclass clazz,jobject theDelegate,jobject arg)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uDelegate* uno_theDelegate = uCast<uDelegate*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(theDelegate), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    uString* uno_arg = JniHelper::JavaToUnoString((jstring)arg);
    JTRY
        uno_theDelegate->InvokeVoid(uCast<uString*>(uno_arg, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Android_AppRoot_OnTouchEvent__341(JNIEnv *env,jclass clazz,jobject motionEvent,jlong motionEventPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_motionEvent = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(motionEvent, true);
    JTRY
        ::g::Fuse::Android::AppRoot::OnTouchEvent__(uCast<::g::Java::Object*>(uno_motionEvent, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar363(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Android::StatusBarConfig::UpdateStatusBar();
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange128(JNIEnv *env,jclass clazz,jobject jthis,jboolean hasFocus)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::FocusChangedListener* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::FocusChangedListener*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::FocusChangedListener_typeof());
    bool uno_hasFocus = (bool)hasFocus;
    JTRY
        uno_jthis->OnFocusChange(uno_hasFocus);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged166(JNIEnv *env,jclass clazz,jobject jthis,jint x,jint y,jint oldx,jint oldy)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::ScrollView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::ScrollView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::ScrollView_typeof());
    int32_t uno_x = (int32_t)x;
    int32_t uno_y = (int32_t)y;
    int32_t uno_oldx = (int32_t)oldx;
    int32_t uno_oldy = (int32_t)oldy;
    JTRY
        uno_jthis->OnScrollChanged(uno_x, uno_y, uno_oldx, uno_oldy);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged178(JNIEnv *env,jclass clazz,jobject jthis,jdouble rel,jboolean fromUser)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::Slider* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::Slider*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::Slider_typeof());
    double uno_rel = (double)rel;
    bool uno_fromUser = (bool)fromUser;
    JTRY
        uno_jthis->OnSeekBarChanged(uno_rel, uno_fromUser);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged185(JNIEnv *env,jclass clazz,jobject jthis,jobject holder,jint f,jint w,jint h,jlong holderPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::SurfaceView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::SurfaceView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::SurfaceView_typeof());
    ::g::Java::Object* uno_holder = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(holder, true);
    int32_t uno_f = (int32_t)f;
    int32_t uno_w = (int32_t)w;
    int32_t uno_h = (int32_t)h;
    JTRY
        uno_jthis->OnSurfaceChanged(uCast<::g::Java::Object*>(uno_holder, ::g::Java::Object_typeof()), uno_f, uno_w, uno_h);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated186(JNIEnv *env,jclass clazz,jobject jthis,jobject holder,jlong holderPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::SurfaceView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::SurfaceView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::SurfaceView_typeof());
    ::g::Java::Object* uno_holder = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(holder, true);
    JTRY
        uno_jthis->OnSurfaceCreated(uCast<::g::Java::Object*>(uno_holder, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed187(JNIEnv *env,jclass clazz,jobject jthis,jobject holder,jlong holderPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::SurfaceView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::SurfaceView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::SurfaceView_typeof());
    ::g::Java::Object* uno_holder = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(holder, true);
    JTRY
        uno_jthis->OnSurfaceDestroyed(uCast<::g::Java::Object*>(uno_holder, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded184(JNIEnv *env,jclass clazz,jobject jthis,jobject holder,jlong holderPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::SurfaceView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::SurfaceView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::SurfaceView_typeof());
    ::g::Java::Object* uno_holder = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(holder, true);
    JTRY
        uno_jthis->OnSurfaceRedrawNeeded(uCast<::g::Java::Object*>(uno_holder, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged191(JNIEnv *env,jclass clazz,jobject jthis,jboolean value)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::Switch* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::Switch*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::Switch_typeof());
    bool uno_value = (bool)value;
    JTRY
        uno_jthis->OnToggleChanged(uno_value);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged198(JNIEnv *env,jclass clazz,jobject jthis,jobject value)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::TextInput* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::TextInput*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::TextInput_typeof());
    uString* uno_value = JniHelper::JavaToUnoString((jstring)value);
    JTRY
        uno_jthis->OnTextChanged(uCast<uString*>(uno_value, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureAvailable212(JNIEnv *env,jclass clazz,jobject jthis,jobject surface,jlong surfacePtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::TextureView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::TextureView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::TextureView_typeof());
    ::g::Java::Object* uno_surface = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(surface, true);
    JTRY
        uno_jthis->OnSurfaceTextureAvailable(uCast<::g::Java::Object*>(uno_surface, ::g::Java::Object_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureDestroyed213(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::Native::Android::TextureView* uno_jthis = uCast<::g::Fuse::Controls::Native::Android::TextureView*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::Native::Android::TextureView_typeof());
    JTRY
        uno_jthis->OnSurfaceTextureDestroyed();
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer268(JNIEnv *env,jclass clazz,jobject jthis,jint percent)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    int32_t uno_percent = (int32_t)percent;
    JTRY
        uno_jthis->OnBuffer(uno_percent);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion266(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    JTRY
        uno_jthis->OnCompletion();
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError267(JNIEnv *env,jclass clazz,jobject jthis,jint what,jint extra)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    int32_t uno_what = (int32_t)what;
    int32_t uno_extra = (int32_t)extra;
    JTRY
        uno_jthis->OnError(uno_what, uno_extra);
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred280(JNIEnv *env,jclass clazz,jobject jthis,jobject msg)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    uString* uno_msg = JniHelper::JavaToUnoString((jstring)msg);
    JTRY
        uno_jthis->OnErrorOccurred(uCast<uString*>(uno_msg, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable271(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    JTRY
        uno_jthis->OnFrameAvailable();
    JCATCH
}
void JNICALL callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared265(JNIEnv *env,jclass clazz,jobject jthis)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer* uno_jthis = uCast<::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof());
    JTRY
        uno_jthis->OnPrepared();
    JCATCH
}
void JNICALL callUno_Fuse_Internal_AndroidSystemFont_AddAlias109(JNIEnv *env,jclass clazz,jobject name,jobject to,jint weight)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uString* uno_name = JniHelper::JavaToUnoString((jstring)name);
    uString* uno_to = JniHelper::JavaToUnoString((jstring)to);
    int32_t uno_weight = (int32_t)weight;
    JTRY
        ::g::Fuse::Internal::AndroidSystemFont::AddAlias(uCast<uString*>(uno_name, ::g::Uno::String_typeof()), uCast<uString*>(uno_to, ::g::Uno::String_typeof()), uno_weight);
    JCATCH
}
void JNICALL callUno_Fuse_Internal_AndroidSystemFont_AddFamily107(JNIEnv *env,jclass clazz,jobject name,jobject language,jobject variant)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uString* uno_name = JniHelper::JavaToUnoString((jstring)name);
    uString* uno_language = JniHelper::JavaToUnoString((jstring)language);
    uString* uno_variant = JniHelper::JavaToUnoString((jstring)variant);
    JTRY
        ::g::Fuse::Internal::AndroidSystemFont::AddFamily(uCast<uString*>(uno_name, ::g::Uno::String_typeof()), uCast<uString*>(uno_language, ::g::Uno::String_typeof()), uCast<uString*>(uno_variant, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Internal_AndroidSystemFont_AddFont108(JNIEnv *env,jclass clazz,jobject path,jint index,jint weight,jboolean isItalic)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uString* uno_path = JniHelper::JavaToUnoString((jstring)path);
    int32_t uno_index = (int32_t)index;
    int32_t uno_weight = (int32_t)weight;
    bool uno_isItalic = (bool)isItalic;
    JTRY
        ::g::Fuse::Internal::AndroidSystemFont::AddFont(uCast<uString*>(uno_path, ::g::Uno::String_typeof()), uno_index, uno_weight, uno_isItalic);
    JCATCH
}
void JNICALL callUno_Fuse_Internal_AndroidSystemFont_ThrowUno110(JNIEnv *env,jclass clazz,jobject message)
{
    uAutoReleasePool pool;
    INIT_JNI;
    uString* uno_message = JniHelper::JavaToUnoString((jstring)message);
    JTRY
        ::g::Fuse::Internal::AndroidSystemFont::ThrowUno(uCast<uString*>(uno_message, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI__keyboardListenerSet66(JNIEnv *env,jclass clazz,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        ::g::Fuse::Platform::SystemUI::_keyboardListener() = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI__systemUIStateSet79(JNIEnv *env,jclass clazz,jint setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_setVal = (int32_t)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::_systemUIState() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet87(JNIEnv *env,jclass clazz,jint setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_setVal = (int32_t)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::cachedOpenSize() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI76(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::CompensateRootLayoutForSystemUI();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_cppOnConfigChanged95(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::cppOnConfigChanged();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged82(JNIEnv *env,jclass clazz,jint height)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_height = (int32_t)height;
    JTRY
        ::g::Fuse::Platform::SystemUI::cppOnTopFrameChanged(uno_height);
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_firstSizingSet103(JNIEnv *env,jclass clazz,jboolean setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    bool uno_setVal = (bool)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::firstSizing() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet86(JNIEnv *env,jclass clazz,jboolean setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    bool uno_setVal = (bool)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::hasCachedStatusBarSize() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_layoutAttachedToSet65(JNIEnv *env,jclass clazz,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        ::g::Fuse::Platform::SystemUI::layoutAttachedTo() = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_OnConfigChanged93(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::OnConfigChanged();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_OnDestroy92(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::OnDestroy();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_onHideKeyboard104(JNIEnv *env,jclass clazz,jint keyboardHeight,jboolean force)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_keyboardHeight = (int32_t)keyboardHeight;
    bool uno_force = (bool)force;
    JTRY
        ::g::Fuse::Platform::SystemUI::onHideKeyboard(uno_keyboardHeight, uno_force);
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_onShowKeyboard105(JNIEnv *env,jclass clazz,jint keyboardHeight,jboolean force)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_keyboardHeight = (int32_t)keyboardHeight;
    bool uno_force = (bool)force;
    JTRY
        ::g::Fuse::Platform::SystemUI::onShowKeyboard(uno_keyboardHeight, uno_force);
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_realHeightSet69(JNIEnv *env,jclass clazz,jint setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_setVal = (int32_t)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::realHeight() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_realWidthSet68(JNIEnv *env,jclass clazz,jint setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    int32_t uno_setVal = (int32_t)setVal;
    JTRY
        ::g::Fuse::Platform::SystemUI::realWidth() = uno_setVal;
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_ResendFrameSizes96(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::ResendFrameSizes();
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_RootLayoutSet72(JNIEnv *env,jclass clazz,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        ::g::Fuse::Platform::SystemUI::RootLayout() = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_SuperLayoutSet70(JNIEnv *env,jclass clazz,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        ::g::Fuse::Platform::SystemUI::SuperLayout() = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Fuse_Platform_SystemUI_UpdateStatusBar99(JNIEnv *env,jclass clazz)
{
    uAutoReleasePool pool;
    INIT_JNI;
    JTRY
        ::g::Fuse::Platform::SystemUI::UpdateStatusBar();
    JCATCH
}
void JNICALL callUno_Neovisionaries_WebSocketClient__webSocketSet380(JNIEnv *env,jclass clazz,jobject jthis,jobject setVal,jlong setValPtr)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Neovisionaries::WebSocketClient* uno_jthis = uCast<::g::Neovisionaries::WebSocketClient*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Neovisionaries::WebSocketClient_typeof());
    ::g::Java::Object* uno_setVal = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(setVal, true);
    JTRY
        uno_jthis->_webSocket = uCast<::g::Java::Object*>(uno_setVal, ::g::Java::Object_typeof());
    JCATCH
}
void JNICALL callUno_Uno_Collections_List_lt_string_gt__Add58(JNIEnv *env,jclass clazz,jobject jthis,jobject item)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Uno::Collections::List* uno_jthis = uCast<::g::Uno::Collections::List*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    uString* uno_item = JniHelper::JavaToUnoString((jstring)item);
    JTRY
        ::g::Uno::Collections::List__Add_fn(uno_jthis, uCast<uString*>(uno_item, ::g::Uno::String_typeof()));
    JCATCH
}
void JNICALL callUno_Uno_Platform_AndroidDisplay__initializedSet54(JNIEnv *env,jclass clazz,jboolean setVal)
{
    uAutoReleasePool pool;
    INIT_JNI;
    bool uno_setVal = (bool)setVal;
    JTRY
        ::g::Uno::Platform::AndroidDisplay::_initialized_ = uno_setVal;
    JCATCH
}
void JNICALL callUno_Uno_Platform_AndroidDisplay_OnFrameCallback55(JNIEnv *env,jclass clazz,jobject jthis,jdouble currentTime,jdouble deltaTime)
{
    uAutoReleasePool pool;
    INIT_JNI;
    ::g::Uno::Platform::AndroidDisplay* uno_jthis = uCast<::g::Uno::Platform::AndroidDisplay*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(jthis), ::g::Uno::Platform::AndroidDisplay_typeof());
    double uno_currentTime = (double)currentTime;
    double uno_deltaTime = (double)deltaTime;
    JTRY
        uno_jthis->OnFrameCallback(uno_currentTime, uno_deltaTime);
    JCATCH
}
static uString* STRINGS[27];
static uType* TYPES[12];

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace Android{

// C:\Users\Brian\AppData\Local\Fusetools\Packages\UnoCore\1.6.0\Source\Uno\Compiler\ExportTargetInterop\Foreign\Android\ExternBlockHost.uno
// -----------------------------------------------------------------------------------------------------------------------------------------

// internal static extern class ExternBlockHost :10
// {
static void ExternBlockHost_build(uType* type)
{
}

uClassType* ExternBlockHost_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost", options);
    type->fp_build_ = ExternBlockHost_build;
    return type;
}

// private static extern void RegisterFunctions() :13
void ExternBlockHost__RegisterFunctions_fn()
{
    ExternBlockHost::RegisterFunctions();
}

// private static extern void RegisterFunctions() [static] :13
void ExternBlockHost::RegisterFunctions()
{
    JniHelper jni;
    static JNINativeMethod native_activity_funcs[] = {
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CharArrayToUnoArrayPtr2", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CharArrayToUnoArrayPtr2},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray3", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray3},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray4", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray4},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray5", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray5},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray6", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray6},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray7", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray7},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray8", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray8},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray9", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray9},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray10", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray10},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray11", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray11},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray12", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray12},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray13", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray13},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr14", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr14},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr15", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr15},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool16", (char* const)"(Lcom/uno/UnoObject;I)Z", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool16},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte17", (char* const)"(Lcom/uno/UnoObject;I)B", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte17},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar18", (char* const)"(Lcom/uno/UnoObject;I)C", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar18},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble19", (char* const)"(Lcom/uno/UnoObject;I)D", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble19},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat20", (char* const)"(Lcom/uno/UnoObject;I)F", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat20},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt21", (char* const)"(Lcom/uno/UnoObject;I)I", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt21},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong22", (char* const)"(Lcom/uno/UnoObject;I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong22},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject23", (char* const)"(Lcom/uno/UnoObject;I)Lcom/uno/UnoObject;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject23},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort24", (char* const)"(Lcom/uno/UnoObject;I)S", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort24},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString25", (char* const)"(Lcom/uno/UnoObject;I)Ljava/lang/String;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString25},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte26", (char* const)"(Lcom/uno/UnoObject;I)B", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte26},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr27", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr27},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr28", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr28},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr29", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr29},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr30", (char* const)"(IZ)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr30},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr31", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr31},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr32", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr32},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr33", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr33},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr34", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr34},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr35", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr35},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr36", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr36},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr37", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr37},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr38", (char* const)"(I)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr38},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool39", (char* const)"(Lcom/uno/UnoObject;IZ)Z", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool39},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte40", (char* const)"(Lcom/uno/UnoObject;IB)B", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte40},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar41", (char* const)"(Lcom/uno/UnoObject;IC)C", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar41},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble42", (char* const)"(Lcom/uno/UnoObject;ID)D", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble42},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat43", (char* const)"(Lcom/uno/UnoObject;IF)F", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat43},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt44", (char* const)"(Lcom/uno/UnoObject;II)I", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt44},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong45", (char* const)"(Lcom/uno/UnoObject;IJ)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong45},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject46", (char* const)"(Lcom/uno/UnoObject;ILcom/uno/UnoObject;)Lcom/uno/UnoObject;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject46},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort47", (char* const)"(Lcom/uno/UnoObject;IS)S", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort47},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString48", (char* const)"(Lcom/uno/UnoObject;ILjava/lang/String;)Ljava/lang/String;", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString48},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte49", (char* const)"(Lcom/uno/UnoObject;IB)B", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte49},
    {(char* const)"callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr50", (char* const)"(Ljava/lang/Object;J)J", (void *)&callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr50},
    {(char* const)"callUno_Uno_Platform_AndroidDisplay__initializedGet54", (char* const)"()Z", (void *)&callUno_Uno_Platform_AndroidDisplay__initializedGet54},
    {(char* const)"callUno_Uno_Platform_AndroidDisplay__initializedSet54", (char* const)"(Z)V", (void *)&callUno_Uno_Platform_AndroidDisplay__initializedSet54},
    {(char* const)"callUno_Uno_Platform_AndroidDisplay_OnFrameCallback55", (char* const)"(Lcom/uno/UnoObject;DD)V", (void *)&callUno_Uno_Platform_AndroidDisplay_OnFrameCallback55},
    {(char* const)"callUno_Uno_Collections_List_lt_string_gt__Add58", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/String;)V", (void *)&callUno_Uno_Collections_List_lt_string_gt__Add58},
    {(char* const)"callUno_Uno_Guid__ctor60", (char* const)"(Lcom/uno/ByteArray;)Lcom/uno/UnoObject;", (void *)&callUno_Uno_Guid__ctor60},
    {(char* const)"callUno_Fuse_Platform_SystemUI_layoutAttachedToGet65", (char* const)"()Ljava/lang/Object;", (void *)&callUno_Fuse_Platform_SystemUI_layoutAttachedToGet65},
    {(char* const)"callUno_Fuse_Platform_SystemUI_layoutAttachedToSet65", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Platform_SystemUI_layoutAttachedToSet65},
    {(char* const)"callUno_Fuse_Platform_SystemUI__keyboardListenerGet66", (char* const)"()Ljava/lang/Object;", (void *)&callUno_Fuse_Platform_SystemUI__keyboardListenerGet66},
    {(char* const)"callUno_Fuse_Platform_SystemUI_realWidthSet68", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI_realWidthSet68},
    {(char* const)"callUno_Fuse_Platform_SystemUI_realHeightSet69", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI_realHeightSet69},
    {(char* const)"callUno_Fuse_Platform_SystemUI_SuperLayoutGet70", (char* const)"()Ljava/lang/Object;", (void *)&callUno_Fuse_Platform_SystemUI_SuperLayoutGet70},
    {(char* const)"callUno_Fuse_Platform_SystemUI_realHeightGet69", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_realHeightGet69},
    {(char* const)"callUno_Fuse_Platform_SystemUI_realWidthGet68", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_realWidthGet68},
    {(char* const)"callUno_Fuse_Platform_SystemUI_SuperLayoutSet70", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Platform_SystemUI_SuperLayoutSet70},
    {(char* const)"callUno_Fuse_Platform_SystemUI_RootLayoutSet72", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Platform_SystemUI_RootLayoutSet72},
    {(char* const)"callUno_Fuse_Platform_SystemUI_RootLayoutGet72", (char* const)"()Ljava/lang/Object;", (void *)&callUno_Fuse_Platform_SystemUI_RootLayoutGet72},
    {(char* const)"callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight75", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight75},
    {(char* const)"callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI76", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI76},
    {(char* const)"callUno_Fuse_Platform_SystemUI__systemUIStateSet79", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI__systemUIStateSet79},
    {(char* const)"callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged82", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged82},
    {(char* const)"callUno_Fuse_Platform_SystemUI__systemUIStateGet79", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI__systemUIStateGet79},
    {(char* const)"callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet86", (char* const)"()Z", (void *)&callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet86},
    {(char* const)"callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet87", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet87},
    {(char* const)"callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet86", (char* const)"(Z)V", (void *)&callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet86},
    {(char* const)"callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet87", (char* const)"(I)V", (void *)&callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet87},
    {(char* const)"callUno_Fuse_Platform_SystemUI_OnDestroy92", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_OnDestroy92},
    {(char* const)"callUno_Fuse_Platform_SystemUI_OnConfigChanged93", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_OnConfigChanged93},
    {(char* const)"callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth94", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth94},
    {(char* const)"callUno_Fuse_Platform_SystemUI_cppOnConfigChanged95", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_cppOnConfigChanged95},
    {(char* const)"callUno_Fuse_Platform_SystemUI_ResendFrameSizes96", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_ResendFrameSizes96},
    {(char* const)"callUno_Fuse_Platform_SystemUI__keyboardListenerSet66", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Platform_SystemUI__keyboardListenerSet66},
    {(char* const)"callUno_Fuse_Platform_SystemUI_UpdateStatusBar99", (char* const)"()V", (void *)&callUno_Fuse_Platform_SystemUI_UpdateStatusBar99},
    {(char* const)"callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet102", (char* const)"()I", (void *)&callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet102},
    {(char* const)"callUno_Fuse_Platform_SystemUI_firstSizingGet103", (char* const)"()Z", (void *)&callUno_Fuse_Platform_SystemUI_firstSizingGet103},
    {(char* const)"callUno_Fuse_Platform_SystemUI_onHideKeyboard104", (char* const)"(IZ)V", (void *)&callUno_Fuse_Platform_SystemUI_onHideKeyboard104},
    {(char* const)"callUno_Fuse_Platform_SystemUI_onShowKeyboard105", (char* const)"(IZ)V", (void *)&callUno_Fuse_Platform_SystemUI_onShowKeyboard105},
    {(char* const)"callUno_Fuse_Platform_SystemUI_firstSizingSet103", (char* const)"(Z)V", (void *)&callUno_Fuse_Platform_SystemUI_firstSizingSet103},
    {(char* const)"callUno_Fuse_Internal_AndroidSystemFont_AddFamily107", (char* const)"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", (void *)&callUno_Fuse_Internal_AndroidSystemFont_AddFamily107},
    {(char* const)"callUno_Fuse_Internal_AndroidSystemFont_AddFont108", (char* const)"(Ljava/lang/String;IIZ)V", (void *)&callUno_Fuse_Internal_AndroidSystemFont_AddFont108},
    {(char* const)"callUno_Fuse_Internal_AndroidSystemFont_AddAlias109", (char* const)"(Ljava/lang/String;Ljava/lang/String;I)V", (void *)&callUno_Fuse_Internal_AndroidSystemFont_AddAlias109},
    {(char* const)"callUno_Fuse_Internal_AndroidSystemFont_ThrowUno110", (char* const)"(Ljava/lang/String;)V", (void *)&callUno_Fuse_Internal_AndroidSystemFont_ThrowUno110},
    {(char* const)"callUno_Action_Object", (char* const)"(Lcom/foreign/Uno/Action_Object;Ljava/lang/Object;J)V", (void *)&callUno_Action_Object},
    {(char* const)"callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange128", (char* const)"(Lcom/uno/UnoObject;Z)V", (void *)&callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange128},
    {(char* const)"callUno_Action_String", (char* const)"(Lcom/foreign/Uno/Action_String;Ljava/lang/String;)V", (void *)&callUno_Action_String},
    {(char* const)"callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch144", (char* const)"(Ljava/lang/Object;Ljava/lang/Object;JJ)Z", (void *)&callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch144},
    {(char* const)"callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged166", (char* const)"(Lcom/uno/UnoObject;IIII)V", (void *)&callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged166},
    {(char* const)"callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged178", (char* const)"(Lcom/uno/UnoObject;DZ)V", (void *)&callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged178},
    {(char* const)"callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded184", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded184},
    {(char* const)"callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged185", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;IIIJ)V", (void *)&callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged185},
    {(char* const)"callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated186", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated186},
    {(char* const)"callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed187", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed187},
    {(char* const)"callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged191", (char* const)"(Lcom/uno/UnoObject;Z)V", (void *)&callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged191},
    {(char* const)"callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction196", (char* const)"(Lcom/uno/UnoObject;I)Z", (void *)&callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction196},
    {(char* const)"callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged198", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/String;)V", (void *)&callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged198},
    {(char* const)"callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureAvailable212", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureAvailable212},
    {(char* const)"callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureDestroyed213", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureDestroyed213},
    {(char* const)"callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet243", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet243},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared265", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared265},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion266", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion266},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError267", (char* const)"(Lcom/uno/UnoObject;II)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError267},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer268", (char* const)"(Lcom/uno/UnoObject;I)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer268},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable271", (char* const)"(Lcom/uno/UnoObject;)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable271},
    {(char* const)"callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred280", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/String;)V", (void *)&callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred280},
    {(char* const)"callUno_Uno_IO_BundleFile_BundlePathGet323", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/String;", (void *)&callUno_Uno_IO_BundleFile_BundlePathGet323},
    {(char* const)"callUno_Action_int", (char* const)"(Lcom/foreign/Uno/Action_int;I)V", (void *)&callUno_Action_int},
    {(char* const)"callUno_Action", (char* const)"(Lcom/foreign/Uno/Action;)V", (void *)&callUno_Action},
    {(char* const)"callUno_Func", (char* const)"(Lcom/foreign/Uno/Func;)Z", (void *)&callUno_Func},
    {(char* const)"callUno_Fuse_Android_AppRoot_OnTouchEvent__341", (char* const)"(Ljava/lang/Object;J)V", (void *)&callUno_Fuse_Android_AppRoot_OnTouchEvent__341},
    {(char* const)"callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar363", (char* const)"()V", (void *)&callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar363},
    {(char* const)"callUno_Neovisionaries_WebSocketClient__webSocketGet380", (char* const)"(Lcom/uno/UnoObject;)Ljava/lang/Object;", (void *)&callUno_Neovisionaries_WebSocketClient__webSocketGet380},
    {(char* const)"callUno_Action_ByteArray", (char* const)"(Lcom/foreign/Uno/Action_ByteArray;Lcom/uno/ByteArray;)V", (void *)&callUno_Action_ByteArray},
    {(char* const)"callUno_Neovisionaries_WebSocketClient__webSocketSet380", (char* const)"(Lcom/uno/UnoObject;Ljava/lang/Object;J)V", (void *)&callUno_Neovisionaries_WebSocketClient__webSocketSet380},
    };
    int funcCount = 123;
    if ((int)jni->RegisterNatives(JniHelper::GetNativeExternClass(), native_activity_funcs, funcCount)<0) {
    LOGD("COULD NOT REGISTER NATIVE EXTERN FUNCTIONS");
    throw uBase::Exception("COULD NOT REGISTER NATIVE EXTERN FUNCTIONS");
    }
}
// }

// C:\Users\Brian\AppData\Local\Fusetools\Packages\UnoCore\1.6.0\Source\Uno\Compiler\ExportTargetInterop\Foreign\Android\UnoArrayEntrypoints.uno
// ---------------------------------------------------------------------------------------------------------------------------------------------

// public static extern class JavaToUnoArrayEntrypoints :10
// {
static void JavaToUnoArrayEntrypoints_build(uType* type)
{
    ::STRINGS[0] = uString::Const("java/lang/Object");
    ::STRINGS[1] = uString::Const("java/lang/String");
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Uno::Bool_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[4] = ::g::Uno::SByte_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Double_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Long_typeof()->Array();
    ::TYPES[9] = uObject_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Short_typeof()->Array();
    ::TYPES[11] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaToUnoArrayEntrypoints::_stringClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaToUnoArrayEntrypoints::_objectClass_, uFieldFlagsStatic);
}

uClassType* JavaToUnoArrayEntrypoints_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints", options);
    type->fp_build_ = JavaToUnoArrayEntrypoints_build;
    return type;
}

// public static long BoolArrayToUnoArrayPtr(Java.Object jarr) :611
void JavaToUnoArrayEntrypoints__BoolArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::BoolArrayToUnoArrayPtr(jarr);
}

// public static long ByteArrayToUnoArrayPtr(Java.Object jarr) :639
void JavaToUnoArrayEntrypoints__ByteArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::ByteArrayToUnoArrayPtr(jarr);
}

// public static long CharArrayToUnoArrayPtr(Java.Object jarr) :625
void JavaToUnoArrayEntrypoints__CharArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CharArrayToUnoArrayPtr(jarr);
}

// public static Java.Object CopyBoolArray(object array) :103
void JavaToUnoArrayEntrypoints__CopyBoolArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyBoolArray(array);
}

// public static Java.Object CopyByteArray(object array) :112
void JavaToUnoArrayEntrypoints__CopyByteArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyByteArray(array);
}

// public static Java.Object CopyCharArray(object array) :130
void JavaToUnoArrayEntrypoints__CopyCharArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyCharArray(array);
}

// public static Java.Object CopyDoubleArray(object array) :175
void JavaToUnoArrayEntrypoints__CopyDoubleArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyDoubleArray(array);
}

// public static Java.Object CopyFloatArray(object array) :166
void JavaToUnoArrayEntrypoints__CopyFloatArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyFloatArray(array);
}

// public static Java.Object CopyIntArray(object array) :148
void JavaToUnoArrayEntrypoints__CopyIntArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyIntArray(array);
}

// public static Java.Object CopyLongArray(object array) :157
void JavaToUnoArrayEntrypoints__CopyLongArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyLongArray(array);
}

// public static Java.Object CopyObjectArray(object array) :206
void JavaToUnoArrayEntrypoints__CopyObjectArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyObjectArray(array);
}

// public static Java.Object CopyShortArray(object array) :139
void JavaToUnoArrayEntrypoints__CopyShortArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyShortArray(array);
}

// public static Java.Object CopyStringArray(object array) :186
void JavaToUnoArrayEntrypoints__CopyStringArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyStringArray(array);
}

// public static Java.Object CopyUByteArray(object array) :121
void JavaToUnoArrayEntrypoints__CopyUByteArray_fn(uObject* array, ::g::Java::Object** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::CopyUByteArray(array);
}

// public static long DoubleArrayToUnoArrayPtr(Java.Object jarr) :709
void JavaToUnoArrayEntrypoints__DoubleArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::DoubleArrayToUnoArrayPtr(jarr);
}

// public static long FloatArrayToUnoArrayPtr(Java.Object jarr) :695
void JavaToUnoArrayEntrypoints__FloatArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::FloatArrayToUnoArrayPtr(jarr);
}

// public static bool getBool(object array, int index) :225
void JavaToUnoArrayEntrypoints__getBool_fn(uObject* array, int32_t* index, bool* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getBool(array, *index);
}

// public static bool GetBool(object array, int index) :12
void JavaToUnoArrayEntrypoints__GetBool_fn(uObject* array, int32_t* index, bool* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetBool(array, *index);
}

// public static sbyte getByte(object array, int index) :231
void JavaToUnoArrayEntrypoints__getByte_fn(uObject* array, int32_t* index, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getByte(array, *index);
}

// public static sbyte GetByte(object array, int index) :16
void JavaToUnoArrayEntrypoints__GetByte_fn(uObject* array, int32_t* index, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetByte(array, *index);
}

// public static char GetChar(object array, int index) :24
void JavaToUnoArrayEntrypoints__GetChar_fn(uObject* array, int32_t* index, char16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetChar(array, *index);
}

// public static double getDouble(object array, int index) :273
void JavaToUnoArrayEntrypoints__getDouble_fn(uObject* array, int32_t* index, double* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getDouble(array, *index);
}

// public static double GetDouble(object array, int index) :44
void JavaToUnoArrayEntrypoints__GetDouble_fn(uObject* array, int32_t* index, double* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetDouble(array, *index);
}

// public static float getFloat(object array, int index) :267
void JavaToUnoArrayEntrypoints__getFloat_fn(uObject* array, int32_t* index, float* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getFloat(array, *index);
}

// public static float GetFloat(object array, int index) :40
void JavaToUnoArrayEntrypoints__GetFloat_fn(uObject* array, int32_t* index, float* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetFloat(array, *index);
}

// public static int getInt(object array, int index) :255
void JavaToUnoArrayEntrypoints__getInt_fn(uObject* array, int32_t* index, int32_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getInt(array, *index);
}

// public static int GetInt(object array, int index) :32
void JavaToUnoArrayEntrypoints__GetInt_fn(uObject* array, int32_t* index, int32_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetInt(array, *index);
}

// public static long getLong(object array, int index) :261
void JavaToUnoArrayEntrypoints__getLong_fn(uObject* array, int32_t* index, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getLong(array, *index);
}

// public static long GetLong(object array, int index) :36
void JavaToUnoArrayEntrypoints__GetLong_fn(uObject* array, int32_t* index, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetLong(array, *index);
}

// public static object getObject(object array, int index) :285
void JavaToUnoArrayEntrypoints__getObject_fn(uObject* array, int32_t* index, uObject** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getObject(array, *index);
}

// public static object GetObject(object array, int index) :52
void JavaToUnoArrayEntrypoints__GetObject_fn(uObject* array, int32_t* index, uObject** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetObject(array, *index);
}

// public static short getShort(object array, int index) :249
void JavaToUnoArrayEntrypoints__getShort_fn(uObject* array, int32_t* index, int16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getShort(array, *index);
}

// public static short GetShort(object array, int index) :28
void JavaToUnoArrayEntrypoints__GetShort_fn(uObject* array, int32_t* index, int16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetShort(array, *index);
}

// public static string getString(object array, int index) :279
void JavaToUnoArrayEntrypoints__getString_fn(uObject* array, int32_t* index, uString** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::getString(array, *index);
}

// public static string GetString(object array, int index) :48
void JavaToUnoArrayEntrypoints__GetString_fn(uObject* array, int32_t* index, uString** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetString(array, *index);
}

// public static sbyte GetUByte(object array, int index) :20
void JavaToUnoArrayEntrypoints__GetUByte_fn(uObject* array, int32_t* index, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::GetUByte(array, *index);
}

// public static long IntArrayToUnoArrayPtr(Java.Object jarr) :667
void JavaToUnoArrayEntrypoints__IntArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::IntArrayToUnoArrayPtr(jarr);
}

// public static long LongArrayToUnoArrayPtr(Java.Object jarr) :681
void JavaToUnoArrayEntrypoints__LongArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::LongArrayToUnoArrayPtr(jarr);
}

// public static long NewBoolArrayPtr(int length) :487
void JavaToUnoArrayEntrypoints__NewBoolArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewBoolArrayPtr(*length);
}

// public static long NewByteArrayPtr(int length, bool unoIsUnsigned) :494
void JavaToUnoArrayEntrypoints__NewByteArrayPtr_fn(int32_t* length, bool* unoIsUnsigned, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewByteArrayPtr(*length, *unoIsUnsigned);
}

// public static long NewCharArrayPtr(int length) :505
void JavaToUnoArrayEntrypoints__NewCharArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewCharArrayPtr(*length);
}

// public static long NewDoubleArrayPtr(int length) :540
void JavaToUnoArrayEntrypoints__NewDoubleArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewDoubleArrayPtr(*length);
}

// public static long NewFloatArrayPtr(int length) :533
void JavaToUnoArrayEntrypoints__NewFloatArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewFloatArrayPtr(*length);
}

// public static long NewIntArrayPtr(int length) :519
void JavaToUnoArrayEntrypoints__NewIntArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewIntArrayPtr(*length);
}

// public static long NewLongArrayPtr(int length) :526
void JavaToUnoArrayEntrypoints__NewLongArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewLongArrayPtr(*length);
}

// public static long NewObjectArrayPtr(int length) :554
void JavaToUnoArrayEntrypoints__NewObjectArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewObjectArrayPtr(*length);
}

// public static long NewShortArrayPtr(int length) :512
void JavaToUnoArrayEntrypoints__NewShortArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewShortArrayPtr(*length);
}

// public static long NewStringArrayPtr(int length) :547
void JavaToUnoArrayEntrypoints__NewStringArrayPtr_fn(int32_t* length, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::NewStringArrayPtr(*length);
}

// public static bool setBool(object array, int index, bool val) :293
void JavaToUnoArrayEntrypoints__setBool_fn(uObject* array, int32_t* index, bool* val, bool* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setBool(array, *index, *val);
}

// public static bool SetBool(object array, int index, bool val) :57
void JavaToUnoArrayEntrypoints__SetBool_fn(uObject* array, int32_t* index, bool* val, bool* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetBool(array, *index, *val);
}

// public static sbyte setByte(object array, int index, sbyte val) :299
void JavaToUnoArrayEntrypoints__setByte_fn(uObject* array, int32_t* index, int8_t* val, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setByte(array, *index, *val);
}

// public static sbyte SetByte(object array, int index, sbyte val) :61
void JavaToUnoArrayEntrypoints__SetByte_fn(uObject* array, int32_t* index, int8_t* val, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetByte(array, *index, *val);
}

// public static char SetChar(object array, int index, char val) :70
void JavaToUnoArrayEntrypoints__SetChar_fn(uObject* array, int32_t* index, char16_t* val, char16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetChar(array, *index, *val);
}

// public static double setDouble(object array, int index, double val) :341
void JavaToUnoArrayEntrypoints__setDouble_fn(uObject* array, int32_t* index, double* val, double* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setDouble(array, *index, *val);
}

// public static double SetDouble(object array, int index, double val) :90
void JavaToUnoArrayEntrypoints__SetDouble_fn(uObject* array, int32_t* index, double* val, double* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetDouble(array, *index, *val);
}

// public static float setFloat(object array, int index, float val) :335
void JavaToUnoArrayEntrypoints__setFloat_fn(uObject* array, int32_t* index, float* val, float* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setFloat(array, *index, *val);
}

// public static float SetFloat(object array, int index, float val) :86
void JavaToUnoArrayEntrypoints__SetFloat_fn(uObject* array, int32_t* index, float* val, float* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetFloat(array, *index, *val);
}

// public static int setInt(object array, int index, int val) :323
void JavaToUnoArrayEntrypoints__setInt_fn(uObject* array, int32_t* index, int32_t* val, int32_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setInt(array, *index, *val);
}

// public static int SetInt(object array, int index, int val) :78
void JavaToUnoArrayEntrypoints__SetInt_fn(uObject* array, int32_t* index, int32_t* val, int32_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetInt(array, *index, *val);
}

// public static long setLong(object array, int index, long val) :329
void JavaToUnoArrayEntrypoints__setLong_fn(uObject* array, int32_t* index, int64_t* val, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setLong(array, *index, *val);
}

// public static long SetLong(object array, int index, long val) :82
void JavaToUnoArrayEntrypoints__SetLong_fn(uObject* array, int32_t* index, int64_t* val, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetLong(array, *index, *val);
}

// public static object setObject(object array, int index, object val) :353
void JavaToUnoArrayEntrypoints__setObject_fn(uObject* array, int32_t* index, uObject* val, uObject** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setObject(array, *index, val);
}

// public static object SetObject(object array, int index, object val) :98
void JavaToUnoArrayEntrypoints__SetObject_fn(uObject* array, int32_t* index, uObject* val, uObject** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetObject(array, *index, val);
}

// public static short setShort(object array, int index, short val) :317
void JavaToUnoArrayEntrypoints__setShort_fn(uObject* array, int32_t* index, int16_t* val, int16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setShort(array, *index, *val);
}

// public static short SetShort(object array, int index, short val) :74
void JavaToUnoArrayEntrypoints__SetShort_fn(uObject* array, int32_t* index, int16_t* val, int16_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetShort(array, *index, *val);
}

// public static string setString(object array, int index, string val) :347
void JavaToUnoArrayEntrypoints__setString_fn(uObject* array, int32_t* index, uString* val, uString** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::setString(array, *index, val);
}

// public static string SetString(object array, int index, string val) :94
void JavaToUnoArrayEntrypoints__SetString_fn(uObject* array, int32_t* index, uString* val, uString** __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetString(array, *index, val);
}

// public static sbyte SetUByte(object array, int index, sbyte val) :65
void JavaToUnoArrayEntrypoints__SetUByte_fn(uObject* array, int32_t* index, int8_t* val, int8_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::SetUByte(array, *index, *val);
}

// public static long ShortArrayToUnoArrayPtr(Java.Object jarr) :653
void JavaToUnoArrayEntrypoints__ShortArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval)
{
    *__retval = JavaToUnoArrayEntrypoints::ShortArrayToUnoArrayPtr(jarr);
}

jclass JavaToUnoArrayEntrypoints::_stringClass_;
jclass JavaToUnoArrayEntrypoints::_objectClass_;

// public static long BoolArrayToUnoArrayPtr(Java.Object jarr) [static] :611
int64_t JavaToUnoArrayEntrypoints::BoolArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    jbooleanArray obj = static_cast<jbooleanArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int32_t len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[1/*bool[]*/], len);
    env->GetBooleanArrayRegion(obj, (jsize)0, (jsize)len, (jboolean*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long ByteArrayToUnoArrayPtr(Java.Object jarr) [static] :639
int64_t JavaToUnoArrayEntrypoints::ByteArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    jbyteArray obj = static_cast<jbyteArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int32_t len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[2/*byte[]*/], len);
    env->GetByteArrayRegion(obj, (jsize)0, (jsize)len, (jbyte*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long CharArrayToUnoArrayPtr(Java.Object jarr) [static] :625
int64_t JavaToUnoArrayEntrypoints::CharArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    jcharArray obj = static_cast<jcharArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int32_t len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[3/*char[]*/], len);
    env->GetCharArrayRegion(obj, (jsize)0, (jsize)len, (jchar*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static Java.Object CopyBoolArray(object array) [static] :103
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyBoolArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[1/*bool[]*/]);
    jobject jarr = env->NewBooleanArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetBooleanArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyByteArray(object array) [static] :112
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyByteArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[4/*sbyte[]*/]);
    jobject jarr = env->NewByteArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetByteArrayRegion1(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyCharArray(object array) [static] :130
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyCharArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[3/*char[]*/]);
    jobject jarr = env->NewCharArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetCharArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyDoubleArray(object array) [static] :175
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyDoubleArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[5/*double[]*/]);
    jobject jarr = env->NewDoubleArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetDoubleArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyFloatArray(object array) [static] :166
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyFloatArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[6/*float[]*/]);
    jobject jarr = env->NewFloatArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetFloatArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyIntArray(object array) [static] :148
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyIntArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[7/*int[]*/]);
    jobject jarr = env->NewIntArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetIntArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyLongArray(object array) [static] :157
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyLongArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[8/*long[]*/]);
    jobject jarr = env->NewLongArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetLongArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyObjectArray(object array) [static] :206
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyObjectArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();

    if (::g::Android::Base::Primitives::ujclass::op_Equality(JavaToUnoArrayEntrypoints::_objectClass_, ::g::Android::Base::Primitives::ujclass::Null()))
        JavaToUnoArrayEntrypoints::_objectClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"java/lang/O...*/], true));

    uArray* arr = uCast<uArray*>(array, ::TYPES[9/*object[]*/]);
    jobject jarr = env->NewObjectArray((jsize)uPtr(arr)->Length(), JavaToUnoArrayEntrypoints::_stringClass_, NULL);

    for (int32_t i = 0; i < arr->Length(); i++)
    {
        jobject o = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(uPtr(arr)->Strong<uObject*>(i));
        env->SetObjectArrayElement((jobjectArray)jarr, i, o);
        ::g::Android::Base::JNI::DeleteLocalRef1(o);
    }

    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyShortArray(object array) [static] :139
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyShortArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[10/*short[]*/]);
    jobject jarr = env->NewShortArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetShortArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyStringArray(object array) [static] :186
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyStringArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();

    if (::g::Android::Base::Primitives::ujclass::op_Equality(JavaToUnoArrayEntrypoints::_stringClass_, ::g::Android::Base::Primitives::ujclass::Null()))
        JavaToUnoArrayEntrypoints::_stringClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[1/*"java/lang/S...*/], true));

    uArray* arr = uCast<uArray*>(array, ::TYPES[11/*string[]*/]);
    jobject jarr = env->NewObjectArray((jsize)uPtr(arr)->Length(), JavaToUnoArrayEntrypoints::_stringClass_, NULL);

    for (int32_t i = 0; i < arr->Length(); i++)
    {
        jobject s = ::g::Android::Base::Types::String::UnoToJava1(uPtr(arr)->Strong<uString*>(i));
        env->SetObjectArrayElement((jobjectArray)jarr, i, (jobject)s);
        ::g::Android::Base::JNI::DeleteLocalRef1(s);
    }

    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static Java.Object CopyUByteArray(object array) [static] :121
::g::Java::Object* JavaToUnoArrayEntrypoints::CopyUByteArray(uObject* array)
{
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    uArray* arr = uCast<uArray*>(array, ::TYPES[2/*byte[]*/]);
    jobject jarr = env->NewByteArray((jsize)uPtr(arr)->Length());
    ::g::Android::Base::JNI::SetByteArrayRegion(jarr, arr, 0, -1);
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(jarr, false, false);
}

// public static long DoubleArrayToUnoArrayPtr(Java.Object jarr) [static] :709
int64_t JavaToUnoArrayEntrypoints::DoubleArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    jdoubleArray obj = static_cast<jdoubleArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int32_t len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[5/*double[]*/], len);
    env->GetDoubleArrayRegion(obj, (jsize)0, (jsize)len, (jdouble*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long FloatArrayToUnoArrayPtr(Java.Object jarr) [static] :695
int64_t JavaToUnoArrayEntrypoints::FloatArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    jfloatArray obj = static_cast<jfloatArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int32_t len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[6/*float[]*/], len);
    env->GetFloatArrayRegion(obj, (jsize)0, (jsize)len, (jfloat*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static bool getBool(object array, int index) [static] :225
bool JavaToUnoArrayEntrypoints::getBool(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getBool", "(Lcom/uno/UnoObject;I)Z");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_array,_index);
        bool __result = (bool)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static bool GetBool(object array, int index) [static] :12
bool JavaToUnoArrayEntrypoints::GetBool(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[1/*bool[]*/]))->Item<bool>(index);
}

// public static sbyte getByte(object array, int index) [static] :231
int8_t JavaToUnoArrayEntrypoints::getByte(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getByte", "(Lcom/uno/UnoObject;I)B");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jbyte __jresult = U_JNIVAR->CallStaticByteMethod(__cls,__mtd,_array,_index);
        int8_t __result = (int8_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static sbyte GetByte(object array, int index) [static] :16
int8_t JavaToUnoArrayEntrypoints::GetByte(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[4/*sbyte[]*/]))->Item<int8_t>(index);
}

// public static char GetChar(object array, int index) [static] :24
char16_t JavaToUnoArrayEntrypoints::GetChar(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[3/*char[]*/]))->Item<char16_t>(index);
}

// public static double getDouble(object array, int index) [static] :273
double JavaToUnoArrayEntrypoints::getDouble(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getDouble", "(Lcom/uno/UnoObject;I)D");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_array,_index);
        double __result = (double)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double GetDouble(object array, int index) [static] :44
double JavaToUnoArrayEntrypoints::GetDouble(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[5/*double[]*/]))->Item<double>(index);
}

// public static float getFloat(object array, int index) [static] :267
float JavaToUnoArrayEntrypoints::getFloat(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getFloat", "(Lcom/uno/UnoObject;I)F");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_array,_index);
        float __result = (float)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static float GetFloat(object array, int index) [static] :40
float JavaToUnoArrayEntrypoints::GetFloat(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[6/*float[]*/]))->Item<float>(index);
}

// public static int getInt(object array, int index) [static] :255
int32_t JavaToUnoArrayEntrypoints::getInt(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getInt", "(Lcom/uno/UnoObject;I)I");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_array,_index);
        int32_t __result = (int32_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int GetInt(object array, int index) [static] :32
int32_t JavaToUnoArrayEntrypoints::GetInt(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[7/*int[]*/]))->Item<int32_t>(index);
}

// public static long getLong(object array, int index) [static] :261
int64_t JavaToUnoArrayEntrypoints::getLong(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getLong", "(Lcom/uno/UnoObject;I)J");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_array,_index);
        int64_t __result = (int64_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static long GetLong(object array, int index) [static] :36
int64_t JavaToUnoArrayEntrypoints::GetLong(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[8/*long[]*/]))->Item<int64_t>(index);
}

// public static object getObject(object array, int index) [static] :285
uObject* JavaToUnoArrayEntrypoints::getObject(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getObject", "(Lcom/uno/UnoObject;I)Lcom/uno/UnoObject;");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_array,_index);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBoxFreeingLocalRef(__jresult);
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static object GetObject(object array, int index) [static] :52
uObject* JavaToUnoArrayEntrypoints::GetObject(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[9/*object[]*/]))->Strong<uObject*>(index);
}

// public static short getShort(object array, int index) [static] :249
int16_t JavaToUnoArrayEntrypoints::getShort(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getShort", "(Lcom/uno/UnoObject;I)S");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jshort __jresult = U_JNIVAR->CallStaticShortMethod(__cls,__mtd,_array,_index);
        int16_t __result = (int16_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static short GetShort(object array, int index) [static] :28
int16_t JavaToUnoArrayEntrypoints::GetShort(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[10/*short[]*/]))->Item<int16_t>(index);
}

// public static string getString(object array, int index) [static] :279
uString* JavaToUnoArrayEntrypoints::getString(uObject* array, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "getString", "(Lcom/uno/UnoObject;I)Ljava/lang/String;");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_array,_index);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string GetString(object array, int index) [static] :48
uString* JavaToUnoArrayEntrypoints::GetString(uObject* array, int32_t index)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[11/*string[]*/]))->Strong<uString*>(index);
}

// public static sbyte GetUByte(object array, int index) [static] :20
int8_t JavaToUnoArrayEntrypoints::GetUByte(uObject* array, int32_t index)
{
    return (int8_t)uPtr(uCast<uArray*>(array, ::TYPES[2/*byte[]*/]))->Item<uint8_t>(index);
}

// public static long IntArrayToUnoArrayPtr(Java.Object jarr) [static] :667
int64_t JavaToUnoArrayEntrypoints::IntArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    jintArray obj = static_cast<jintArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int32_t len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[7/*int[]*/], len);
    env->GetIntArrayRegion(obj, (jsize)0, (jsize)len, (jint*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long LongArrayToUnoArrayPtr(Java.Object jarr) [static] :681
int64_t JavaToUnoArrayEntrypoints::LongArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    jlongArray obj = static_cast<jlongArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int32_t len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[8/*long[]*/], len);
    env->GetLongArrayRegion(obj, (jsize)0, (jsize)len, (jlong*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewBoolArrayPtr(int length) [static] :487
int64_t JavaToUnoArrayEntrypoints::NewBoolArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[1/*bool[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewByteArrayPtr(int length, bool unoIsUnsigned) [static] :494
int64_t JavaToUnoArrayEntrypoints::NewByteArrayPtr(int32_t length, bool unoIsUnsigned)
{
    uObject* arr;

    if (unoIsUnsigned)
        arr = uArray::New(::TYPES[2/*byte[]*/], length);
    else
        arr = uArray::New(::TYPES[4/*sbyte[]*/], length);

    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewCharArrayPtr(int length) [static] :505
int64_t JavaToUnoArrayEntrypoints::NewCharArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[3/*char[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewDoubleArrayPtr(int length) [static] :540
int64_t JavaToUnoArrayEntrypoints::NewDoubleArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[5/*double[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewFloatArrayPtr(int length) [static] :533
int64_t JavaToUnoArrayEntrypoints::NewFloatArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[6/*float[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewIntArrayPtr(int length) [static] :519
int64_t JavaToUnoArrayEntrypoints::NewIntArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[7/*int[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewLongArrayPtr(int length) [static] :526
int64_t JavaToUnoArrayEntrypoints::NewLongArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[8/*long[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewObjectArrayPtr(int length) [static] :554
int64_t JavaToUnoArrayEntrypoints::NewObjectArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[9/*object[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewShortArrayPtr(int length) [static] :512
int64_t JavaToUnoArrayEntrypoints::NewShortArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[10/*short[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static long NewStringArrayPtr(int length) [static] :547
int64_t JavaToUnoArrayEntrypoints::NewStringArrayPtr(int32_t length)
{
    uArray* arr = uArray::New(::TYPES[11/*string[]*/], length);
    uRetain(arr);
    return (int64_t)arr;
}

// public static bool setBool(object array, int index, bool val) [static] :293
bool JavaToUnoArrayEntrypoints::setBool(uObject* array, int32_t index, bool val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setBool", "(Lcom/uno/UnoObject;IZ)Z");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        bool _uval=val;
        jboolean _val = (jboolean)_uval;
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_array,_index,_val);
        bool __result = (bool)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static bool SetBool(object array, int index, bool val) [static] :57
bool JavaToUnoArrayEntrypoints::SetBool(uObject* array, int32_t index, bool val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[1/*bool[]*/]))->Item<bool>(index) = val;
}

// public static sbyte setByte(object array, int index, sbyte val) [static] :299
int8_t JavaToUnoArrayEntrypoints::setByte(uObject* array, int32_t index, int8_t val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setByte", "(Lcom/uno/UnoObject;IB)B");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        int8_t _uval=val;
        jbyte _val = (jbyte)_uval;
        jbyte __jresult = U_JNIVAR->CallStaticByteMethod(__cls,__mtd,_array,_index,_val);
        int8_t __result = (int8_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static sbyte SetByte(object array, int index, sbyte val) [static] :61
int8_t JavaToUnoArrayEntrypoints::SetByte(uObject* array, int32_t index, int8_t val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[4/*sbyte[]*/]))->Item<int8_t>(index) = val;
}

// public static char SetChar(object array, int index, char val) [static] :70
char16_t JavaToUnoArrayEntrypoints::SetChar(uObject* array, int32_t index, char16_t val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[3/*char[]*/]))->Item<char16_t>(index) = val;
}

// public static double setDouble(object array, int index, double val) [static] :341
double JavaToUnoArrayEntrypoints::setDouble(uObject* array, int32_t index, double val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setDouble", "(Lcom/uno/UnoObject;ID)D");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        double _uval=val;
        jdouble _val = (jdouble)_uval;
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_array,_index,_val);
        double __result = (double)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double SetDouble(object array, int index, double val) [static] :90
double JavaToUnoArrayEntrypoints::SetDouble(uObject* array, int32_t index, double val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[5/*double[]*/]))->Item<double>(index) = val;
}

// public static float setFloat(object array, int index, float val) [static] :335
float JavaToUnoArrayEntrypoints::setFloat(uObject* array, int32_t index, float val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setFloat", "(Lcom/uno/UnoObject;IF)F");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        float _uval=val;
        jfloat _val = (jfloat)_uval;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_array,_index,_val);
        float __result = (float)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static float SetFloat(object array, int index, float val) [static] :86
float JavaToUnoArrayEntrypoints::SetFloat(uObject* array, int32_t index, float val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[6/*float[]*/]))->Item<float>(index) = val;
}

// public static int setInt(object array, int index, int val) [static] :323
int32_t JavaToUnoArrayEntrypoints::setInt(uObject* array, int32_t index, int32_t val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setInt", "(Lcom/uno/UnoObject;II)I");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        int32_t _uval=val;
        jint _val = (jint)_uval;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_array,_index,_val);
        int32_t __result = (int32_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int SetInt(object array, int index, int val) [static] :78
int32_t JavaToUnoArrayEntrypoints::SetInt(uObject* array, int32_t index, int32_t val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[7/*int[]*/]))->Item<int32_t>(index) = val;
}

// public static long setLong(object array, int index, long val) [static] :329
int64_t JavaToUnoArrayEntrypoints::setLong(uObject* array, int32_t index, int64_t val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setLong", "(Lcom/uno/UnoObject;IJ)J");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        int64_t _uval=val;
        jlong _val = (jlong)_uval;
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_array,_index,_val);
        int64_t __result = (int64_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static long SetLong(object array, int index, long val) [static] :82
int64_t JavaToUnoArrayEntrypoints::SetLong(uObject* array, int32_t index, int64_t val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[8/*long[]*/]))->Item<int64_t>(index) = val;
}

// public static object setObject(object array, int index, object val) [static] :353
uObject* JavaToUnoArrayEntrypoints::setObject(uObject* array, int32_t index, uObject* val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setObject", "(Lcom/uno/UnoObject;ILcom/uno/UnoObject;)Lcom/uno/UnoObject;");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        uObject* _uval=val;
        jobject _val = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uval);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_array,_index,_val);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBoxFreeingLocalRef(__jresult);
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        if (_val!=NULL) { U_JNIVAR->DeleteLocalRef(_val); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static object SetObject(object array, int index, object val) [static] :98
uObject* JavaToUnoArrayEntrypoints::SetObject(uObject* array, int32_t index, uObject* val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[9/*object[]*/]))->Strong<uObject*>(index) = val;
}

// public static short setShort(object array, int index, short val) [static] :317
int16_t JavaToUnoArrayEntrypoints::setShort(uObject* array, int32_t index, int16_t val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setShort", "(Lcom/uno/UnoObject;IS)S");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        int16_t _uval=val;
        jshort _val = (jshort)_uval;
        jshort __jresult = U_JNIVAR->CallStaticShortMethod(__cls,__mtd,_array,_index,_val);
        int16_t __result = (int16_t)__jresult;
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static short SetShort(object array, int index, short val) [static] :74
int16_t JavaToUnoArrayEntrypoints::SetShort(uObject* array, int32_t index, int16_t val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[10/*short[]*/]))->Item<int16_t>(index) = val;
}

// public static string setString(object array, int index, string val) [static] :347
uString* JavaToUnoArrayEntrypoints::setString(uObject* array, int32_t index, uString* val)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "setString", "(Lcom/uno/UnoObject;ILjava/lang/String;)Ljava/lang/String;");
        uObject* _uarray=array;
        jobject _array = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uarray);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        uString* _uval=val;
        jstring _val = JniHelper::UnoToJavaString(_uval);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_array,_index,_val);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_array!=NULL) { U_JNIVAR->DeleteLocalRef(_array); }
        
        if (_val!=NULL) { U_JNIVAR->DeleteLocalRef(_val); }
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string SetString(object array, int index, string val) [static] :94
uString* JavaToUnoArrayEntrypoints::SetString(uObject* array, int32_t index, uString* val)
{
    return uPtr(uCast<uArray*>(array, ::TYPES[11/*string[]*/]))->Strong<uString*>(index) = val;
}

// public static sbyte SetUByte(object array, int index, sbyte val) [static] :65
int8_t JavaToUnoArrayEntrypoints::SetUByte(uObject* array, int32_t index, int8_t val)
{
    uPtr(uCast<uArray*>(array, ::TYPES[2/*byte[]*/]))->Item<uint8_t>(index) = (uint8_t)val;
    return val;
}

// public static long ShortArrayToUnoArrayPtr(Java.Object jarr) [static] :653
int64_t JavaToUnoArrayEntrypoints::ShortArrayToUnoArrayPtr(::g::Java::Object* jarr)
{
    jshortArray obj = static_cast<jshortArray>(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(jarr, ::TYPES[0/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    int32_t len = (int)env->GetArrayLength(obj);
    uArray* arr = uArray::New(::TYPES[10/*short[]*/], len);
    env->GetShortArrayRegion(obj, (jsize)0, (jsize)len, (jshort*)arr->_ptr);
    uRetain(arr);
    return (int64_t)arr;
}
// }

// C:\Users\Brian\AppData\Local\Fusetools\Packages\UnoCore\1.6.0\Source\Uno\Compiler\ExportTargetInterop\Foreign\Android\JavaUnoObject.uno
// ---------------------------------------------------------------------------------------------------------------------------------------

// public static extern class JavaUnoObject :12
// {
static void JavaUnoObject_build(uType* type)
{
    ::STRINGS[2] = uString::Const("<init>");
    ::STRINGS[3] = uString::Const("(J)V");
    ::STRINGS[4] = uString::Const("com/uno/UnoObject");
    ::STRINGS[5] = uString::Const("_GetRetainedUnoPtr");
    ::STRINGS[6] = uString::Const("()J");
    ::STRINGS[7] = uString::Const("com/uno/BoolArray");
    ::STRINGS[8] = uString::Const("InitFromUnoPtr");
    ::STRINGS[9] = uString::Const("(J)Lcom/uno/BoolArray;");
    ::STRINGS[10] = uString::Const("com/uno/ByteArray");
    ::STRINGS[11] = uString::Const("(JZ)Lcom/uno/ByteArray;");
    ::STRINGS[12] = uString::Const("com/uno/ShortArray");
    ::STRINGS[13] = uString::Const("(J)Lcom/uno/ShortArray;");
    ::STRINGS[14] = uString::Const("com/uno/IntArray");
    ::STRINGS[15] = uString::Const("(J)Lcom/uno/IntArray;");
    ::STRINGS[16] = uString::Const("com/uno/LongArray");
    ::STRINGS[17] = uString::Const("(J)Lcom/uno/LongArray;");
    ::STRINGS[18] = uString::Const("com/uno/FloatArray");
    ::STRINGS[19] = uString::Const("(J)Lcom/uno/FloatArray;");
    ::STRINGS[20] = uString::Const("com/uno/DoubleArray");
    ::STRINGS[21] = uString::Const("(J)Lcom/uno/DoubleArray;");
    ::STRINGS[22] = uString::Const("com/uno/StringArray");
    ::STRINGS[23] = uString::Const("(J)Lcom/uno/StringArray;");
    ::STRINGS[24] = uString::Const("com/uno/ObjectArray");
    ::STRINGS[25] = uString::Const("(J)Lcom/uno/ObjectArray;");
    ::STRINGS[26] = uString::Const("Could not register the finalizer callback for JavaUnoObject");
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoObjectClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoObjectConstructor_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoObjectGetRetainedUnoPtr_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoBoolArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoBoolArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoByteArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoByteArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoShortArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoShortArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoIntArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoIntArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoLongArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoLongArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoFloatArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoFloatArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoDoubleArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoDoubleArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoStringArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoStringArrayFactoryMethod_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JavaUnoObject::_unoObjectArrayClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JavaUnoObject::_unoObjectArrayFactoryMethod_, uFieldFlagsStatic);
}

uClassType* JavaUnoObject_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", options);
    type->fp_build_ = JavaUnoObject_build;
    return type;
}

// public static Android.Base.Primitives.ujobject Box(bool[] unoArray) :123
void JavaUnoObject__Box_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(byte[] unoArray) :112
void JavaUnoObject__Box1_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box1(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(double[] unoArray) :178
void JavaUnoObject__Box2_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box2(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(float[] unoArray) :167
void JavaUnoObject__Box3_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box3(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(int[] unoArray) :145
void JavaUnoObject__Box4_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box4(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(long[] unoArray) :156
void JavaUnoObject__Box5_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box5(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(object unoObject) :90
void JavaUnoObject__Box6_fn(uObject* unoObject, jobject* __retval)
{
    *__retval = JavaUnoObject::Box6(unoObject);
}

// public static Android.Base.Primitives.ujobject Box(object[] unoArray) :200
void JavaUnoObject__Box7_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box7(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(sbyte[] unoArray) :101
void JavaUnoObject__Box8_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box8(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(short[] unoArray) :134
void JavaUnoObject__Box9_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box9(unoArray);
}

// public static Android.Base.Primitives.ujobject Box(string[] unoArray) :189
void JavaUnoObject__Box10_fn(uArray* unoArray, jobject* __retval)
{
    *__retval = JavaUnoObject::Box10(unoArray);
}

// public static Android.Base.Primitives.ujobject BoxDelegate(object delegateObj, Android.Base.Primitives.ConstCharPtr javaClassName) :211
void JavaUnoObject__BoxDelegate_fn(uObject* delegateObj, const char** javaClassName, jobject* __retval)
{
    *__retval = JavaUnoObject::BoxDelegate(delegateObj, *javaClassName);
}

// private static void EnsureInitialized() :45
void JavaUnoObject__EnsureInitialized_fn()
{
    JavaUnoObject::EnsureInitialized();
}

// public static object UnBox(Android.Base.Primitives.ujobject javaObject) :228
void JavaUnoObject__UnBox_fn(jobject* javaObject, uObject** __retval)
{
    *__retval = JavaUnoObject::UnBox(*javaObject);
}

// public static object UnBoxFreeingLocalRef(Android.Base.Primitives.ujobject javaObject) :236
void JavaUnoObject__UnBoxFreeingLocalRef_fn(jobject* javaObject, uObject** __retval)
{
    *__retval = JavaUnoObject::UnBoxFreeingLocalRef(*javaObject);
}

jclass JavaUnoObject::_unoObjectClass_;
jmethodID JavaUnoObject::_unoObjectConstructor_;
jmethodID JavaUnoObject::_unoObjectGetRetainedUnoPtr_;
jclass JavaUnoObject::_unoBoolArrayClass_;
jmethodID JavaUnoObject::_unoBoolArrayFactoryMethod_;
jclass JavaUnoObject::_unoByteArrayClass_;
jmethodID JavaUnoObject::_unoByteArrayFactoryMethod_;
jclass JavaUnoObject::_unoShortArrayClass_;
jmethodID JavaUnoObject::_unoShortArrayFactoryMethod_;
jclass JavaUnoObject::_unoIntArrayClass_;
jmethodID JavaUnoObject::_unoIntArrayFactoryMethod_;
jclass JavaUnoObject::_unoLongArrayClass_;
jmethodID JavaUnoObject::_unoLongArrayFactoryMethod_;
jclass JavaUnoObject::_unoFloatArrayClass_;
jmethodID JavaUnoObject::_unoFloatArrayFactoryMethod_;
jclass JavaUnoObject::_unoDoubleArrayClass_;
jmethodID JavaUnoObject::_unoDoubleArrayFactoryMethod_;
jclass JavaUnoObject::_unoStringArrayClass_;
jmethodID JavaUnoObject::_unoStringArrayFactoryMethod_;
jclass JavaUnoObject::_unoObjectArrayClass_;
jmethodID JavaUnoObject::_unoObjectArrayFactoryMethod_;

// public static Android.Base.Primitives.ujobject Box(bool[] unoArray) [static] :123
jobject JavaUnoObject::Box(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoBoolArrayClass_,JavaUnoObject::_unoBoolArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(byte[] unoArray) [static] :112
jobject JavaUnoObject::Box1(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoByteArrayClass_,JavaUnoObject::_unoByteArrayFactoryMethod_,longPtr,true);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(double[] unoArray) [static] :178
jobject JavaUnoObject::Box2(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoDoubleArrayClass_,JavaUnoObject::_unoDoubleArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(float[] unoArray) [static] :167
jobject JavaUnoObject::Box3(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoFloatArrayClass_,JavaUnoObject::_unoFloatArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(int[] unoArray) [static] :145
jobject JavaUnoObject::Box4(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoIntArrayClass_,JavaUnoObject::_unoIntArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(long[] unoArray) [static] :156
jobject JavaUnoObject::Box5(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoLongArrayClass_,JavaUnoObject::_unoLongArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(object unoObject) [static] :90
jobject JavaUnoObject::Box6(uObject* unoObject)
{
    if (unoObject == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoObject);
    int64_t longPtr = (int64_t)unoObject;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->NewObject(JavaUnoObject::_unoObjectClass_,JavaUnoObject::_unoObjectConstructor_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(object[] unoArray) [static] :200
jobject JavaUnoObject::Box7(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoObjectArrayClass_,JavaUnoObject::_unoObjectArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(sbyte[] unoArray) [static] :101
jobject JavaUnoObject::Box8(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoByteArrayClass_,JavaUnoObject::_unoByteArrayFactoryMethod_,longPtr,false);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(short[] unoArray) [static] :134
jobject JavaUnoObject::Box9(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoShortArrayClass_,JavaUnoObject::_unoShortArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject Box(string[] unoArray) [static] :189
jobject JavaUnoObject::Box10(uArray* unoArray)
{
    if (unoArray == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    uRetain(unoArray);
    int64_t longPtr = (int64_t)unoArray;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->CallStaticObjectMethod(JavaUnoObject::_unoStringArrayClass_,JavaUnoObject::_unoStringArrayFactoryMethod_,longPtr);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// public static Android.Base.Primitives.ujobject BoxDelegate(object delegateObj, Android.Base.Primitives.ConstCharPtr javaClassName) [static] :211
jobject JavaUnoObject::BoxDelegate(uObject* delegateObj, const char* javaClassName)
{
    if (delegateObj == NULL)
        return ::g::Android::Base::Primitives::ujobject::Null();

    JavaUnoObject::EnsureInitialized();
    jclass delegateJavaClass = ::g::Android::Base::JNI::LoadClass(::g::Android::Base::JNI::GetEnvPtr(), javaClassName);
    jmethodID constructor = ::g::Android::Base::JNI::GetMethodID(JavaUnoObject::_unoObjectArrayClass_, ::STRINGS[2/*"<init>"*/], ::STRINGS[3/*"(J)V"*/]);
    uRetain(delegateObj);
    int64_t longPtr = (int64_t)delegateObj;
    jobject boxed = ::g::Android::Base::JNI::GetEnvPtr()->NewObject(delegateJavaClass,constructor,longPtr);
    ::g::Android::Base::JNI::DeleteLocalRef(delegateJavaClass);
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// private static void EnsureInitialized() [static] :45
void JavaUnoObject::EnsureInitialized()
{
    if (uEnterCriticalIfNull(&JavaUnoObject::_unoObjectClass_))
    {
        JavaUnoObject::_unoObjectClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[4/*"com/uno/Uno...*/], false));
        JavaUnoObject::_unoObjectConstructor_ = ::g::Android::Base::JNI::GetMethodID(JavaUnoObject::_unoObjectClass_, ::STRINGS[2/*"<init>"*/], ::STRINGS[3/*"(J)V"*/]);
        JavaUnoObject::_unoObjectGetRetainedUnoPtr_ = ::g::Android::Base::JNI::GetMethodID(JavaUnoObject::_unoObjectClass_, ::STRINGS[5/*"_GetRetaine...*/], ::STRINGS[6/*"()J"*/]);
        JavaUnoObject::_unoBoolArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[7/*"com/uno/Boo...*/], false));
        JavaUnoObject::_unoBoolArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoBoolArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[9/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoByteArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[10/*"com/uno/Byt...*/], false));
        JavaUnoObject::_unoByteArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoByteArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[11/*"(JZ)Lcom/un...*/]);
        JavaUnoObject::_unoShortArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[12/*"com/uno/Sho...*/], false));
        JavaUnoObject::_unoShortArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoShortArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[13/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoIntArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[14/*"com/uno/Int...*/], false));
        JavaUnoObject::_unoIntArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoIntArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[15/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoLongArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[16/*"com/uno/Lon...*/], false));
        JavaUnoObject::_unoLongArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoLongArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[17/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoFloatArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[18/*"com/uno/Flo...*/], false));
        JavaUnoObject::_unoFloatArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoFloatArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[19/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoDoubleArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[20/*"com/uno/Dou...*/], false));
        JavaUnoObject::_unoDoubleArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoDoubleArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[21/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoStringArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[22/*"com/uno/Str...*/], false));
        JavaUnoObject::_unoStringArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoStringArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[23/*"(J)Lcom/uno...*/]);
        JavaUnoObject::_unoObjectArrayClass_ = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[24/*"com/uno/Obj...*/], false));
        JavaUnoObject::_unoObjectArrayFactoryMethod_ = ::g::Android::Base::JNI::GetStaticMethodID(JavaUnoObject::_unoObjectArrayClass_, ::STRINGS[8/*"InitFromUno...*/], ::STRINGS[25/*"(J)Lcom/uno...*/]);
        JNINativeMethod nativeFunc = {(char* const)"Finalize", (char* const)"(J)V", (void *)&__JavaUnoObject_Finalizer};
        int32_t attached = ::g::Android::Base::JNI::GetEnvPtr()->RegisterNatives(JavaUnoObject::_unoObjectClass_, &nativeFunc, 1);

        if (attached < 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"Could not r...*/]));

        uExitCritical();;
    }
}

// public static object UnBox(Android.Base.Primitives.ujobject javaObject) [static] :228
uObject* JavaUnoObject::UnBox(jobject javaObject)
{
    if (::g::Android::Base::JNI::IsSameObject(javaObject, ::g::Android::Base::Primitives::ujobject::Null()))
        return NULL;

    int64_t longPtr = (int64_t)::g::Android::Base::JNI::GetEnvPtr()->CallLongMethod(javaObject,JavaUnoObject::_unoObjectGetRetainedUnoPtr_);
    ::g::Android::Base::JNI::CheckException();
    return (uObject*)longPtr;
}

// public static object UnBoxFreeingLocalRef(Android.Base.Primitives.ujobject javaObject) [static] :236
uObject* JavaUnoObject::UnBoxFreeingLocalRef(jobject javaObject)
{
    if (::g::Android::Base::JNI::IsSameObject(javaObject, ::g::Android::Base::Primitives::ujobject::Null()))
        return NULL;

    int64_t longPtr = (int64_t)::g::Android::Base::JNI::GetEnvPtr()->CallLongMethod(javaObject,JavaUnoObject::_unoObjectGetRetainedUnoPtr_);
    ::g::Android::Base::JNI::CheckException();

    if (::g::Android::Base::JNI::GetRefType1(javaObject) == 1)
        ::g::Android::Base::JNI::DeleteLocalRef1(javaObject);

    return (uObject*)longPtr;
}
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android
