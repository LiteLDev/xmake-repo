#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SortBy : uint {
    Alphabetical  = 0,
    AverageRating = 1,
    Price         = 2,
    StartDate     = 3,
    Relevance     = 4,
    Installed     = 5,
    COUNT         = 6,
};
#else // @header-generator platform
enum class SortBy : uint {};
#endif // @header-generator platform

}
