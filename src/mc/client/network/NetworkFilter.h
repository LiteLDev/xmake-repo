#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class NetworkFilter : int {
    OnlyOnWifi       = 0,
    WifiOrMobileData = 1,
};
#else // @header-generator platform
enum class NetworkFilter : int {};
#endif // @header-generator platform
