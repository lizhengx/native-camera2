//
// Created by Alex Cohn on 06/07/2017.
//

#ifndef NATIVE_CAMERA2_CAMERA3_H
#define NATIVE_CAMERA2_CAMERA3_H

/**
 * camera3_stream_rotation_t:
 *
 * The required counterclockwise rotation of camera stream.
 */
typedef enum camera3_stream_rotation {
    /* No rotation */
            CAMERA3_STREAM_ROTATION_0 = 0,
    /* Rotate by 90 degree counterclockwise */
            CAMERA3_STREAM_ROTATION_90 = 1,
    /* Rotate by 180 degree counterclockwise */
            CAMERA3_STREAM_ROTATION_180 = 2,
    /* Rotate by 270 degree counterclockwise */
            CAMERA3_STREAM_ROTATION_270 = 3
} camera3_stream_rotation_t;

#include_next <hardware/camera3.h>

#endif //NATIVE_CAMERA2_CAMERA3_H
