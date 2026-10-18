#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, uchar>   mFacingId;
        ::ll::TypedStorage<4, 12, ::Vec3> mPos;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1>  mUnk8a79b6;
        ::ll::UntypedStorage<4, 12> mUnk47f7be;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Sides = std::array<CameraAimAssist::BlockTarget::Side, 3>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        Side& operator=(Side const&);
        Side(Side const&);
        Side();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mBlockPos;
    ::ll::TypedStorage<4, 4, float>                                              mPriorityPercentage;
    ::ll::TypedStorage<4, 48, std::array<CameraAimAssist::BlockTarget::Side, 3>> mSides;
    ::ll::TypedStorage<1, 1, uchar>                                              mSidesCount;
    ::ll::TypedStorage<1, 1, bool>                                               mIsLiquid;
    ::ll::TypedStorage<1, 1, bool>                                               mIsFlowingLiquid;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk300108;
    ::ll::UntypedStorage<4, 4>  mUnk143c79;
    ::ll::UntypedStorage<4, 48> mUnk24f778;
    ::ll::UntypedStorage<1, 1>  mUnkea9b6a;
    ::ll::UntypedStorage<1, 1>  mUnk3061e4;
    ::ll::UntypedStorage<1, 1>  mUnk268e0e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockTarget& operator=(BlockTarget const&);
    BlockTarget(BlockTarget const&);
    BlockTarget();
#endif // @header-generator platform
};

} // namespace CameraAimAssist
