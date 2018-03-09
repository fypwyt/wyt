[Uno.Compiler.UxGenerated]
public partial class ChatroomListPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ChatroomListPage __parent;
        [Uno.WeakReference] internal readonly ChatroomListPage __parentInstance;
        public Template(ChatroomListPage parent, ChatroomListPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self_Value_inst = new LoginPage_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mes");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<bool> temp1_IsEnabled_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb1",
        "temp_eb2",
        "temp_eb3"
    };
    static ChatroomListPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ChatroomListPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.TextBox();
        temp_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("messageBox");
        var temp1 = new global::Fuse.Controls.Button();
        temp1_IsEnabled_inst = new LoginPage_FuseVisual_IsEnabled_Property(temp1, __selector1);
        var temp4 = new global::Fuse.Reactive.Data("inputed");
        var temp5 = new global::Fuse.Reactive.Data("send");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new LoginPage_FuseReactiveEach_Items_Property(temp2, __selector2);
        var temp6 = new global::Fuse.Reactive.Data("info");
        var temp7 = new global::Fuse.Reactive.Data("refresh");
        var temp8 = new global::Fuse.Reactive.Data("goBack");
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.DockPanel();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp1_IsEnabled_inst, temp4, Fuse.Reactive.BindingMode.Default);
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp14 = new Template(this, this);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Controls.Button();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp7);
        var temp17 = new global::Fuse.Controls.Button();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp8);
        temp9.LineNumber = 2;
        temp9.FileName = "Pages/ChatroomListPage.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/ChatroomListPage.js"));
        temp10.Children.Add(temp11);
        temp11.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp11.Margin = float4(0f, -150f, 50f, 0f);
        temp11.Children.Add(temp);
        temp11.Children.Add(temp1);
        temp11.Children.Add(temp2);
        temp11.Children.Add(temp16);
        temp11.Children.Add(temp17);
        temp.PlaceholderText = "Type..";
        temp.FontSize = 25f;
        temp.Alignment = Fuse.Elements.Alignment.Top;
        temp.Bindings.Add(temp12);
        temp1.Text = "Send";
        global::Fuse.Gestures.Clicked.AddHandler(temp1, temp_eb1.OnEvent);
        temp1.Bindings.Add(temp13);
        temp1.Bindings.Add(temp_eb1);
        temp2.Templates.Add(temp14);
        temp2.Bindings.Add(temp15);
        temp16.Text = "refresh";
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb2.OnEvent);
        temp16.Bindings.Add(temp_eb2);
        temp17.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb3.OnEvent);
        temp17.Bindings.Add(temp_eb3);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(temp9);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "IsEnabled";
    static global::Uno.UX.Selector __selector2 = "Items";
}
