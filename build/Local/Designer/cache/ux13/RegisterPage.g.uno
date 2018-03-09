[Uno.Compiler.UxGenerated]
public partial class RegisterPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<bool> temp3_IsEnabled_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb27;
    internal global::Fuse.Reactive.EventBinding temp_eb28;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb27",
        "temp_eb28"
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
        var temp4 = new global::Fuse.Reactive.Data("name");
        var temp1 = new global::Fuse.Controls.TextBox();
        temp1_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("password");
        var temp2 = new global::Fuse.Controls.TextBox();
        temp2_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("phone");
        var temp3 = new global::Fuse.Controls.Button();
        temp3_IsEnabled_inst = new LoginPage_FuseVisual_IsEnabled_Property(temp3, __selector1);
        var temp7 = new global::Fuse.Reactive.Data("inputed");
        var temp8 = new global::Fuse.Reactive.Data("registerButton");
        var temp9 = new global::Fuse.Reactive.Data("goLoginPage");
        var temp10 = new global::Fuse.Controls.DockPanel();
        var temp11 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp12 = new global::Fuse.Controls.ScrollView();
        var temp13 = new global::Fuse.Controls.StackPanel();
        var temp14 = new global::Fuse.Controls.Text();
        var temp15 = new global::Fuse.Controls.Text();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Controls.Text();
        var temp18 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp19 = new global::Fuse.Controls.Text();
        var temp20 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp21 = new global::Fuse.Reactive.DataBinding(temp3_IsEnabled_inst, temp7, Fuse.Reactive.BindingMode.Default);
        temp_eb27 = new global::Fuse.Reactive.EventBinding(temp8);
        var temp22 = new global::Fuse.Controls.Button();
        temp_eb28 = new global::Fuse.Reactive.EventBinding(temp9);
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp12);
        temp11.LineNumber = 4;
        temp11.FileName = "Pages/RegisterPage.ux";
        temp11.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/RegisterPage.js"));
        temp12.ClipToBounds = true;
        temp12.Children.Add(temp13);
        temp13.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp13.Margin = float4(0f, -150f, 50f, 0f);
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp15);
        temp13.Children.Add(temp);
        temp13.Children.Add(temp17);
        temp13.Children.Add(temp1);
        temp13.Children.Add(temp19);
        temp13.Children.Add(temp2);
        temp13.Children.Add(temp3);
        temp13.Children.Add(temp22);
        temp14.Value = "Registration";
        temp14.FontSize = 50f;
        temp15.Value = "User Name:";
        temp.PlaceholderText = "First and last name...";
        temp.FontSize = 25f;
        temp.Alignment = Fuse.Elements.Alignment.Top;
        temp.Bindings.Add(temp16);
        temp17.Value = "Password:";
        temp1.PlaceholderText = "Enter password...";
        temp1.FontSize = 25f;
        temp1.Alignment = Fuse.Elements.Alignment.Top;
        temp1.Bindings.Add(temp18);
        temp19.Value = "Phone number:";
        temp2.PlaceholderText = "";
        temp2.FontSize = 25f;
        temp2.Alignment = Fuse.Elements.Alignment.Top;
        temp2.Bindings.Add(temp20);
        temp3.Text = "Submit";
        temp3.Color = float4(0f, 0f, 0f, 0f);
        temp3.Alignment = Fuse.Elements.Alignment.Left;
        global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb27.OnEvent);
        temp3.Bindings.Add(temp21);
        temp3.Bindings.Add(temp_eb27);
        temp22.Text = "Go Back";
        temp22.Color = float4(0f, 0f, 0f, 0f);
        temp22.Alignment = Fuse.Elements.Alignment.Left;
        global::Fuse.Gestures.Clicked.AddHandler(temp22, temp_eb28.OnEvent);
        temp22.Bindings.Add(temp_eb28);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb27);
        __g_nametable.Objects.Add(temp_eb28);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "IsEnabled";
}
