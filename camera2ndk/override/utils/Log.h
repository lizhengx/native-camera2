//
// Created by Alex Cohn on 11/07/2017.
//

#ifndef NATIVE_CAMERA2_LOG_H
#define NATIVE_CAMERA2_LOG_H

#include <android/log.h>
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define ALOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#endif //NATIVE_CAMERA2_LOG_H
