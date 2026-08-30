#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"

namespace CameraAimAssistSystemUtil {

struct BlockHitDetectResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<4, 24, ::AABB>     mHitBox;
    ::ll::TypedStorage<1, 1, uchar>       mFacing;
    ::ll::TypedStorage<4, 4, int>         mPriority;
    ::ll::TypedStorage<1, 1, bool>        mIsHit;
    ::ll::TypedStorage<1, 1, bool>        mIsLiquid;
    ::ll::TypedStorage<1, 1, bool>        mIsFlowingLiquid;
    ::ll::TypedStorage<1, 1, bool>        mIsExcluded;
    // NOLINTEND
};

} // namespace CameraAimAssistSystemUtil
