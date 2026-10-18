#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct VolumeMultiplier {
public:
    // VolumeMultiplier inner types declare
    // clang-format off
    struct EasingState;
    // clang-format on

    // VolumeMultiplier inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct EasingState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>        mStartValue;
        ::ll::TypedStorage<4, 4, float>        mTargetValue;
        ::ll::TypedStorage<4, 4, float>        mElapsedTime;
        ::ll::TypedStorage<4, 4, float>        mTotalTime;
        ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                         mCurrentMultiplier;
    ::ll::TypedStorage<4, 24, std::optional<VolumeMultiplier::EasingState>> mEasingState;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct EasingState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>        mStartValue;
        ::ll::TypedStorage<4, 4, float>        mTargetValue;
        ::ll::TypedStorage<4, 4, float>        mElapsedTime;
        ::ll::TypedStorage<4, 4, float>        mTotalTime;
        ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                             mCurrentMultiplier;
    ::ll::TypedStorage<4, 24, ::std::optional<::VolumeMultiplier::EasingState>> mEasingState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool advanceTime(float elapsedTime);
    // NOLINTEND
#else // @header-generator platform
    struct EasingState {};
#endif // @header-generator platform
#endif // @header-generator platform
};
