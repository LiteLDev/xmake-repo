#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WorldVersion : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    Pre_1_18  = 0,
    Post_1_18 = 1,
#else // @header-generator platform
    Pre1_18  = 0,
    Post1_18 = 1,
#endif // @header-generator platform
};
