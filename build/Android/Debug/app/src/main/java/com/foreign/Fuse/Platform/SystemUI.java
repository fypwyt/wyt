package com.foreign.Fuse.Platform;

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

// user defined imports
import android.annotation.SuppressLint;
import android.app.ActionBar;
import android.app.Activity;
import android.os.Build;
import android.util.DisplayMetrics;
import android.view.Gravity;
import android.view.View.OnLayoutChangeListener;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;
import android.view.WindowManager;
import android.widget.FrameLayout;
import java.lang.reflect.Method;

public class SystemUI
{
    static void debug_log(Object message)
    {
        android.util.Log.d("LoginPage", (message==null ? "null" : message.toString()));
    }

    public static void Attach64(final Object _layout)
    {
        FrameLayout layout = (FrameLayout)_layout;
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToGet65()!=null) { return; }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToSet65(layout,UnoHelper.GetUnoObjectRef(layout));
        layout.getViewTreeObserver().addOnGlobalLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet66()));
    }
    
    public static void CalcRealSizes67()
    {
        //cache initialSize so we have something sane
        android.view.Display display = com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay();
        if (android.os.Build.VERSION.SDK_INT >= 17) {
        	//new pleasant way to get real metrics
        	DisplayMetrics realMetrics = new DisplayMetrics();
        	display.getRealMetrics(realMetrics);
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet68(realMetrics.widthPixels);
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet69(realMetrics.heightPixels);
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
        	//reflection for this weird in-between time
        	try {
        		Method mGetRawH = android.view.Display.class.getMethod("getRawHeight");
        		Method mGetRawW = android.view.Display.class.getMethod("getRawWidth");
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet68((Integer)mGetRawW.invoke(display));
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet69((Integer)mGetRawH.invoke(display));
        	} catch (Exception e) {
        		//this may not be 100% accurate, but it's all we've got
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet68(display.getWidth());
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet69(display.getHeight());
        	}
        } else {
        	//This should be close, as lower API devices should not have window navigation bars
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet68(display.getWidth());
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet69(display.getHeight());
        }
        
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet70()!=null) {
        	int tmp = ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet70()).getWidth();
        	if (tmp!=0 && tmp!= ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightGet69() && ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthGet68()!=tmp) {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet68(tmp);
        	}
        }
    }
    
    public static void CreateLayouts71()
    {
        Activity activity = com.fuse.Activity.getRootActivity();
        
        FrameLayout superLayout = new FrameLayout(activity);
        FrameLayout rootLayout = new FrameLayout(activity);
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutSet70(superLayout,UnoHelper.GetUnoObjectRef(superLayout));
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutSet72(rootLayout,UnoHelper.GetUnoObjectRef(rootLayout));
        superLayout.addOnLayoutChangeListener((OnLayoutChangeListener)com.foreign.Fuse.Platform.SystemUI.MakePostV11LayoutChangeListener73());
        
        superLayout.addView(((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()));
        com.foreign.Fuse.Platform.SystemUI.SetFrame74(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72(), 0, 0, ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight75());
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI76();
    }
    
    public static void Detach77()
    {
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToGet65()!=null) {
        	if (android.os.Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()).getViewTreeObserver().removeOnGlobalLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet66()));
        	} else {
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()).getViewTreeObserver().removeGlobalOnLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet66()));
        	}
        }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToSet65(null,UnoHelper.GetUnoObjectRef(null));
    }
    
    public static void EnterFullscreen78()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run() {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet79(2);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 19) {
        		com.foreign.Fuse.Platform.SystemUI.HideStatusBar80();
        	} else {
        		View decorView = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
        		// Hide the status bar.
        		decorView.setSystemUiVisibility(
        				View.SYSTEM_UI_FLAG_LAYOUT_STABLE
        				| View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
        				| View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
        				| View.SYSTEM_UI_FLAG_HIDE_NAVIGATION // hide nav bar
        				| View.SYSTEM_UI_FLAG_FULLSCREEN // hide status bar
        				| View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY);
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar81();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI76();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged82((int)0);
        }});
    }
    
    public static float GetDensity83()
    {
        DisplayMetrics m = (DisplayMetrics)com.foreign.Fuse.Platform.SystemUI.GetDisplayMetrics84();
        return m.density;
    }
    
    public static Object GetDisplayMetrics84()
    {
        DisplayMetrics metrics = new DisplayMetrics();
        if (android.os.Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN_MR1) {
        	com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay().getRealMetrics(metrics);
        	return metrics;
        } else {
        	com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay().getMetrics(metrics);
        	return metrics;
        }
    }
    
    public static float GetStatusBarHeight85()
    {
        int result = 0;
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateGet79()==0)
        {
        	int resourceId = com.fuse.Activity.getRootActivity().getResources().getIdentifier("status_bar_height", "dimen", "android");
        	if (resourceId > 0)
        	{
        		result = com.fuse.Activity.getRootActivity().getResources().getDimensionPixelSize(resourceId);
        	}
        	if (result == 0)
        	{
        		if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet86())
        		{
        		result = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet87();
        		}
        	} else {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet86(true);
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet87(result);
        	}
        }
        return (float)result;
    }
    
    public static int GetSuperLayoutHeight88()
    {
        return (int)((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet70()).getHeight();
    }
    
    public static void HideActionBar81()
    {
        // ActionBar is ugly, hide it
        // details: http://stackoverflow.com/a/14167949/574033
        ActionBar actionBar = com.fuse.Activity.getRootActivity().getActionBar();
        
        if (actionBar!=null)
        	actionBar.hide();
        
    }
    
    public static void HideStatusBar80()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run()
        {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet79(1);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 16) {
        		com.fuse.Activity.getRootActivity().getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN);
        	} else {
        		View decorView = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
        		// Hide the status bar.
        		decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN);
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar81();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI76();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged82((int)0);
        }});
    }
    
    public static void HookOntoRawActivityEvents89()
    {
        com.fuse.Activity.SubscribeToLifecycleChange(new com.fuse.Activity.ActivityListener()
        {
        	@Override public void onStop() {}
        	@Override public void onStart() {}
        	@Override public void onWindowFocusChanged(boolean hasFocus) {}
        
        	@Override public void onPause() { com.foreign.Fuse.Platform.SystemUI.OnPause90(); }
        	@Override public void onResume() { com.foreign.Fuse.Platform.SystemUI.OnResume91(); }
        	@Override public void onDestroy() { ExternedBlockHost.callUno_Fuse_Platform_SystemUI_OnDestroy92(); }
        	@Override public void onConfigurationChanged(android.content.res.Configuration config) { ExternedBlockHost.callUno_Fuse_Platform_SystemUI_OnConfigChanged93(); }
        });
    }
    
    public static Object MakePostV11LayoutChangeListener73()
    {
        return new OnLayoutChangeListener() {
        
        	int lastWidth = (int)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth94();
        	int lastHeight = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight75();
        
        	@Override
        		public void onLayoutChange(View v, int left, int top, int right, int bottom, int oldLeft, int oldTop, int oldRight, int oldBottom) {
        		int newWidth = right - left;
        		int newHeight = bottom - top;
        		if (newWidth!=lastWidth || newHeight!=lastHeight) {
        			lastHeight = newHeight;
        			lastWidth = newWidth;
        			ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnConfigChanged95();
        			ViewTreeObserver.OnGlobalLayoutListener kl = ((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet66());
        			if (kl!=null) ExternedBlockHost.callUno_Fuse_Platform_SystemUI_ResendFrameSizes96();
        		}
        	}
        };
    }
    
    public static void OnCreate97()
    {
        Activity activity = com.fuse.Activity.getRootActivity();
        
        // status bar
        activity.getWindow().requestFeature(Window.FEATURE_ACTION_BAR);
        
        	com.foreign.Fuse.Platform.SystemUI.HideActionBar81();
        
        
        // layouts
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet70()==null) com.foreign.Fuse.Platform.SystemUI.CreateLayouts71();
        activity.getWindow().setContentView(((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet70()));
        ViewTreeObserver.OnGlobalLayoutListener kl = new ViewTreeObserver.OnGlobalLayoutListener() { public void onGlobalLayout() { com.foreign.Fuse.Platform.SystemUI.unoOnGlobalLayout98(); }};
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerSet66(kl,UnoHelper.GetUnoObjectRef(kl));
        com.foreign.Fuse.Platform.SystemUI.Attach64(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72());
        com.foreign.Fuse.Platform.SystemUI.HookOntoRawActivityEvents89();
    }
    
    public static void OnPause90()
    {
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()).setVisibility(View.GONE);
    }
    
    public static void OnResume91()
    {
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_UpdateStatusBar99();
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()).setVisibility(View.VISIBLE);
    }
    
    public static void SetAsRootView100(final Object view)
    {
        com.foreign.Fuse.Platform.SystemUI.OnCreate97();
        
        final View uview = (View)view;
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run() {
        	if (uview==null)
        	{
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()).removeAllViews();
        	}
        	else
        	{
        		if (((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()).getChildCount()>0)
        		{
        			((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()).removeAllViews();
        		}
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet72()).addView(uview, 0);
        	}
        }});
    }
    
    public static void SetFrame74(final Object view,final int originX,final int originY,final int height)
    {
        int width = FrameLayout.LayoutParams.MATCH_PARENT;
        	View uview = (View)view;
        	FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(width,height);
        	if (android.os.Build.VERSION.SDK_INT < 14) {
        		lp.gravity = Gravity.TOP;
        	}
        	lp.leftMargin = originX;
        	lp.topMargin = originY;
        	uview.setLayoutParams(lp);
    }
    
    public static void ShowStatusBar101()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run()
        {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet79(0);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 16)
        	{
        		com.fuse.Activity.getRootActivity().getWindow().clearFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
        	} else {
        		View decorView = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
        		// Hide the status bar.
        		decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_VISIBLE);
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar81();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI76();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged82((int)(int)com.foreign.Fuse.Platform.SystemUI.GetStatusBarHeight85());
        }});
    }
    
    public static void unoOnGlobalLayout98()
    {
        int heightDiff = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight75()-((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet70()).getHeight();
        heightDiff -= com.foreign.Fuse.Platform.SystemUI.GetStatusBarHeight85();
        int contentViewTop = com.fuse.Activity.getRootActivity().getWindow().findViewById(Window.ID_ANDROID_CONTENT).getTop();
        boolean keyboardClosed = (heightDiff-contentViewTop)<(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight75()/4);
        if (heightDiff!=ExternedBlockHost.callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet102() || ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet103()) {
        	if (keyboardClosed) {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_onHideKeyboard104((int)heightDiff,(boolean)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet103());
        	} else {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_onShowKeyboard105((int)heightDiff,(boolean)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet103());
        	}
        }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingSet103(false);
    }
    
}
