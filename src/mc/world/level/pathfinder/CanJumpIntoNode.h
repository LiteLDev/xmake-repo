#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CanJumpIntoNode : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    JUMPABLE    = 1,
    NONJUMPABLE = 0,
#else // @header-generator platform
    Jumpable    = 1,
    Nonjumpable = 0,
#endif // @header-generator platform
};
