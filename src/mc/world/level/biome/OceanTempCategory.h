#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OceanTempCategory : int {
#if defined(LL_PLAT_A) // @header-generator platform
    COLD = 0,
    WARM = 1,
#else // @header-generator platform
    Cold = 0,
    Warm = 1,
#endif // @header-generator platform
};
