#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementDirectionalFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> directionMask;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& FACES_LIMIT();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
