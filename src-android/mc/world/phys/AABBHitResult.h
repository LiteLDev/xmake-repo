#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

struct AABBHitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>     mStartPos;
    ::ll::TypedStorage<4, 12, ::Vec3>     mRayDir;
    ::ll::TypedStorage<4, 12, ::Vec3>     mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlock;
    ::ll::TypedStorage<1, 1, uchar>       mFacing;
    ::ll::TypedStorage<1, 1, bool>        mIsHit;
    // NOLINTEND

public:
    // prevent constructor by default
    AABBHitResult();
};
