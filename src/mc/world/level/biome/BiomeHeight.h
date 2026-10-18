#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeHeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDepth;
    ::ll::TypedStorage<4, 4, float> mScale;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BiomeHeight();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MIN_DEPTH();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
