// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Common/1.6.0/Diagnostics.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public sealed class Diagnostic :21
// {
uType* Diagnostic_typeof();
void Diagnostic__ctor__fn(Diagnostic* __this, int32_t* type, uString* message, uObject* sourceObject, uString* filePath, int32_t* lineNumber, uString* memberName, ::g::Uno::Exception* exception);
void Diagnostic__New1_fn(int32_t* type, uString* message, uObject* sourceObject, uString* filePath, int32_t* lineNumber, uString* memberName, ::g::Uno::Exception* exception, Diagnostic** __retval);
void Diagnostic__ToString_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__get_UnoType_fn(Diagnostic* __this, int32_t* __retval);

struct Diagnostic : uObject
{
    int32_t Type;
    uStrong<uString*> Message;
    uStrong<uObject*> SourceObject;
    uStrong<uString*> FilePath;
    int32_t LineNumber;
    uStrong<uString*> MemberName;
    uStrong< ::g::Uno::Exception*> Exception;
    bool IsTemporalWarning;

    void ctor_(int32_t type, uString* message, uObject* sourceObject, uString* filePath, int32_t lineNumber, uString* memberName, ::g::Uno::Exception* exception);
    int32_t UnoType();
    static Diagnostic* New1(int32_t type, uString* message, uObject* sourceObject, uString* filePath, int32_t lineNumber, uString* memberName, ::g::Uno::Exception* exception);
};
// }

}} // ::g::Fuse
