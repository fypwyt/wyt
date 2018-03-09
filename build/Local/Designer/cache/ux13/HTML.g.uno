[Uno.Compiler.UxGenerated]
public partial class HTML: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb11;
    internal global::Fuse.Reactive.EventBinding temp_eb12;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb11",
        "temp_eb12"
    };
    static HTML()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HTML(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("onPageLoaded");
        var temp1 = new global::Fuse.Reactive.Data("goBack");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.DockPanel();
        var temp4 = new global::Fuse.Controls.NativeViewHost();
        var temp5 = new global::Fuse.Controls.WebView();
        var temp6 = new global::Fuse.Triggers.PageLoaded();
        var temp7 = new global::Fuse.Triggers.Actions.EvaluateJS();
        temp_eb11 = new global::Fuse.Reactive.EventBinding(temp);
        var temp8 = new global::Fuse.Controls.ScrollView();
        var temp9 = new global::Fuse.Controls.Button();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp1);
        temp2.LineNumber = 3;
        temp2.FileName = "Pages/HTML.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/HTML.js"));
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp8);
        temp4.Children.Add(temp5);
        temp5.Url = "http://www.google.com";
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Fill);
        temp5.Children.Add(temp6);
        temp6.Actions.Add(temp7);
        temp6.Bindings.Add(temp_eb11);
        temp7.JavaScript = "\n                        var result = {\n                            url : document.location.href\n                        };\n                        return result;\n                    ";
        temp7.Handler += temp_eb11.OnEvent;
        temp8.ClipToBounds = true;
        temp8.Children.Add(temp9);
        temp9.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb12.OnEvent);
        temp9.Bindings.Add(temp_eb12);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb11);
        __g_nametable.Objects.Add(temp_eb12);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
}
