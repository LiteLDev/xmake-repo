#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorInitializationMethod : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    INVALID     = 0,
    LOADED      = 1,
    SPAWNED     = 2,
    BORN        = 3,
    TRANSFORMED = 4,
    UPDATED     = 5,
    EVENT       = 6,
    LEGACY      = 7,
#else // @header-generator platform
    Invalid     = 0,
    Loaded      = 1,
    Spawned     = 2,
    Born        = 3,
    Transformed = 4,
    Updated     = 5,
    Event       = 6,
    Legacy      = 7,
#endif // @header-generator platform
};
