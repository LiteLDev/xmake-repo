#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RidingOffsetInterpolationPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mCurrentOffset;
    ::ll::TypedStorage<4, 4, float> mPreviousOffset;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkaaecd5;
    ::ll::UntypedStorage<4, 4> mUnkced4c9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RidingOffsetInterpolationPair& operator=(RidingOffsetInterpolationPair const&);
    RidingOffsetInterpolationPair(RidingOffsetInterpolationPair const&);
    RidingOffsetInterpolationPair();
#endif // @header-generator platform
};
