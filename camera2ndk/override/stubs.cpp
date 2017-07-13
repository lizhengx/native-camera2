//
// Created by Alex Cohn on 12/07/2017.
//

#include <android/hardware/BnCameraServiceListener.h>
#include <camera/VendorTagDescriptor.h>
#include <camera/ICameraService.h>
#include <gui/Surface.h>
#include <camera/camera2/OutputConfiguration.h>
#include <camera/camera2/SubmitInfo.h>
#include <camera/camera2/CaptureRequest.h>

namespace android {

    VendorTagDescriptor::VendorTagDescriptor() {}

    sp<ICameraService> ICameraService::asInterface(sp<IBinder> const & t) { return nullptr; }

    status_t BnCameraServiceListener::onTransact(unsigned int, Parcel const &, Parcel *,
                                        unsigned int) { return OK; }
    status_t BnCameraDeviceCallbacks::onTransact(unsigned int, android::Parcel const &, android::Parcel *,
                                        unsigned int) { return OK; }

    const camera_metadata_t* CameraMetadata::getAndLock() { return nullptr; }
    status_t CameraMetadata::unlock(camera_metadata const *) { return OK; }

    namespace hardware {
        namespace camera2 {
            status_t CaptureRequest::readFromParcel(const Parcel* parcel) { return OK; }
            status_t CaptureRequest::writeToParcel(Parcel *parcel) const { return OK; }
            namespace utils {
                status_t SubmitInfo::writeToParcel(Parcel *parcel) const { return OK; }
                status_t SubmitInfo::readFromParcel(const Parcel* parcel) { return OK; }
            }
            namespace params {
                const int OutputConfiguration::INVALID_ROTATION = -1;
                const int OutputConfiguration::INVALID_SET_ID = -1;
                OutputConfiguration::OutputConfiguration():
                        mGbp(NULL), mRotation(INVALID_ROTATION), mSurfaceSetID(INVALID_SET_ID) {};
                OutputConfiguration::OutputConfiguration(sp<IGraphicBufferProducer>& gbp, int rotation, int surfaceSetID):
                        mGbp(gbp), mRotation(rotation), mSurfaceSetID(surfaceSetID) {};
                int OutputConfiguration::getWidth() const { return mWidth; }
                int OutputConfiguration::getHeight() const { return mHeight; }
                status_t OutputConfiguration::writeToParcel(Parcel *parcel) const { return OK; }
                status_t OutputConfiguration::readFromParcel(const Parcel* parcel) { return OK; }
            }
        }
    }

}