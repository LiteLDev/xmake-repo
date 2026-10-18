#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum JumpType : uint {
    NONE   = 0,
    HOP    = 1,
    STEP   = 2,
    SPRINT = 3,
    _COUNT = 4,
#else // @header-generator platform
enum class JumpType : int {
    None   = 0,
    Hop    = 1,
    Step   = 2,
    Sprint = 3,
    Count  = 4,
#endif // @header-generator platform
};
