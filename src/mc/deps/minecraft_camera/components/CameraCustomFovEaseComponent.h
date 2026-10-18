#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraCustomFovEaseComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mClearCustomFov;
    ::ll::TypedStorage<4, 4, float>                          mPreviousCustomFov;
    ::ll::TypedStorage<4, 4, float>                          mPercentage;
    ::ll::TypedStorage<4, 4, float>                          mBlendTime;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)> mEaseFunction;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraCustomFovEaseComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mClearCustomFov;
    ::ll::TypedStorage<4, 4, float>                          mPreviousCustomFov;
    ::ll::TypedStorage<4, 4, float>                          mPercentage;
    ::ll::TypedStorage<4, 4, float>                          mBlendTime;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)> mEaseFunction;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraCustomFovEaseComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
