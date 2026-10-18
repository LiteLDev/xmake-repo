#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TypeExecutingEvent : int {
#if defined(LL_PLAT_A) // @header-generator platform
    BLOCK = 0,
    ITEM  = 1,
    NONE  = 2,
#else // @header-generator platform
    Block = 0,
    Item  = 1,
    None  = 2,
#endif // @header-generator platform
};
