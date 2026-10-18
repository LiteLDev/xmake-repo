#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsOfferType : int {
    OfferConsumable   = 0,
    OfferSubscription = 1,
};
#else // @header-generator platform
enum class RealmsOfferType : int {};
#endif // @header-generator platform
