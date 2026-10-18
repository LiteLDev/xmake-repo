#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DefinitionEventType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    LEAF     = 0,
    SEQUENCE = 1,
    RANDOM   = 2,
    NONE     = 3,
#else // @header-generator platform
    Leaf     = 0,
    Sequence = 1,
    Random   = 2,
    None     = 3,
#endif // @header-generator platform
};
