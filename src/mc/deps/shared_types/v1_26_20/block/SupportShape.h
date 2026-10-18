#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20 {

enum class SupportShape : int {
    Fence = 0,
    Stair = 1,
#if defined(LL_PLAT_A) // @header-generator platform
    _Size = 2,
#else // @header-generator platform
    Size  = 2,
#endif // @header-generator platform
};

}
