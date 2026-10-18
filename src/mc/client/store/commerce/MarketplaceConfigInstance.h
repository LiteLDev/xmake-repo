#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MarketplaceConfigInstance : int {
    Primary   = 0,
    Secondary = 1,
};
#else // @header-generator platform
enum class MarketplaceConfigInstance : int {};
#endif // @header-generator platform
