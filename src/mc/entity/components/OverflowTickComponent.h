#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverflowTickComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mAccumulatedTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mAccumulatedTicks;
#endif // @header-generator platform
    // NOLINTEND
};
