#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsOfferNumber : int {
    None   = 0,
    Trial  = 1,
    First  = 2,
    Second = 3,
    Third  = 4,
};
#else // @header-generator platform
enum class RealmsOfferNumber : int {};
#endif // @header-generator platform
