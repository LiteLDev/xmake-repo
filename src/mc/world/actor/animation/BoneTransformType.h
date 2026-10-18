#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BoneTransformType : int {
    Position = 0,
    Rotation = 1,
    Scale    = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count   = 3,
#else // @header-generator platform
    Count    = 3,
#endif // @header-generator platform
};
