#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraFadeAnimation {
public:
    // CameraFadeAnimation inner types declare
    // clang-format off
    struct Keyframe;
    // clang-format on

    // CameraFadeAnimation inner types define
    struct Keyframe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mTime;
        ::ll::TypedStorage<4, 4, float> mValue;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CameraFadeAnimation::Keyframe>> mKeyframes;
    ::ll::TypedStorage<4, 4, float>                                       mCurrentValue;
    ::ll::TypedStorage<4, 4, float>                                       mElapsedTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraFadeAnimation::Keyframe>> mKeyframes;
    ::ll::TypedStorage<4, 4, float>                                           mCurrentValue;
    ::ll::TypedStorage<4, 4, float>                                           mElapsedTime;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraFadeAnimation();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addKeyframe(float, float);

    MCNAPI void addFade(float, float, float, float);

    MCNAPI void advanceTime(float);

    MCNAPI float getCurrentValue() const;

    MCNAPI bool isActive() const;

    MCNAPI void reset();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _addKeyframe(float time, float value);

    MCAPI void addFade(float inTime, float requestedHoldTime, float outTime, float targetAlpha);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
