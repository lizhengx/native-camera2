//
// Created by Alex Cohn on 06/07/2017.
//

#ifndef NATIVE_CAMERA2_BNCAMERASERVICELISTENER_H
#define NATIVE_CAMERA2_BNCAMERASERVICELISTENER_H

#include <camera/ICameraServiceListener.h>
#include <camera/camera2/ICameraDeviceCallbacks.h>
#include <camera/CaptureResult.h>
#include <binder/Status.h>
namespace android {
    namespace hardware {
        using android::ICameraServiceListener;
        using android::BnCameraServiceListener;
    }
}

#endif //NATIVE_CAMERA2_BNCAMERASERVICELISTENER_H
