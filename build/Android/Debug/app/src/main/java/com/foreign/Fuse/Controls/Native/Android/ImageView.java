package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class ImageView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("LoginPage", (message==null ? "null" : message.toString()));
    }

    public static void ClearBitmap135(final Object handle)
    {
        ((android.widget.ImageView)handle).setImageResource(0);
        ((android.widget.ImageView)handle).invalidate();
    }
    
    public static Object Create136(final Object container)
    {
        android.widget.FrameLayout frameLayout = (android.widget.FrameLayout)container;
        android.widget.ImageView imageView = new android.widget.ImageView(com.fuse.Activity.getRootActivity());
        imageView.setScaleType(android.widget.ImageView.ScaleType.MATRIX);
        imageView.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        frameLayout.addView(imageView);
        return imageView;
    }
    
    public static Object CreateContainer137()
    {
        android.widget.FrameLayout frameLayout = new android.widget.FrameLayout(com.fuse.Activity.getRootActivity());
        frameLayout.setFocusable(true);
        frameLayout.setFocusableInTouchMode(true);
        frameLayout.setClipToPadding(true);
        frameLayout.setClipChildren(true);
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        return frameLayout;
    }
    
    public static void GetImageSize138(final Object handle,final com.uno.IntArray wh)
    {
        android.widget.ImageView imageView = (android.widget.ImageView)handle;
        imageView.measure(
        	android.view.View.MeasureSpec.UNSPECIFIED,
        	android.view.View.MeasureSpec.UNSPECIFIED);
        wh.set(0, imageView.getMeasuredWidth());
        wh.set(1, imageView.getMeasuredHeight());
    }
    
    public static void SetBitmap139(final Object handle,final Object bitmapHandle)
    {
        ((android.widget.ImageView)handle).setImageBitmap( (android.graphics.Bitmap)bitmapHandle );
        ((android.widget.ImageView)handle).invalidate();
    }
    
    public static void SetTint140(final Object handle,final int rgba)
    {
        android.graphics.drawable.Drawable drawable = ((android.widget.ImageView)handle).getDrawable();
        if (drawable != null) {
        	drawable.setColorFilter(rgba, android.graphics.PorterDuff.Mode.MULTIPLY);
        }
    }
    
    public static void UpdateImageTransform1141(final Object handle,final float x,final float y,final float scaleX,final float scaleY)
    {
        android.widget.ImageView imageView = (android.widget.ImageView)handle;
        float[] m = new float[]
        {
        	scaleX, 0.0f, 	x,
        	0.0f,	scaleY, y,
        	0.0f,	0.0f,	1.0f
        };
        android.graphics.Matrix matrix = new android.graphics.Matrix();
        matrix.setValues(m);
        imageView.setImageMatrix(matrix);
    }
    
}
