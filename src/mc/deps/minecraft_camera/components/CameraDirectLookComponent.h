#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraDirectLookComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mYaw;
    ::ll::TypedStorage<4, 4, float> mPitch;
    ::ll::TypedStorage<4, 4, float> mYawDelta;
    ::ll::TypedStorage<4, 4, float> mPitchMin;
    ::ll::TypedStorage<4, 4, float> mPitchMax;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraDirectLookComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mYaw;
    ::ll::TypedStorage<4, 4, float> mPitch;
    ::ll::TypedStorage<4, 4, float> mYawDelta;
    ::ll::TypedStorage<4, 4, float> mPitchMin;
    ::ll::TypedStorage<4, 4, float> mPitchMax;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraDirectLookComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
