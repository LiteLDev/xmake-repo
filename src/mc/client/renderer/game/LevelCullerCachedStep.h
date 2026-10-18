#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct LevelCullerCachedStep {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mRawIdx;
    ::ll::TypedStorage<1, 1, schar> mX;
    ::ll::TypedStorage<1, 1, schar> mY;
    ::ll::TypedStorage<1, 1, schar> mZ;
    ::ll::TypedStorage<1, 1, uchar> mPadding;
    // NOLINTEND
};
#else // @header-generator platform
struct LevelCullerCachedStep {};
#endif // @header-generator platform
