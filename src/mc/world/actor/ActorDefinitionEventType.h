#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorDefinitionEventType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    LEAF        = 0,
    SEQUENCE    = 1,
    RANDOM      = 2,
    FIRST_VALID = 3,
    NONE        = 4,
#else // @header-generator platform
    Leaf       = 0,
    Sequence   = 1,
    Random     = 2,
    FirstValid = 3,
    None       = 4,
#endif // @header-generator platform
};
