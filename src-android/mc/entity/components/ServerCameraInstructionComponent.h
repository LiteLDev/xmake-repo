#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"

struct ServerCameraInstructionComponent {
public:
    // ServerCameraInstructionComponent inner types declare
    // clang-format off
    struct EaseOption;
    // clang-format on

    // ServerCameraInstructionComponent inner types define
    struct EaseOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::EasingType> mEaseType;
        ::ll::TypedStorage<4, 12, ::Vec3>      mStartPos;
        ::ll::TypedStorage<4, 4, int>          mCurrentTick;
        ::ll::TypedStorage<4, 4, int>          mTotalTicks;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                         mPresetIndex;
    ::ll::TypedStorage<4, 28, std::optional<ServerCameraInstructionComponent::EaseOption>> mEase;
    // NOLINTEND
};
