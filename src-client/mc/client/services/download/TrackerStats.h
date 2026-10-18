#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrackerStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> downloadsPending;
    ::ll::TypedStorage<4, 4, int> downloading;
    ::ll::TypedStorage<4, 4, int> importsWaiting;
    ::ll::TypedStorage<4, 4, int> importsPending;
    ::ll::TypedStorage<4, 4, int> importing;
    ::ll::TypedStorage<4, 4, int> activeExclusiveDownloads;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
