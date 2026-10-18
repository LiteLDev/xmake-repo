#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LiquidSplashRequest {

enum class SplashType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    NONE        = 0,
    ENTER       = 1,
    HEAD_ENTERS = 2,
    HEAD_EXITS  = 3,
#else // @header-generator platform
    None       = 0,
    Enter      = 1,
    HeadEnters = 2,
    HeadExits  = 3,
#endif // @header-generator platform
};

}
