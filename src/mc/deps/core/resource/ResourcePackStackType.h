#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ResourcePackStackType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    LEVEL     = 0,
    GLOBAL    = 1,
    TREATMENT = 2,
    BASE_GAME = 3,
    SIZE      = 4,
#else // @header-generator platform
    Level     = 0,
    Global    = 1,
    Treatment = 2,
    BaseGame  = 3,
    Size      = 4,
#endif // @header-generator platform
};
