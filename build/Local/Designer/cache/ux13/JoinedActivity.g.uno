[Uno.Compiler.UxGenerated]
public partial class JoinedActivity: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
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
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template1(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Driver:";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template2(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
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
            var temp = new global::Fuse.Reactive.Data("_id");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template3(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Start Time";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template4(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
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
            var temp = new global::Fuse.Reactive.Data("startTime");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template5(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template5()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "End Time";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template6: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template6(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        static Template6()
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
    public partial class Template7: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template7(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template7()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Start Location";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template8: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly JoinedActivity __parent;
        [Uno.WeakReference] internal readonly JoinedActivity __parentInstance;
        public Template8(JoinedActivity parent, JoinedActivity parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        static Template8()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            var temp = new global::Fuse.Reactive.Data("startLocation");
            __self_Value_inst = new LoginPage_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp1 = new global::Fuse.Reactive.Member(temp, "street");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb13;
    internal global::Fuse.Reactive.EventBinding temp_eb14;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb13",
        "temp_eb14"
    };
    static JoinedActivity()
    {
    }
    [global::Uno.UX.UXConstructor]
    public JoinedActivity(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Data("findActivity");
        var temp2 = new global::Fuse.Reactive.Data("infoShow");
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new LoginPage_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Member(temp2, "key");
        var temp4 = new global::Fuse.Reactive.Data("goBack");
        var temp5 = new global::Fuse.Controls.DockPanel();
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Controls.StatusBarBackground();
        var temp8 = new global::Fuse.Controls.Text();
        var temp9 = new global::Fuse.Controls.ScrollView();
        var temp10 = new global::Fuse.Controls.StackPanel();
        var temp11 = new global::Fuse.Controls.Text();
        var temp12 = new global::Fuse.Controls.Button();
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new Template(this, this);
        var temp15 = new Template1(this, this);
        var temp16 = new Template2(this, this);
        var temp17 = new Template3(this, this);
        var temp18 = new Template4(this, this);
        var temp19 = new Template5(this, this);
        var temp20 = new Template6(this, this);
        var temp21 = new Template7(this, this);
        var temp22 = new Template8(this, this);
        var temp23 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.Button();
        temp_eb14 = new global::Fuse.Reactive.EventBinding(temp4);
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp7);
        temp5.Children.Add(temp8);
        temp5.Children.Add(temp9);
        temp6.LineNumber = 4;
        temp6.FileName = "Pages/JoinedActivity.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/JoinedActivity.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Top);
        temp8.TextColor = float4(1f, 0f, 0f, 1f);
        temp8.Alignment = Fuse.Elements.Alignment.Center;
        temp9.ClipToBounds = true;
        temp9.Children.Add(temp10);
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp12);
        temp10.Children.Add(temp13);
        temp10.Children.Add(temp);
        temp10.Children.Add(temp24);
        temp11.Value = "Joined Activity List";
        temp11.FontSize = 35f;
        temp12.Text = "Find";
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb13.OnEvent);
        temp12.Bindings.Add(temp_eb13);
        temp13.Value = "Result:";
        temp13.FontSize = 25f;
        temp.Templates.Add(temp14);
        temp.Templates.Add(temp15);
        temp.Templates.Add(temp16);
        temp.Templates.Add(temp17);
        temp.Templates.Add(temp18);
        temp.Templates.Add(temp19);
        temp.Templates.Add(temp20);
        temp.Templates.Add(temp21);
        temp.Templates.Add(temp22);
        temp.Bindings.Add(temp23);
        temp24.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp24, temp_eb14.OnEvent);
        temp24.Bindings.Add(temp_eb14);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb13);
        __g_nametable.Objects.Add(temp_eb14);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
