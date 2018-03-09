// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/CreateActivityPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CreateActivityPage.h>
#include <_root.LoginPage_bundle.h>
#include <_root.LoginPage_FuseC-7f8524bb.h>
#include <_root.LoginPage_FuseC-ce57a6f1.h>
#include <_root.LoginPage_FuseV-f1eb1b61.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[28];
static uType* TYPES[5];

namespace g{

// public partial sealed class CreateActivityPage :2
// {
// static CreateActivityPage() :20
static void CreateActivityPage__cctor_4_fn(uType* __type)
{
    CreateActivityPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb2"*/], ::STRINGS[2/*"temp_eb3"*/]);
    CreateActivityPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
    CreateActivityPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"IsEnabled"*/]);
}

static void CreateActivityPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb2");
    ::STRINGS[2] = uString::Const("temp_eb3");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("IsEnabled");
    ::STRINGS[5] = uString::Const("err");
    ::STRINGS[6] = uString::Const("date");
    ::STRINGS[7] = uString::Const("time");
    ::STRINGS[8] = uString::Const("startLoc");
    ::STRINGS[9] = uString::Const("destinLoc");
    ::STRINGS[10] = uString::Const("maxPassengers");
    ::STRINGS[11] = uString::Const("inputed");
    ::STRINGS[12] = uString::Const("goMainPage");
    ::STRINGS[13] = uString::Const("goBack");
    ::STRINGS[14] = uString::Const("Pages/CreateActivityPage.ux");
    ::STRINGS[15] = uString::Const("Create Activity Page");
    ::STRINGS[16] = uString::Const("Trip Date:");
    ::STRINGS[17] = uString::Const("Format: DD-MM(eg. 15-02)");
    ::STRINGS[18] = uString::Const("Trip start time:");
    ::STRINGS[19] = uString::Const("Format: HH:MM(eg. 18:30)");
    ::STRINGS[20] = uString::Const("Trip start location:");
    ::STRINGS[21] = uString::Const("Eg. Ho Man Tin");
    ::STRINGS[22] = uString::Const("Trip destination location:");
    ::STRINGS[23] = uString::Const("Eg. Mong Kok");
    ::STRINGS[24] = uString::Const("Maximum Passenger numbers:");
    ::STRINGS[25] = uString::Const("Eg. 4");
    ::STRINGS[26] = uString::Const("Submit!");
    ::STRINGS[27] = uString::Const("Go Back");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::LoginPage_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(118,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(CreateActivityPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CreateActivityPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CreateActivityPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CreateActivityPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CreateActivityPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CreateActivityPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CreateActivityPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CreateActivityPage, temp6_IsEnabled_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CreateActivityPage, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CreateActivityPage, temp_eb3), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(CreateActivityPage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&CreateActivityPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CreateActivityPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CreateActivityPage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* CreateActivityPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 132;
    options.InterfaceCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CreateActivityPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("CreateActivityPage", options);
    type->fp_build_ = CreateActivityPage_build;
    type->fp_cctor_ = CreateActivityPage__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public CreateActivityPage(Fuse.Navigation.Router router) :24
void CreateActivityPage__ctor_8_fn(CreateActivityPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :30
void CreateActivityPage__InitializeUX_fn(CreateActivityPage* __this)
{
    __this->InitializeUX();
}

// public CreateActivityPage New(Fuse.Navigation.Router router) :24
void CreateActivityPage__New5_fn(::g::Fuse::Navigation::Router* router1, CreateActivityPage** __retval)
{
    *__retval = CreateActivityPage::New5(router1);
}

uSStrong<uArray*> CreateActivityPage::__g_static_nametable1_;
::g::Uno::UX::Selector CreateActivityPage::__selector0_;
::g::Uno::UX::Selector CreateActivityPage::__selector1_;

// public CreateActivityPage(Fuse.Navigation.Router router) [instance] :24
void CreateActivityPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :30
void CreateActivityPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CreateActivityPage::__g_static_nametable1_);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::LoginPage_FuseControlsTextControl_Value_Property::New1(temp, CreateActivityPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"err"*/]);
    ::g::Fuse::Controls::TextBox* temp1 = ::g::Fuse::Controls::TextBox::New4();
    temp1_Value_inst = ::g::LoginPage_FuseControlsTextInputControl_Value_Property::New1(temp1, CreateActivityPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"date"*/]);
    ::g::Fuse::Controls::TextBox* temp2 = ::g::Fuse::Controls::TextBox::New4();
    temp2_Value_inst = ::g::LoginPage_FuseControlsTextInputControl_Value_Property::New1(temp2, CreateActivityPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"time"*/]);
    ::g::Fuse::Controls::TextBox* temp3 = ::g::Fuse::Controls::TextBox::New4();
    temp3_Value_inst = ::g::LoginPage_FuseControlsTextInputControl_Value_Property::New1(temp3, CreateActivityPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"startLoc"*/]);
    ::g::Fuse::Controls::TextBox* temp4 = ::g::Fuse::Controls::TextBox::New4();
    temp4_Value_inst = ::g::LoginPage_FuseControlsTextInputControl_Value_Property::New1(temp4, CreateActivityPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"destinLoc"*/]);
    ::g::Fuse::Controls::TextBox* temp5 = ::g::Fuse::Controls::TextBox::New4();
    temp5_Value_inst = ::g::LoginPage_FuseControlsTextInputControl_Value_Property::New1(temp5, CreateActivityPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"maxPassengers"*/]);
    ::g::Fuse::Controls::Button* temp6 = ::g::Fuse::Controls::Button::New5();
    temp6_IsEnabled_inst = ::g::LoginPage_FuseVisual_IsEnabled_Property::New1(temp6, CreateActivityPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"inputed"*/]);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"goMainPage"*/]);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"goBack"*/]);
    ::g::Fuse::Controls::DockPanel* temp16 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StatusBarBackground* temp18 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Controls::ScrollView* temp20 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp21 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp24 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Text* temp26 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp9, 3);
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::Text* temp30 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Text* temp32 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp6_IsEnabled_inst, (uObject*)temp13, 3);
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14);
    ::g::Fuse::Controls::Button* temp35 = ::g::Fuse::Controls::Button::New5();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp17->LineNumber(4);
    temp17->FileName(::STRINGS[14/*"Pages/Creat...*/]);
    temp17->File(::g::Uno::UX::BundleFileSource::New1(::g::LoginPage_bundle::CreateActivityPage6191b187()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 2);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp20->ClipToBounds(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp22->Value(::STRINGS[15/*"Create Acti...*/]);
    temp22->FontSize(50.0f);
    temp23->Alignment(8);
    temp23->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp24->Value(::STRINGS[16/*"Trip Date:"*/]);
    temp1->PlaceholderText(::STRINGS[17/*"Format: DD-...*/]);
    temp1->FontSize(25.0f);
    temp1->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp26->Value(::STRINGS[18/*"Trip start ...*/]);
    temp2->PlaceholderText(::STRINGS[19/*"Format: HH:...*/]);
    temp2->FontSize(25.0f);
    temp2->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    temp28->Value(::STRINGS[20/*"Trip start ...*/]);
    temp3->PlaceholderText(::STRINGS[21/*"Eg. Ho Man ...*/]);
    temp3->FontSize(25.0f);
    temp3->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp30->Value(::STRINGS[22/*"Trip destin...*/]);
    temp4->PlaceholderText(::STRINGS[23/*"Eg. Mong Kok"*/]);
    temp4->FontSize(25.0f);
    temp4->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    temp32->Value(::STRINGS[24/*"Maximum Pas...*/]);
    temp5->PlaceholderText(::STRINGS[25/*"Eg. 4"*/]);
    temp5->FontSize(25.0f);
    temp5->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    temp6->Text(::STRINGS[26/*"Submit!"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp6, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp35->Text(::STRINGS[27/*"Go Back"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp35, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}

// public CreateActivityPage New(Fuse.Navigation.Router router) [static] :24
CreateActivityPage* CreateActivityPage::New5(::g::Fuse::Navigation::Router* router1)
{
    CreateActivityPage* obj1 = (CreateActivityPage*)uNew(CreateActivityPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
