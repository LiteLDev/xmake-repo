#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20 {

enum class ConnectionID : uchar {
    Fence            = 0,
    NetherBrickFence = 1,
    Wall             = 2,
    ThinFence        = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count           = 4,
#else // @header-generator platform
    Count            = 4,
#endif // @header-generator platform
};

}
