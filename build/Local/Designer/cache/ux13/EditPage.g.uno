[Uno.Compiler.UxGenerated]
public partial class EditPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.Property<string> temp6_Value_inst;
    global::Uno.UX.Property<bool> temp7_IsEnabled_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb6",
        "temp_eb7"
    };
    static EditPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EditPage(
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
        var temp8 = new global::Fuse.Reactive.Data("password");
        var temp1 = new global::Fuse.Controls.TextBox();
        temp1_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("phone");
        var temp2 = new global::Fuse.Controls.TextBox();
        temp2_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp10 = new global::Fuse.Reactive.Data("email");
        var temp3 = new global::Fuse.Controls.TextBox();
        temp3_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp3, __selector0);
        var temp11 = new global::Fuse.Reactive.Data("idCard");
        var temp4 = new global::Fuse.Controls.TextBox();
        temp4_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp4, __selector0);
        var temp12 = new global::Fuse.Reactive.Data("model");
        var temp5 = new global::Fuse.Controls.TextBox();
        temp5_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp5, __selector0);
        var temp13 = new global::Fuse.Reactive.Data("photo");
        var temp6 = new global::Fuse.Controls.TextBox();
        temp6_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp6, __selector0);
        var temp14 = new global::Fuse.Reactive.Data("vehicleNo");
        var temp7 = new global::Fuse.Controls.Button();
        temp7_IsEnabled_inst = new LoginPage_FuseVisual_IsEnabled_Property(temp7, __selector1);
        var temp15 = new global::Fuse.Reactive.Data("inputed");
        var temp16 = new global::Fuse.Reactive.Data("updateButton");
        var temp17 = new global::Fuse.Reactive.Data("goBack");
        var temp18 = new global::Fuse.Controls.DockPanel();
        var temp19 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp20 = new global::Fuse.Controls.ScrollView();
        var temp21 = new global::Fuse.Controls.StackPanel();
        var temp22 = new global::Fuse.Controls.Text();
        var temp23 = new global::Fuse.Controls.Text();
        var temp24 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp25 = new global::Fuse.Controls.Text();
        var temp26 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Fuse.Controls.Text();
        var temp28 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
        var temp29 = new global::Fuse.Controls.Text();
        var temp30 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        var temp31 = new global::Fuse.Controls.Text();
        var temp32 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
        var temp33 = new global::Fuse.Controls.Text();
        var temp34 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp13, Fuse.Reactive.BindingMode.Default);
        var temp35 = new global::Fuse.Controls.Text();
        var temp36 = new global::Fuse.Reactive.DataBinding(temp6_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
        var temp37 = new global::Fuse.Reactive.DataBinding(temp7_IsEnabled_inst, temp15, Fuse.Reactive.BindingMode.Default);
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp16);
        var temp38 = new global::Fuse.Controls.Button();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp17);
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp20);
        temp19.LineNumber = 4;
        temp19.FileName = "Pages/EditPage.ux";
        temp19.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/EditPage.js"));
        temp20.ClipToBounds = true;
        temp20.Children.Add(temp21);
        temp21.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp21.Margin = float4(0f, -80f, 50f, 0f);
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp23);
        temp21.Children.Add(temp);
        temp21.Children.Add(temp25);
        temp21.Children.Add(temp1);
        temp21.Children.Add(temp27);
        temp21.Children.Add(temp2);
        temp21.Children.Add(temp29);
        temp21.Children.Add(temp3);
        temp21.Children.Add(temp31);
        temp21.Children.Add(temp4);
        temp21.Children.Add(temp33);
        temp21.Children.Add(temp5);
        temp21.Children.Add(temp35);
        temp21.Children.Add(temp6);
        temp21.Children.Add(temp7);
        temp21.Children.Add(temp38);
        temp22.Value = "Update Profile";
        temp22.FontSize = 50f;
        temp23.Value = "New Password:";
        temp.PlaceholderText = "Enter password...";
        temp.FontSize = 25f;
        temp.Alignment = Fuse.Elements.Alignment.Top;
        temp.Bindings.Add(temp24);
        temp25.Value = "New Phone Number:";
        temp1.PlaceholderText = "Enter phone...";
        temp1.FontSize = 25f;
        temp1.Alignment = Fuse.Elements.Alignment.Top;
        temp1.Bindings.Add(temp26);
        temp27.Value = "Email:";
        temp2.PlaceholderText = "Enter Email address...";
        temp2.FontSize = 25f;
        temp2.Alignment = Fuse.Elements.Alignment.Top;
        temp2.Bindings.Add(temp28);
        temp29.Value = "ID Card Number:";
        temp3.PlaceholderText = "Enter here...";
        temp3.FontSize = 25f;
        temp3.Alignment = Fuse.Elements.Alignment.Top;
        temp3.Bindings.Add(temp30);
        temp31.Value = "Car model number:";
        temp4.PlaceholderText = "Enter here...";
        temp4.FontSize = 25f;
        temp4.Alignment = Fuse.Elements.Alignment.Top;
        temp4.Bindings.Add(temp32);
        temp33.Value = "Add car photo:";
        temp5.PlaceholderText = "Enter here...";
        temp5.FontSize = 25f;
        temp5.Alignment = Fuse.Elements.Alignment.Top;
        temp5.Bindings.Add(temp34);
        temp35.Value = "Vehicle number:";
        temp6.PlaceholderText = "Enter here...";
        temp6.FontSize = 25f;
        temp6.Alignment = Fuse.Elements.Alignment.Top;
        temp6.Bindings.Add(temp36);
        temp7.Text = "Submit";
        temp7.Color = float4(0f, 0f, 0f, 0f);
        temp7.Alignment = Fuse.Elements.Alignment.Left;
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb6.OnEvent);
        temp7.Bindings.Add(temp37);
        temp7.Bindings.Add(temp_eb6);
        temp38.Text = "Go Back";
        temp38.Color = float4(0f, 0f, 0f, 0f);
        temp38.Alignment = Fuse.Elements.Alignment.Left;
        global::Fuse.Gestures.Clicked.AddHandler(temp38, temp_eb7.OnEvent);
        temp38.Bindings.Add(temp_eb7);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb6);
        __g_nametable.Objects.Add(temp_eb7);
        this.Children.Add(temp18);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "IsEnabled";
}
