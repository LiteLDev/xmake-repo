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
    ::ll::TypedStorage<8, 24, std::vector<CameraFadeAnimation::Keyframe>> mKeyframes;
    ::ll::TypedStorage<4, 4, float>                                       mCurrentValue;
    ::ll::TypedStorage<4, 4, float>                                       mElapsedTime;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraFadeAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addKeyframe(float, float);

    MCNAPI void addFade(float, float, float, float);

    MCNAPI void advanceTime(float);

    MCNAPI float getCurrentValue() const;

    MCNAPI bool isActive() const;

    MCNAPI void reset();
    // NOLINTEND
};
