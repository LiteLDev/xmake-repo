#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinHash {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>     geoLength;
    ::ll::TypedStorage<8, 64, ulong[8]> shaData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>     geoLength;
    ::ll::TypedStorage<8, 64, uint64[8]> shaData;
#endif // @header-generator platform
    // NOLINTEND
};
