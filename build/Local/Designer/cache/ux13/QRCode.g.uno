[Uno.Compiler.UxGenerated]
public partial class QRCode: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly QRCode __parent;
        [Uno.WeakReference] internal readonly QRCode __parentInstance;
        public Template(QRCode parent, QRCode parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Url_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Image();
            __self_Url_inst = new LoginPage_FuseControlsImage_Url_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("url2");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Url_inst, temp, Fuse.Reactive.BindingMode.Default);
            global::Fuse.Controls.DockPanel.SetDock(__self, Fuse.Layouts.Dock.Left);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Url";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb26;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb26"
    };
    static QRCode()
    {
    }
    [global::Uno.UX.UXConstructor]
    public QRCode(
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
        var temp3 = new global::Fuse.Reactive.Data("url");
        var temp4 = new global::Fuse.Reactive.Data("goBack");
        var temp5 = new global::Fuse.Controls.DockPanel();
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Controls.StatusBarBackground();
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp9 = new global::Fuse.Controls.ScrollView();
        var temp10 = new global::Fuse.Controls.StackPanel();
        var temp11 = new Template(this, this);
        var temp12 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Controls.Button();
        temp_eb26 = new global::Fuse.Reactive.EventBinding(temp4);
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp7);
        temp5.Children.Add(temp);
        temp5.Children.Add(temp9);
        temp6.LineNumber = 4;
        temp6.FileName = "Pages/QRCode.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/QRCode.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Top);
        temp.TextColor = float4(1f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp8);
        temp9.ClipToBounds = true;
        temp9.Children.Add(temp10);
        temp10.Children.Add(temp1);
        temp10.Children.Add(temp13);
        temp1.Templates.Add(temp11);
        temp1.Bindings.Add(temp12);
        temp13.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb26.OnEvent);
        temp13.Bindings.Add(temp_eb26);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb26);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
}
