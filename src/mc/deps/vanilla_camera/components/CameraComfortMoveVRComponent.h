#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraComfortMoveVRComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLinearYRemap;
    ::ll::TypedStorage<4, 4, float> mMaxLinearYRemap;
    ::ll::TypedStorage<4, 4, float> mStartYPos;
    ::ll::TypedStorage<4, 4, float> mAccumulatedDT;
    ::ll::TypedStorage<1, 1, bool>  mYMotionUp;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraComfortMoveVRComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLinearYRemap;
    ::ll::TypedStorage<4, 4, float> mMaxLinearYRemap;
    ::ll::TypedStorage<4, 4, float> mStartYPos;
    ::ll::TypedStorage<4, 4, float> mAccumulatedDT;
    ::ll::TypedStorage<1, 1, bool>  mYMotionUp;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraComfortMoveVRComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace VanillaCamera
