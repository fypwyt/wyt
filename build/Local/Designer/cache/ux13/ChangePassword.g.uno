[Uno.Compiler.UxGenerated]
public partial class ChangePassword: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb0"
    };
    static ChangePassword()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ChangePassword(
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
        var temp2 = new global::Fuse.Reactive.Data("goBack");
        var temp3 = new global::Fuse.Controls.DockPanel();
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.StatusBarBackground();
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp7 = new global::Fuse.Controls.ScrollView();
        var temp8 = new global::Fuse.Controls.StackPanel();
        var temp9 = new global::Fuse.Controls.Text();
        var temp10 = new global::Fuse.Controls.Text();
        var temp11 = new global::Fuse.Controls.TextBox();
        var temp12 = new global::Fuse.Controls.Text();
        var temp13 = new global::Fuse.Controls.TextBox();
        var temp14 = new global::Fuse.Controls.Text();
        var temp15 = new global::Fuse.Controls.TextBox();
        var temp16 = new global::Fuse.Controls.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp2);
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(temp);
        temp3.Children.Add(temp7);
        temp4.LineNumber = 4;
        temp4.FileName = "Pages/ChangePassword.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/ChangePassword.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Top);
        temp.TextColor = float4(1f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp6);
        temp7.ClipToBounds = true;
        temp7.Children.Add(temp8);
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp8.Children.Add(temp11);
        temp8.Children.Add(temp12);
        temp8.Children.Add(temp13);
        temp8.Children.Add(temp14);
        temp8.Children.Add(temp15);
        temp8.Children.Add(temp16);
        temp9.Value = "Change Password";
        temp9.FontSize = 50f;
        temp10.Value = "Old password:";
        temp11.PlaceholderText = "";
        temp11.FontSize = 25f;
        temp11.Alignment = Fuse.Elements.Alignment.Top;
        temp12.Value = "New password:";
        temp13.PlaceholderText = "";
        temp13.FontSize = 25f;
        temp13.Alignment = Fuse.Elements.Alignment.Top;
        temp14.Value = "Enter again:";
        temp15.PlaceholderText = "";
        temp15.FontSize = 25f;
        temp15.Alignment = Fuse.Elements.Alignment.Top;
        temp16.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb0.OnEvent);
        temp16.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
