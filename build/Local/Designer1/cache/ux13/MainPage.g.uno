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
            var temp = new global::Fuse.Reactive.Data("name");
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
        global::Uno.UX.Property<string> __self_Value_inst;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self_Value_inst = new LoginPage_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("characterShow");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainPage __parent;
        [Uno.WeakReference] internal readonly MainPage __parentInstance;
        public Template3(MainPage parent, MainPage parentInstance): base(null, false)
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
            __self.Value = "Credit point:";
            return __self;
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    internal global::Fuse.Reactive.EventBinding temp_eb5;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb4",
        "temp_eb5"
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
        var temp3 = new global::Fuse.Reactive.Data("info");
        var temp4 = new global::Fuse.Reactive.Data("goSettingPage");
        var temp5 = new global::Fuse.Reactive.Data("changeCharacter");
        var temp6 = new global::Fuse.Controls.DockPanel();
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new global::Fuse.Controls.StatusBarBackground();
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Controls.ScrollView();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new Template(this, this);
        var temp13 = new Template1(this, this);
        var temp14 = new Template2(this, this);
        var temp15 = new Template3(this, this);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Controls.Button();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp18 = new global::Fuse.Controls.Button();
        temp_eb5 = new global::Fuse.Reactive.EventBinding(temp5);
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp6.Children.Add(temp);
        temp6.Children.Add(temp10);
        temp7.LineNumber = 4;
        temp7.FileName = "Pages/MainPage.ux";
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/MainPage.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Top);
        temp.TextColor = float4(1f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp9);
        temp10.ClipToBounds = true;
        temp10.Children.Add(temp11);
        temp11.Children.Add(temp1);
        temp11.Children.Add(temp17);
        temp11.Children.Add(temp18);
        temp1.Templates.Add(temp12);
        temp1.Templates.Add(temp13);
        temp1.Templates.Add(temp14);
        temp1.Templates.Add(temp15);
        temp1.Bindings.Add(temp16);
        temp17.Text = "Setting";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb4.OnEvent);
        temp17.Bindings.Add(temp_eb4);
        temp18.Text = "Change Driver/Passenger";
        global::Fuse.Gestures.Clicked.AddHandler(temp18, temp_eb5.OnEvent);
        temp18.Bindings.Add(temp_eb5);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb4);
        __g_nametable.Objects.Add(temp_eb5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
}
