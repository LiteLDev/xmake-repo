#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class InventoryDataSource : int {
    Unknown      = 0,
    StoreService = 1,
    Cache        = 2,
};
#else // @header-generator platform
enum class InventoryDataSource : int {};
#endif // @header-generator platform
