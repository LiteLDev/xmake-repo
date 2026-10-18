#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class XboxSandboxEnvironment : int {
    Retail         = 0,
    Dev            = 1,
    DevAchievement = 2,
    Count          = 3,
};
#else // @header-generator platform
enum class XboxSandboxEnvironment : int {};
#endif // @header-generator platform
