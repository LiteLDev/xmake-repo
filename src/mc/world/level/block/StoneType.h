#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoneType : int {
    Stone          = 0,
    Granite        = 1,
    GraniteSmooth  = 2,
    Diorite        = 3,
    DioriteSmooth  = 4,
    Andesite       = 5,
    AndesiteSmooth = 6,
#if defined(LL_PLAT_A) // @header-generator platform
    _count         = 7,
#else // @header-generator platform
    Count          = 7,
#endif // @header-generator platform
};
