// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Elements/1.6.0/Caching/Cache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Cache;}}}
namespace g{namespace Fuse{namespace Elements{struct CacheHelper;}}}
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class CacheHelper :235
// {
uType* CacheHelper_typeof();
void CacheHelper__ctor__fn(CacheHelper* __this);
void CacheHelper__Blit_fn(CacheHelper* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float* opacity);
void CacheHelper__New1_fn(CacheHelper** __retval);

struct CacheHelper : uObject
{
    void ctor_();
    void Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float opacity);
    static CacheHelper* New1();
};
// }

}}} // ::g::Fuse::Elements
