// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.6.0/Visual.Templates.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct TemplateSourceImpl;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{

// internal struct TemplateSourceImpl :14
// {
uStructType* TemplateSourceImpl_typeof();
void TemplateSourceImpl__get_Count_fn(TemplateSourceImpl* __this, int32_t* __retval);
void TemplateSourceImpl__FindTemplate_fn(TemplateSourceImpl* __this, uString* key, ::g::Uno::UX::Template** __retval);
void TemplateSourceImpl__get_Item_fn(TemplateSourceImpl* __this, int32_t* index, ::g::Uno::UX::Template** __retval);
void TemplateSourceImpl__get_Templates_fn(TemplateSourceImpl* __this, ::g::Uno::Collections::List** __retval);

struct TemplateSourceImpl
{
    uStrong< ::g::Uno::Collections::List*> _templates;

    int32_t Count();
    ::g::Uno::UX::Template* FindTemplate(uString* key);
    ::g::Uno::UX::Template* Item(int32_t index);
    ::g::Uno::Collections::List* Templates();
};
// }

}} // ::g::Fuse
