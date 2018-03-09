[Uno.Compiler.UxGenerated]
public partial class LoginPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<bool> temp2_IsEnabled_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb15;
    internal global::Fuse.Reactive.EventBinding temp_eb16;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb15",
        "temp_eb16"
    };
    static LoginPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LoginPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::WhiteTextInput();
        temp_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("username");
        var temp1 = new global::WhiteTextInput();
        temp1_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("password");
        var temp2 = new global::Fuse.Controls.Button();
        temp2_IsEnabled_inst = new LoginPage_FuseVisual_IsEnabled_Property(temp2, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("inputed");
        var temp6 = new global::Fuse.Reactive.Data("goMainPage");
        var temp7 = new global::Fuse.Reactive.Data("goRegisterPage");
        var temp8 = new global::Fuse.Controls.DockPanel();
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.Grid();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::WhiteText();
        var temp13 = new global::WhiteText();
        var temp14 = new global::Fuse.Controls.StackPanel();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp2_IsEnabled_inst, temp5, Fuse.Reactive.BindingMode.Default);
        temp_eb15 = new global::Fuse.Reactive.EventBinding(temp6);
        var temp18 = new global::Fuse.Controls.Button();
        temp_eb16 = new global::Fuse.Reactive.EventBinding(temp7);
        var temp19 = new global::Fuse.Drawing.StaticSolidColor(float4(0.2156863f, 0f, 0.8431373f, 1f));
        temp8.Background = temp19;
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp9.LineNumber = 7;
        temp9.FileName = "Pages/LoginPage.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/LoginPage.js"));
        temp10.Rows = "1*,1*";
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp14);
        temp11.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp12.Value = "WYT";
        temp12.FontSize = 95f;
        temp12.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp13.Value = "Free Ride!";
        temp13.FontSize = 25f;
        temp13.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp14.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp14.Margin = float4(50f, 0f, 50f, 0f);
        temp14.Children.Add(temp);
        temp14.Children.Add(temp1);
        temp14.Children.Add(temp2);
        temp14.Children.Add(temp18);
        temp.PlaceholderText = "username";
        temp.FontSize = 25f;
        temp.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp.Bindings.Add(temp15);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "password";
        temp1.FontSize = 25f;
        temp1.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp1.Bindings.Add(temp16);
        temp2.Text = "Log In Here!";
        temp2.Color = float4(0f, 0f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb15.OnEvent);
        temp2.Bindings.Add(temp17);
        temp2.Bindings.Add(temp_eb15);
        temp18.Text = "Register Now";
        temp18.Color = float4(0f, 0f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp18, temp_eb16.OnEvent);
        temp18.Bindings.Add(temp_eb16);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb15);
        __g_nametable.Objects.Add(temp_eb16);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "IsEnabled";
}
