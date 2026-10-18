#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace CameraAimAssistSystemUtil {

struct BlockHitDetectResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<4, 24, ::AABB>     mHitBox;
    ::ll::TypedStorage<1, 1, uchar>       mFacing;
    ::ll::TypedStorage<4, 4, int>         mPriority;
    ::ll::TypedStorage<1, 1, bool>        mIsHit;
    ::ll::TypedStorage<1, 1, bool>        mIsLiquid;
    ::ll::TypedStorage<1, 1, bool>        mIsFlowingLiquid;
    ::ll::TypedStorage<1, 1, bool>        mIsExcluded;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk2366b3;
    ::ll::UntypedStorage<4, 24> mUnka68dbe;
    ::ll::UntypedStorage<1, 1>  mUnk7f5fc3;
    ::ll::UntypedStorage<4, 4>  mUnk6fad3d;
    ::ll::UntypedStorage<1, 1>  mUnkc9c3e8;
    ::ll::UntypedStorage<1, 1>  mUnk649b07;
    ::ll::UntypedStorage<1, 1>  mUnk6dc6dc;
    ::ll::UntypedStorage<1, 1>  mUnkcddc10;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockHitDetectResult& operator=(BlockHitDetectResult const&);
    BlockHitDetectResult(BlockHitDetectResult const&);
    BlockHitDetectResult();
#endif // @header-generator platform
};

} // namespace CameraAimAssistSystemUtil
