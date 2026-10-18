#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class NavButtonLinksTo : int {
    NOT_SPECIFIED  = 0,
    DURABLE        = 1,
    QUERY_MANIFEST = 2,
    SEARCH         = 3,
};
#else // @header-generator platform
enum class NavButtonLinksTo : int {};
#endif // @header-generator platform
