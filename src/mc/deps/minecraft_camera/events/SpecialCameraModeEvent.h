#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpecialCameraModeEvent {
public:
    // SpecialCameraModeEvent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SpecialCameraMode : int {
        Invalid      = 0,
        TripodCamera = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SpecialCameraModeEvent::SpecialCameraMode> mMode;
    ::ll::TypedStorage<1, 1, bool>                                        mEnable;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class SpecialCameraMode : int {
        Invalid      = 0,
        TripodCamera = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SpecialCameraModeEvent::SpecialCameraMode> mMode;
    ::ll::TypedStorage<1, 1, bool>                                        mEnable;
    // NOLINTEND
#else // @header-generator platform
    enum class SpecialCameraMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
