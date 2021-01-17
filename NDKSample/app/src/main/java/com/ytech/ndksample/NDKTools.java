package com.ytech.ndksample;

public class NDKTools {

    static {
        System.loadLibrary("NDKTool-jni");
    }

    public static native String getStringFromNative();
}
