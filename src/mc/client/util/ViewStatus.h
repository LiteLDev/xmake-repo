#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ViewStatus : int {
    Loading    = 0,
    JustLoaded = 1,
    Viewable   = 2,
};
#else // @header-generator platform
enum class ViewStatus : int {};
#endif // @header-generator platform
