#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class Fulfillment : int {
    Unfulfilled = 0,
    Fulfilled   = 1,
    _Unknown    = 2,
};
#else // @header-generator platform
enum class Fulfillment : int {};
#endif // @header-generator platform
