[Uno.Compiler.UxGenerated]
public partial class WhiteTextInput: Fuse.Controls.TextInput
{
    static WhiteTextInput()
    {
    }
    [global::Uno.UX.UXConstructor]
    public WhiteTextInput()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.PlaceholderColor = float4(1f, 1f, 1f, 0.5019608f);
        this.FontSize = 25f;
        this.TextColor = float4(1f, 1f, 1f, 1f);
        this.CaretColor = float4(1f, 1f, 1f, 1f);
    }
}
