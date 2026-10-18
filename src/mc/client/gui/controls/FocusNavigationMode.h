#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FocusNavigationMode : int {
    None      = 0,
    Contained = 1,
    Stop      = 2,
    Custom    = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FocusNavigationMode : int {
    None      = 0,
    Contained = 1,
    Stop      = 2,
    Custom    = 3,
};
#else // @header-generator platform
enum class FocusNavigationMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
