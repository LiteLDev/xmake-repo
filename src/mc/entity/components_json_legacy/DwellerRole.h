#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DwellerRole : int {
    DwellingInhabitant = 0,
    DwellingDefender   = 1,
    DwellingHostile    = 2,
    DwellingPassive    = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    COUNT              = 4,
#else // @header-generator platform
    Count              = 4,
#endif // @header-generator platform
};
