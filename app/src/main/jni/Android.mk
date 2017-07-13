LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := native-camera2-jni.cpp
LOCAL_MODULE:= native-camera2-jni

LOCAL_LDLIBS := -landroid -llog

LOCAL_SHARED_LIBRARIES := camera2ndk
include $(BUILD_SHARED_LIBRARY)

include $(LOCAL_PATH)/../../../../camera2ndk/Android.mk