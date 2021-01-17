LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := NDKTool-jni

LOCAL_SRC_FILES := NDKTool.c

include $(BUILD_SHARED_LIBRARY)