// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/FuseJS/1.6.0/Bundle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace FuseJS{struct Bundle__ExtractClosure;}}

namespace g{
namespace FuseJS{

// private sealed class Bundle.ExtractClosure :225
// {
uType* Bundle__ExtractClosure_typeof();
void Bundle__ExtractClosure__ctor__fn(Bundle__ExtractClosure* __this, uString* searchPath, uString* destinationPath, bool* overwriteIfExists);
void Bundle__ExtractClosure__Invoke_fn(Bundle__ExtractClosure* __this, uString** __retval);
void Bundle__ExtractClosure__New1_fn(uString* searchPath, uString* destinationPath, bool* overwriteIfExists, Bundle__ExtractClosure** __retval);

struct Bundle__ExtractClosure : uObject
{
    uStrong<uString*> _searchPath;
    uStrong<uString*> _destPath;
    bool _overwrite;

    void ctor_(uString* searchPath, uString* destinationPath, bool overwriteIfExists);
    uString* Invoke();
    static Bundle__ExtractClosure* New1(uString* searchPath, uString* destinationPath, bool overwriteIfExists);
};
// }

}} // ::g::FuseJS
