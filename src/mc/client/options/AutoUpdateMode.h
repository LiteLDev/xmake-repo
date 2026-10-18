#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class AutoUpdateMode : int {
    Off          = 0,
    WifiOnly     = 1,
    WithCellular = 2,
};
#else // @header-generator platform
enum class AutoUpdateMode : int {};
#endif // @header-generator platform
