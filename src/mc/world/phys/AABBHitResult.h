#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#else // @header-generator platform
#include "mc/common/FacingID.h"
#endif // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

struct AABBHitResult {
public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    Vec3     mStartPos;
    Vec3     mRayDir;
    Vec3     mPos;
    BlockPos mBlock;
    FacingID mFacing;
    bool     mIsHit;
#endif // @header-generator platform
};
