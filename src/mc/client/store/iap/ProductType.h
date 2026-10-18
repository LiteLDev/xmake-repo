#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProductType : int {
    Game                = 0,
    Application         = 1,
    Durable             = 2,
    Consumable          = 3,
    UnmanagedConsumable = 4,
    Subscription        = 5,
    _Unknown            = 6,
};
#else // @header-generator platform
enum class ProductType : int {};
#endif // @header-generator platform
