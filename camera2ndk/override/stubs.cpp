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
                sp<IGraphicBufferProducer> hardware::camera2::params::OutputConfiguration::getGraphicBufferProducer() const {
                    return mGbp;
                }
                int android::hardware::camera2::params::OutputConfiguration::getRotation() const {
                    return mRotation;
                }
                status_t OutputConfiguration::writeToParcel(Parcel *parcel) const {
                    // TODO: must implement
                    return OK;
                }
                status_t OutputConfiguration::readFromParcel(const Parcel* parcel) {
                    // TODO: must implement
                    return OK;
                }
            }
        }
    }

}