#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
