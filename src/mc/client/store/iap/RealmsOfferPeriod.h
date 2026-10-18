#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsOfferPeriod : int {
    Offer30Days  = 0,
    Offer180Days = 1,
    OfferMonthly = 2,
};
#else // @header-generator platform
enum class RealmsOfferPeriod : int {};
#endif // @header-generator platform
