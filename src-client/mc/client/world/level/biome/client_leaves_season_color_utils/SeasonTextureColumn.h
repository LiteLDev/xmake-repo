#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientLeavesSeasonColorUtils {

enum class SeasonTextureColumn : uchar {
    Evergreen      = 0,
    Birch          = 1,
    Default        = 2,
    EvergreenSnowy = 3,
    BirchSnowy     = 4,
    DefaultSnowy   = 5,
    COUNT          = 6,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
