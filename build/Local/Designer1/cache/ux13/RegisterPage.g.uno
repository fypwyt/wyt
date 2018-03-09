[Uno.Compiler.UxGenerated]
public partial class RegisterPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<bool> temp2_IsEnabled_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb6",
        "temp_eb7"
    };
    static RegisterPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public RegisterPage(
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
        var temp3 = new global::Fuse.Reactive.Data("name");
        var temp1 = new global::Fuse.Controls.TextBox();
        temp1_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("password");
        var temp2 = new global::Fuse.Controls.Button();
        temp2_IsEnabled_inst = new LoginPage_FuseVisual_IsEnabled_Property(temp2, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("inputed");
        var temp6 = new global::Fuse.Reactive.Data("registerButton");
        var temp7 = new global::Fuse.Reactive.Data("goLoginPage");
        var temp8 = new global::Fuse.Controls.DockPanel();
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.ScrollView();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Controls.Text();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Controls.Text();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp2_IsEnabled_inst, temp5, Fuse.Reactive.BindingMode.Default);
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp6);
        var temp18 = new global::Fuse.Controls.Button();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp7);
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp9.LineNumber = 4;
        temp9.FileName = "Pages/RegisterPage.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/RegisterPage.js"));
        temp10.ClipToBounds = true;
        temp10.Children.Add(temp11);
        temp11.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp11.Margin = float4(0f, -150f, 50f, 0f);
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp11.Children.Add(temp);
        temp11.Children.Add(temp15);
        temp11.Children.Add(temp1);
        temp11.Children.Add(temp2);
        temp11.Children.Add(temp18);
        temp12.Value = "Registration";
        temp12.FontSize = 50f;
        temp13.Value = "User Name:";
        temp.PlaceholderText = "First and last name...";
        temp.FontSize = 25f;
        temp.Alignment = Fuse.Elements.Alignment.Top;
        temp.Bindings.Add(temp14);
        temp15.Value = "Password:";
        temp1.PlaceholderText = "Enter password...";
        temp1.FontSize = 25f;
        temp1.Alignment = Fuse.Elements.Alignment.Top;
        temp1.Bindings.Add(temp16);
        temp2.Text = "Submit";
        temp2.Color = float4(0f, 0f, 0f, 0f);
        temp2.Alignment = Fuse.Elements.Alignment.Left;
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb6.OnEvent);
        temp2.Bindings.Add(temp17);
        temp2.Bindings.Add(temp_eb6);
        temp18.Text = "Go Back";
        temp18.Color = float4(0f, 0f, 0f, 0f);
        temp18.Alignment = Fuse.Elements.Alignment.Left;
        global::Fuse.Gestures.Clicked.AddHandler(temp18, temp_eb7.OnEvent);
        temp18.Bindings.Add(temp_eb7);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb6);
        __g_nametable.Objects.Add(temp_eb7);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "IsEnabled";
}
