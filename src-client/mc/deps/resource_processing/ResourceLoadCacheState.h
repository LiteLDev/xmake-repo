#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct ResourceLoadCacheState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> processUptimeInMs;
    ::ll::TypedStorage<1, 1, bool>  isFirstSessionLaunch;
    ::ll::TypedStorage<1, 1, bool>  isFirstWorldLaunch;
    ::ll::TypedStorage<4, 4, int>   timeSinceLastLoadInS;
    ::ll::TypedStorage<4, 4, uint>  tColdInS;
    ::ll::TypedStorage<4, 4, int>   packCacheHitRatioPct;
    // NOLINTEND
};

} // namespace Bedrock::Resources
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
