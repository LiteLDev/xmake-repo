#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PanButtonState : int {
    PanNone  = 0,
    PanLeft  = 1,
    PanRight = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PanButtonState : int {
    PanNone  = 0,
    PanLeft  = 1,
    PanRight = 2,
};
#else // @header-generator platform
enum class PanButtonState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
