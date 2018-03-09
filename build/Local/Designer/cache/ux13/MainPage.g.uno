[Uno.Compiler.UxGenerated]
public partial class MainPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainPage __parent;
        [Uno.WeakReference] internal readonly MainPage __parentInstance;
        public Template(MainPage parent, MainPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Welcome!";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainPage __parent;
        [Uno.WeakReference] internal readonly MainPage __parentInstance;
        public Template1(MainPage parent, MainPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self_Value_inst = new LoginPage_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("_id");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainPage __parent;
        [Uno.WeakReference] internal readonly MainPage __parentInstance;
        public Template2(MainPage parent, MainPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Credit point: NA";
            return __self;
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb17;
    internal global::Fuse.Reactive.EventBinding temp_eb18;
    internal global::Fuse.Reactive.EventBinding temp_eb19;
    internal global::Fuse.Reactive.EventBinding temp_eb20;
    internal global::Fuse.Reactive.EventBinding temp_eb21;
    internal global::Fuse.Reactive.EventBinding temp_eb22;
    internal global::Fuse.Reactive.EventBinding temp_eb23;
    internal global::Fuse.Reactive.EventBinding temp_eb24;
    internal global::Fuse.Reactive.EventBinding temp_eb25;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb17",
        "temp_eb18",
        "temp_eb19",
        "temp_eb20",
        "temp_eb21",
        "temp_eb22",
        "temp_eb23",
        "temp_eb24",
        "temp_eb25"
    };
    static MainPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MainPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new LoginPage_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("err");
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new LoginPage_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp3 = new global::Fuse.Reactive.Data("usernameStr");
        var temp4 = new global::Fuse.Reactive.Data("goSettingPage");
        var temp5 = new global::Fuse.Reactive.Data("goViewActivityPage");
        var temp6 = new global::Fuse.Reactive.Data("goJoinedActivity");
        var temp7 = new global::Fuse.Reactive.Data("goCreateActivityPage");
        var temp8 = new global::Fuse.Reactive.Data("goChatroomListPage");
        var temp9 = new global::Fuse.Reactive.Data("goQRCode");
        var temp10 = new global::Fuse.Reactive.Data("goFindCoordination");
        var temp11 = new global::Fuse.Reactive.Data("goHTML");
        var temp12 = new global::Fuse.Reactive.Data("test");
        var temp13 = new global::Fuse.Controls.DockPanel();
        var temp14 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp15 = new global::Fuse.Controls.StatusBarBackground();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Controls.ScrollView();
        var temp18 = new global::Fuse.Controls.StackPanel();
        var temp19 = new global::Fuse.Controls.StackPanel();
        var temp20 = new global::Fuse.Layouts.ColumnLayout();
        var temp21 = new Template(this, this);
        var temp22 = new Template1(this, this);
        var temp23 = new Template2(this, this);
        var temp24 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp25 = new global::Fuse.Controls.Button();
        temp_eb17 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp26 = new global::Fuse.Controls.Button();
        temp_eb18 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp27 = new global::Fuse.Controls.Button();
        temp_eb19 = new global::Fuse.Reactive.EventBinding(temp6);
        var temp28 = new global::Fuse.Controls.Button();
        temp_eb20 = new global::Fuse.Reactive.EventBinding(temp7);
        var temp29 = new global::Fuse.Controls.Button();
        temp_eb21 = new global::Fuse.Reactive.EventBinding(temp8);
        var temp30 = new global::Fuse.Controls.Button();
        temp_eb22 = new global::Fuse.Reactive.EventBinding(temp9);
        var temp31 = new global::Fuse.Controls.Button();
        temp_eb23 = new global::Fuse.Reactive.EventBinding(temp10);
        var temp32 = new global::Fuse.Controls.Button();
        temp_eb24 = new global::Fuse.Reactive.EventBinding(temp11);
        var temp33 = new global::Fuse.Controls.Button();
        temp_eb25 = new global::Fuse.Reactive.EventBinding(temp12);
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp15);
        temp13.Children.Add(temp);
        temp13.Children.Add(temp17);
        temp14.LineNumber = 4;
        temp14.FileName = "Pages/MainPage.ux";
        temp14.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/MainPage.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Top);
        temp.TextColor = float4(1f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp16);
        temp17.ClipToBounds = true;
        temp17.Children.Add(temp18);
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp25);
        temp18.Children.Add(temp26);
        temp18.Children.Add(temp27);
        temp18.Children.Add(temp28);
        temp18.Children.Add(temp29);
        temp18.Children.Add(temp30);
        temp18.Children.Add(temp31);
        temp18.Children.Add(temp32);
        temp18.Children.Add(temp33);
        temp19.Layout = temp20;
        temp19.Children.Add(temp1);
        temp20.ColumnSpacing = -230f;
        temp1.Templates.Add(temp21);
        temp1.Templates.Add(temp22);
        temp1.Templates.Add(temp23);
        temp1.Bindings.Add(temp24);
        temp25.Text = "Setting";
        temp25.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp25.Margin = float4(50f, 20f, 50f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp25, temp_eb17.OnEvent);
        temp25.Bindings.Add(temp_eb17);
        temp26.Text = "Find Activities";
        temp26.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp26.Margin = float4(10f, 20f, 10f, 20f);
        temp26.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        global::Fuse.Gestures.Clicked.AddHandler(temp26, temp_eb18.OnEvent);
        temp26.Bindings.Add(temp_eb18);
        temp27.Text = "View Joined Activities";
        temp27.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp27.Margin = float4(10f, 20f, 10f, 20f);
        temp27.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        global::Fuse.Gestures.Clicked.AddHandler(temp27, temp_eb19.OnEvent);
        temp27.Bindings.Add(temp_eb19);
        temp28.Text = "Create Activity";
        temp28.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp28.Margin = float4(10f, 20f, 10f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp28, temp_eb20.OnEvent);
        temp28.Bindings.Add(temp_eb20);
        temp29.Text = "View Chatroom List";
        temp29.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp29.Margin = float4(10f, 20f, 10f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp29, temp_eb21.OnEvent);
        temp29.Bindings.Add(temp_eb21);
        temp30.Text = "QR Code Generation";
        temp30.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp30.Margin = float4(10f, 20f, 10f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp30, temp_eb22.OnEvent);
        temp30.Bindings.Add(temp_eb22);
        temp31.Text = "Find Coordination";
        temp31.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp31.Margin = float4(10f, 20f, 10f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp31, temp_eb23.OnEvent);
        temp31.Bindings.Add(temp_eb23);
        temp32.Text = "HTML";
        temp32.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp32.Margin = float4(10f, 20f, 10f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp32, temp_eb24.OnEvent);
        temp32.Bindings.Add(temp_eb24);
        temp33.Text = "TEST";
        temp33.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        temp33.Margin = float4(10f, 20f, 10f, 20f);
        global::Fuse.Gestures.Clicked.AddHandler(temp33, temp_eb25.OnEvent);
        temp33.Bindings.Add(temp_eb25);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb17);
        __g_nametable.Objects.Add(temp_eb18);
        __g_nametable.Objects.Add(temp_eb19);
        __g_nametable.Objects.Add(temp_eb20);
        __g_nametable.Objects.Add(temp_eb21);
        __g_nametable.Objects.Add(temp_eb22);
        __g_nametable.Objects.Add(temp_eb23);
        __g_nametable.Objects.Add(temp_eb24);
        __g_nametable.Objects.Add(temp_eb25);
        this.Children.Add(temp13);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
}
