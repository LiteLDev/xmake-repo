#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HorseFlags : int {
    // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
    FLAG_SADDLE     = 1 << 2,
    FLAG_EATING     = 1 << 5,
    FLAG_STANDING   = 1 << 6,
    FLAG_OPEN_MOUTH = 1 << 7,
#else // @header-generator platform
    Saddle    = 1 << 2,
    Eating    = 1 << 5,
    Standing  = 1 << 6,
    OpenMouth = 1 << 7,
#endif // @header-generator platform
};
