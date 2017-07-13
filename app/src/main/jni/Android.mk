LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := native-camera2-jni.cpp
LOCAL_MODULE:= native-camera2-jni

LOCAL_LDLIBS := -landroid -llog

LOCAL_SHARED_LIBRARIES := camera2ndk
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../../../camera2ndk/include
LOCAL_SRC_FILES := $(NDK_ROOT)/platforms/android-24/arch-arm/usr/lib/libcamera2ndk.so
LOCAL_MODULE:= camera2ndk
include $(PREBUILT_SHARED_LIBRARY)