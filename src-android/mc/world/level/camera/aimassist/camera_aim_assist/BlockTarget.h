#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

namespace CameraAimAssist {

class BlockTarget {
public:
    // BlockTarget inner types declare
    // clang-format off
    struct Side;
    // clang-format on

    // BlockTarget inner types define
    struct Side {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>   mFacingId;
        ::ll::TypedStorage<4, 12, ::Vec3> mPos;
        // NOLINTEND
    };

    using Sides = std::array<CameraAimAssist::BlockTarget::Side, 3>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mBlockPos;
    ::ll::TypedStorage<4, 4, float>                                              mPriorityPercentage;
    ::ll::TypedStorage<4, 48, std::array<CameraAimAssist::BlockTarget::Side, 3>> mSides;
    ::ll::TypedStorage<1, 1, uchar>                                              mSidesCount;
    ::ll::TypedStorage<1, 1, bool>                                               mIsLiquid;
    ::ll::TypedStorage<1, 1, bool>                                               mIsFlowingLiquid;
    // NOLINTEND
};

} // namespace CameraAimAssist
