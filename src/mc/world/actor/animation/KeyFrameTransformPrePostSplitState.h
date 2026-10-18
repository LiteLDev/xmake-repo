#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class KeyFrameTransformPrePostSplitState : uint64 {
    Auto        = 0,
    Single      = 1,
    ForcedSplit = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count      = 3,
#else // @header-generator platform
    Count       = 3,
#endif // @header-generator platform
};
