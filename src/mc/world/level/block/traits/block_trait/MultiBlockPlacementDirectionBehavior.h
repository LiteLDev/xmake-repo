#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTrait {

enum class MultiBlockPlacementDirectionBehavior : uchar {
    Default  = 0,
    Combined = 1,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count   = 2,
#else // @header-generator platform
    Count    = 2,
#endif // @header-generator platform
};

}
