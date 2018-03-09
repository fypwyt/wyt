[Uno.Compiler.UxGenerated]
public partial class SettingPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    internal global::Fuse.Reactive.EventBinding temp_eb9;
    internal global::Fuse.Reactive.EventBinding temp_eb10;
    internal global::Fuse.Reactive.EventBinding temp_eb11;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb8",
        "temp_eb9",
        "temp_eb10",
        "temp_eb11"
    };
    static SettingPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SettingPage(
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
        var temp1 = new global::Fuse.Reactive.Data("err");
        var temp2 = new global::Fuse.Reactive.Data("goLoginPage");
        var temp3 = new global::Fuse.Reactive.Data("goChangeProfilePage");
        var temp4 = new global::Fuse.Reactive.Data("goChangePassword");
        var temp5 = new global::Fuse.Reactive.Data("goBack");
        var temp6 = new global::Fuse.Controls.DockPanel();
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new global::Fuse.Controls.StatusBarBackground();
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Controls.ScrollView();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Controls.Text();
        var temp13 = new global::Fuse.Controls.Button();
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp14 = new global::Fuse.Controls.Button();
        temp_eb9 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp15 = new global::Fuse.Controls.Button();
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp16 = new global::Fuse.Controls.Button();
        temp_eb11 = new global::Fuse.Reactive.EventBinding(temp5);
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp6.Children.Add(temp);
        temp6.Children.Add(temp10);
        temp7.LineNumber = 4;
        temp7.FileName = "Pages/SettingPage.ux";
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/SettingPage.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Top);
        temp.TextColor = float4(1f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp9);
        temp10.ClipToBounds = true;
        temp10.Children.Add(temp11);
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp11.Children.Add(temp14);
        temp11.Children.Add(temp15);
        temp11.Children.Add(temp16);
        temp12.Value = "Application Setting";
        temp13.Text = "Log Out";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb8.OnEvent);
        temp13.Bindings.Add(temp_eb8);
        temp14.Text = "Change Profile";
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb9.OnEvent);
        temp14.Bindings.Add(temp_eb9);
        temp15.Text = "Change Password";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb10.OnEvent);
        temp15.Bindings.Add(temp_eb10);
        temp16.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb11.OnEvent);
        temp16.Bindings.Add(temp_eb11);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb8);
        __g_nametable.Objects.Add(temp_eb9);
        __g_nametable.Objects.Add(temp_eb10);
        __g_nametable.Objects.Add(temp_eb11);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
