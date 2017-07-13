#
# Copyright (C) 2015 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

LOCAL_PATH:= $(call my-dir)

ifneq ($(TARGET_BUILD_PDK), true)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:=                  \
    NdkCameraManager.cpp           \
    NdkCameraMetadata.cpp          \
    NdkCameraDevice.cpp            \
    NdkCaptureRequest.cpp          \
    NdkCameraCaptureSession.cpp    \
    impl/ACameraManager.cpp        \
    impl/ACameraMetadata.cpp       \
    impl/ACameraDevice.cpp         \
    impl/ACameraCaptureSession.cpp

LOCAL_MODULE:= libcamera2ndk

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include

LOCAL_SRC_FILES  += override/stubs.cpp
LOCAL_C_INCLUDES += $(LOCAL_PATH)/override
LOCAL_C_INCLUDES += $(LOCAL_PATH)/override/camera

LOCAL_C_INCLUDES += $(LOCAL_PATH)/system/core-include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/system/av-include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/system/native-include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/system/libhardware-include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/system/media-include/camera

LOCAL_CFLAGS += -DHAVE_PTHREADS -include stdint.h

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

LOCAL_CFLAGS += -fvisibility=hidden -D EXPORT='__attribute__ ((visibility ("default")))'
# LOCAL_CFLAGS += -Wall -Wextra -Werror

LOCAL_SHARED_LIBRARIES := \
    libbinder \
    libgui \
    libutils \
    libandroid_runtime \
    libcamera_client \
    libstagefright_foundation \
    libcutils \
    libcamera_metadata \

LOCAL_LDLIBS := -lmediandk -llog -latomic
include $(BUILD_SHARED_LIBRARY)

endif

LOCAL_PATH := $(LOCAL_PATH)/system/libs/armeabi-v7a
include $(CLEAR_VARS)
LOCAL_MODULE:= libbinder
LOCAL_SRC_FILES:= $(LOCAL_MODULE).so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= libgui
LOCAL_SRC_FILES:= $(LOCAL_MODULE).so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= libutils
LOCAL_SRC_FILES:= $(LOCAL_MODULE).so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= libandroid_runtime
LOCAL_SRC_FILES:= $(LOCAL_MODULE).so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= libcamera_client
LOCAL_SRC_FILES:= $(LOCAL_MODULE).so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= libstagefright_foundation
LOCAL_SRC_FILES:= $(LOCAL_MODULE).so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= libcutils
LOCAL_SRC_FILES:= $(LOCAL_MODULE).so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= libcamera_metadata
LOCAL_SRC_FILES:= $(LOCAL_MODULE).so
include $(PREBUILT_SHARED_LIBRARY)
