#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct SkinMemThresholds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> lowMemMb;
    ::ll::TypedStorage<8, 8, long> criticalMemMb;
    ::ll::TypedStorage<8, 8, long> skinCutoffSizeKb;
    // NOLINTEND
};
#else // @header-generator platform
struct SkinMemThresholds {};
#endif // @header-generator platform
