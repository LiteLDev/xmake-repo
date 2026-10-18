#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ScreenEventScope : uchar {
    Controller = 0,
    View       = 1,
    Global     = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ScreenEventScope : schar {
    Controller = 0,
    View       = 1,
    Global     = 2,
};
#else // @header-generator platform
enum class ScreenEventScope : schar {};
#endif // @header-generator platform
#endif // @header-generator platform
