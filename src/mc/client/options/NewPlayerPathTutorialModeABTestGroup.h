#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class NewPlayerPathTutorialModeABTestGroup : int {
    Uninitialized = 0,
    Control       = 1,
    Enabled       = 2,
    Count         = 3,
};
#else // @header-generator platform
enum class NewPlayerPathTutorialModeABTestGroup : int {};
#endif // @header-generator platform
