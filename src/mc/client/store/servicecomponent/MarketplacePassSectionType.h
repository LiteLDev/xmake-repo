#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MarketplacePassSectionType : int {
    NOT_SPECIFIED = 0,
    ICONS         = 1,
    PACKS         = 2,
    TEXT          = 3,
};
#else // @header-generator platform
enum class MarketplacePassSectionType : int {};
#endif // @header-generator platform
