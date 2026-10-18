#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RenderControllerColorChannels : int {
    r     = 0,
    g     = 1,
    b     = 2,
    a     = 3,
    Count = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RenderControllerColorChannels : int {
    R     = 0,
    G     = 1,
    B     = 2,
    A     = 3,
    Count = 4,
};
#else // @header-generator platform
enum class RenderControllerColorChannels : int {};
#endif // @header-generator platform
#endif // @header-generator platform
