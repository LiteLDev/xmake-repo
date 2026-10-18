#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_0 {

enum class LiquidType : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    WATER = 0,
#else // @header-generator platform
    Water = 0,
#endif // @header-generator platform
};

}
