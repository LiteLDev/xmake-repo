#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SaleInfoCategory : int {
    None                   = 0,
    RegularSale            = 1,
    DiscountForSubscribers = 2,
};
#else // @header-generator platform
enum class SaleInfoCategory : int {};
#endif // @header-generator platform
