#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RequirementCategory : int {
    PLATFORM  = 0,
    TREATMENT = 1,
    STORE     = 2,
    INVALID   = 3,
};
#else // @header-generator platform
enum class RequirementCategory : int {};
#endif // @header-generator platform
