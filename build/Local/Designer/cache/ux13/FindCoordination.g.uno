[Uno.Compiler.UxGenerated]
public partial class FindCoordination: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<bool> temp3_IsEnabled_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    internal global::Fuse.Reactive.EventBinding temp_eb9;
    internal global::Fuse.Reactive.EventBinding temp_eb10;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb8",
        "temp_eb9",
        "temp_eb10"
    };
    static FindCoordination()
    {
    }
    [global::Uno.UX.UXConstructor]
    public FindCoordination(
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
        var temp4 = new global::Fuse.Reactive.Data("err");
        var temp1 = new global::Fuse.Controls.TextBox();
        temp1_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("search");
        var temp2 = new global::Fuse.Controls.TextBox();
        temp2_Value_inst = new LoginPage_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("search2");
        var temp3 = new global::Fuse.Controls.Button();
        temp3_IsEnabled_inst = new LoginPage_FuseVisual_IsEnabled_Property(temp3, __selector1);
        var temp7 = new global::Fuse.Reactive.Data("inputed");
        var temp8 = new global::Fuse.Reactive.Data("searchCoordinate");
        var temp9 = new global::Fuse.Reactive.Data("findDistance");
        var temp10 = new global::Fuse.Reactive.Data("goBack");
        var temp11 = new global::Fuse.Controls.DockPanel();
        var temp12 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp13 = new global::Fuse.Controls.StatusBarBackground();
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Controls.ScrollView();
        var temp16 = new global::Fuse.Controls.StackPanel();
        var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp19 = new global::Fuse.Reactive.DataBinding(temp3_IsEnabled_inst, temp7, Fuse.Reactive.BindingMode.Default);
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp8);
        var temp20 = new global::Fuse.Controls.Button();
        temp_eb9 = new global::Fuse.Reactive.EventBinding(temp9);
        var temp21 = new global::Fuse.Controls.Button();
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp10);
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp11.Children.Add(temp);
        temp11.Children.Add(temp15);
        temp12.LineNumber = 4;
        temp12.FileName = "Pages/FindCoordination.ux";
        temp12.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/FindCoordination.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp13, Fuse.Layouts.Dock.Top);
        temp.TextColor = float4(1f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp14);
        temp15.ClipToBounds = true;
        temp15.Children.Add(temp16);
        temp16.Children.Add(temp1);
        temp16.Children.Add(temp2);
        temp16.Children.Add(temp3);
        temp16.Children.Add(temp20);
        temp16.Children.Add(temp21);
        temp1.PlaceholderText = "Enter Start Location Street";
        temp1.FontSize = 25f;
        temp1.Alignment = Fuse.Elements.Alignment.Top;
        temp1.Bindings.Add(temp17);
        temp2.PlaceholderText = "Enter Destination Location Street";
        temp2.FontSize = 25f;
        temp2.Alignment = Fuse.Elements.Alignment.Top;
        temp2.Bindings.Add(temp18);
        temp3.Text = "Search";
        global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb8.OnEvent);
        temp3.Bindings.Add(temp19);
        temp3.Bindings.Add(temp_eb8);
        temp20.Text = "Find Distance";
        global::Fuse.Gestures.Clicked.AddHandler(temp20, temp_eb9.OnEvent);
        temp20.Bindings.Add(temp_eb9);
        temp21.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp21, temp_eb10.OnEvent);
        temp21.Bindings.Add(temp_eb10);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb8);
        __g_nametable.Objects.Add(temp_eb9);
        __g_nametable.Objects.Add(temp_eb10);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "IsEnabled";
}
