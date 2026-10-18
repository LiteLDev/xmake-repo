#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

enum class DataResponsePurpose : uchar {
    Block    = 0,
    Item     = 1,
    Mob      = 2,
    Tutorial = 3,
    File     = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
