#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ControlOptionType : int {
    SCALE   = 0,
    OPACITY = 1,
    COUNT   = 2,
};
#else // @header-generator platform
enum class ControlOptionType : int {};
#endif // @header-generator platform
