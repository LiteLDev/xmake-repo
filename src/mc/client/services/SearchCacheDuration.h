#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SearchCacheDuration : uint {
    None       = 0,
    Minutes_10 = 600,
    Minutes_30 = 1800,
    Hours_1    = 3600,
    Hours_2    = 7200,
    Hours_12   = 43200,
    Hours_24   = 86400,
    Week_1     = 604800,
};
#else // @header-generator platform
enum class SearchCacheDuration : uint {};
#endif // @header-generator platform
