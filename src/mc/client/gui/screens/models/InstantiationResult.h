#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class InstantiationResult : uchar {
    FailCopy         = 0,
    FailVerification = 1,
    FailFinalize     = 2,
    Success          = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class InstantiationResult : uchar {
    FailCopy         = 0,
    FailVerification = 1,
    FailFinalize     = 2,
    Success          = 3,
};
#else // @header-generator platform
enum class InstantiationResult : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
