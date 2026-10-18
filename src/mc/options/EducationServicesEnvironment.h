#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EducationServicesEnvironment : int {
    Development   = 0,
    Staging       = 1,
    Production    = 2,
    Local         = 3,
    PreProduction = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    COUNT         = 5,
#else // @header-generator platform
    Count         = 5,
#endif // @header-generator platform
};
