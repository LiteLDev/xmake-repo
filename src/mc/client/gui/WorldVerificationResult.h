#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class WorldVerificationResult : uchar {
    Valid    = 0,
    Invalid  = 1,
    Canceled = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WorldVerificationResult : uchar {
    Valid    = 0,
    Invalid  = 1,
    Canceled = 2,
};
#else // @header-generator platform
enum class WorldVerificationResult : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
