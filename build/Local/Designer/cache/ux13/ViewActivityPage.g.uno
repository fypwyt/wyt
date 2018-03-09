[Uno.Compiler.UxGenerated]
public partial class ViewActivityPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ViewActivityPage __parent;
        [Uno.WeakReference] internal readonly ViewActivityPage __parentInstance;
        public Template(ViewActivityPage parent, ViewActivityPage parentInstance): base(null, false)
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
            __self.Value = "-------------------";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ViewActivityPage __parent;
        [Uno.WeakReference] internal readonly ViewActivityPage __parentInstance;
        public Template1(ViewActivityPage parent, ViewActivityPage parentInstance): base(null, false)
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
        [Uno.WeakReference] internal readonly ViewActivityPage __parent;
        [Uno.WeakReference] internal readonly ViewActivityPage __parentInstance;
        public Template2(ViewActivityPage parent, ViewActivityPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self_Value_inst = new LoginPage_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("startTime");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ViewActivityPage __parent;
        [Uno.WeakReference] internal readonly ViewActivityPage __parentInstance;
        public Template3(ViewActivityPage parent, ViewActivityPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self_Value_inst = new LoginPage_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("endTime");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ViewActivityPage __parent;
        [Uno.WeakReference] internal readonly ViewActivityPage __parentInstance;
        public Template4(ViewActivityPage parent, ViewActivityPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self_Value_inst = new LoginPage_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("chatname");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.Property<string> temp6_Value_inst;
    global::Uno.UX.Property<bool> temp7_IsEnabled_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb33;
    internal global::Fuse.Reactive.EventBinding temp_eb34;
    internal global::Fuse.Reactive.EventBinding temp_eb35;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb33",
        "temp_eb34",
        "temp_eb35"
    };
    static ViewActivityPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ViewActivityPage(
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
        var temp8 = new global::Fuse.Reactive.Data("err");
        var temp1 = new global::Fuse.Controls.TextBox();
        temp1_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("search");
        var temp10 = new global::Fuse.Reactive.Data("submitButton");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new LoginPage_FuseReactiveEach_Items_Property(temp2, __selector1);
        var temp11 = new global::Fuse.Reactive.Data("info");
        var temp3 = new global::Fuse.Controls.TextBox();
        temp3_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp3, __selector0);
        var temp12 = new global::Fuse.Reactive.Data("joinText");
        var temp4 = new global::Fuse.Controls.TextBox();
        temp4_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp4, __selector0);
        var temp13 = new global::Fuse.Reactive.Data("joinUserName");
        var temp5 = new global::Fuse.Controls.TextBox();
        temp5_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp5, __selector0);
        var temp14 = new global::Fuse.Reactive.Data("joinDriverName");
        var temp6 = new global::Fuse.Controls.TextBox();
        temp6_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp6, __selector0);
        var temp15 = new global::Fuse.Reactive.Data("joinChatroomName");
        var temp7 = new global::Fuse.Controls.Button();
        temp7_IsEnabled_inst = new LoginPage_FuseVisual_IsEnabled_Property(temp7, __selector2);
        var temp16 = new global::Fuse.Reactive.Data("inputed");
        var temp17 = new global::Fuse.Reactive.Data("joinButton");
        var temp18 = new global::Fuse.Reactive.Data("goBack");
        var temp19 = new global::Fuse.Controls.DockPanel();
        var temp20 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp21 = new global::Fuse.Controls.StatusBarBackground();
        var temp22 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp23 = new global::Fuse.Controls.ScrollView();
        var temp24 = new global::Fuse.Controls.StackPanel();
        var temp25 = new global::Fuse.Controls.Text();
        var temp26 = new global::Fuse.Controls.Text();
        var temp27 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::Fuse.Controls.Button();
        temp_eb33 = new global::Fuse.Reactive.EventBinding(temp10);
        var temp29 = new global::Fuse.Controls.Text();
        var temp30 = new Template(this, this);
        var temp31 = new Template1(this, this);
        var temp32 = new Template2(this, this);
        var temp33 = new Template3(this, this);
        var temp34 = new Template4(this, this);
        var temp35 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp11, Fuse.Reactive.BindingMode.Default);
        var temp36 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
        var temp37 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp13, Fuse.Reactive.BindingMode.Default);
        var temp38 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
        var temp39 = new global::Fuse.Reactive.DataBinding(temp6_Value_inst, temp15, Fuse.Reactive.BindingMode.Default);
        var temp40 = new global::Fuse.Reactive.DataBinding(temp7_IsEnabled_inst, temp16, Fuse.Reactive.BindingMode.Default);
        temp_eb34 = new global::Fuse.Reactive.EventBinding(temp17);
        var temp41 = new global::Fuse.Controls.Button();
        temp_eb35 = new global::Fuse.Reactive.EventBinding(temp18);
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp19.Children.Add(temp);
        temp19.Children.Add(temp23);
        temp20.LineNumber = 4;
        temp20.FileName = "Pages/ViewActivityPage.ux";
        temp20.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/ViewActivityPage.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp21, Fuse.Layouts.Dock.Top);
        temp.TextColor = float4(1f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp22);
        temp23.ClipToBounds = true;
        temp23.Children.Add(temp24);
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp26);
        temp24.Children.Add(temp1);
        temp24.Children.Add(temp28);
        temp24.Children.Add(temp29);
        temp24.Children.Add(temp2);
        temp24.Children.Add(temp3);
        temp24.Children.Add(temp4);
        temp24.Children.Add(temp5);
        temp24.Children.Add(temp6);
        temp24.Children.Add(temp7);
        temp24.Children.Add(temp41);
        temp25.Value = "View Activity Page";
        temp25.FontSize = 35f;
        temp26.Value = "Search carpool:";
        temp26.FontSize = 25f;
        temp1.PlaceholderText = "Search";
        temp1.FontSize = 15f;
        temp1.Alignment = Fuse.Elements.Alignment.Top;
        temp1.Bindings.Add(temp27);
        temp28.Text = "Search";
        global::Fuse.Gestures.Clicked.AddHandler(temp28, temp_eb33.OnEvent);
        temp28.Bindings.Add(temp_eb33);
        temp29.Value = "Result:";
        temp29.FontSize = 25f;
        temp2.Templates.Add(temp30);
        temp2.Templates.Add(temp31);
        temp2.Templates.Add(temp32);
        temp2.Templates.Add(temp33);
        temp2.Templates.Add(temp34);
        temp2.Bindings.Add(temp35);
        temp3.PlaceholderText = "Enter carpool id to join";
        temp3.FontSize = 15f;
        temp3.Alignment = Fuse.Elements.Alignment.Top;
        temp3.Bindings.Add(temp36);
        temp4.PlaceholderText = "Enter your username";
        temp4.FontSize = 15f;
        temp4.Alignment = Fuse.Elements.Alignment.Top;
        temp4.Bindings.Add(temp37);
        temp5.PlaceholderText = "Enter driver username";
        temp5.FontSize = 15f;
        temp5.Alignment = Fuse.Elements.Alignment.Top;
        temp5.Bindings.Add(temp38);
        temp6.PlaceholderText = "Enter chatroom name";
        temp6.FontSize = 15f;
        temp6.Alignment = Fuse.Elements.Alignment.Top;
        temp6.Bindings.Add(temp39);
        temp7.Text = "Join!";
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb34.OnEvent);
        temp7.Bindings.Add(temp40);
        temp7.Bindings.Add(temp_eb34);
        temp41.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp41, temp_eb35.OnEvent);
        temp41.Bindings.Add(temp_eb35);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb33);
        __g_nametable.Objects.Add(temp_eb34);
        __g_nametable.Objects.Add(temp_eb35);
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "IsEnabled";
}
