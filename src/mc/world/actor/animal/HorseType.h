#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HorseType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    TYPE_UNSET    = -1,
    TYPE_HORSE    = 0,
    TYPE_DONKEY   = 1,
    TYPE_MULE     = 2,
    TYPE_UNDEAD   = 3,
    TYPE_SKELETON = 4,
    TYPE_COUNT    = 5,
#else // @header-generator platform
    Unset    = -1,
    Horse    = 0,
    Donkey   = 1,
    Mule     = 2,
    Undead   = 3,
    Skeleton = 4,
    Count    = 5,
#endif // @header-generator platform
};
