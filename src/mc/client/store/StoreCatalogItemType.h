#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class StoreCatalogItemType : int {
    None            = 0,
    Durable         = 1,
    OfferCollection = 2,
    Bundle          = 3,
};
#else // @header-generator platform
enum class StoreCatalogItemType : int {};
#endif // @header-generator platform
