#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ButtonState : uchar {
    Up   = 0,
    Down = 1,
    None = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ButtonState : schar {
    Up   = 0,
    Down = 1,
    None = 2,
};
#else // @header-generator platform
enum class ButtonState : schar {};
#endif // @header-generator platform
#endif // @header-generator platform
