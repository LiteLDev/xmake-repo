#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TouchControlFlags : int {
    Captured        = 2,
    StartedInactive = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TouchControlFlags : int {
    Captured        = 2,
    StartedInactive = 4,
};
#else // @header-generator platform
enum class TouchControlFlags : int {};
#endif // @header-generator platform
#endif // @header-generator platform
