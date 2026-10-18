#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ToggleManagerBehavior : int {
    ClearAll   = 0,
    SelectAll  = 1,
    GatherAll  = 2,
    DefaultAll = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ToggleManagerBehavior : int {
    ClearAll   = 0,
    SelectAll  = 1,
    GatherAll  = 2,
    DefaultAll = 3,
};
#else // @header-generator platform
enum class ToggleManagerBehavior : int {};
#endif // @header-generator platform
#endif // @header-generator platform
