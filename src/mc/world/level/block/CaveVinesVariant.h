#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CaveVinesVariant : int {
#if defined(LL_PLAT_A) // @header-generator platform
    WITH_BERRIES    = 0,
    WITHOUT_BERRIES = 1,
#else // @header-generator platform
    WithBerries    = 0,
    WithoutBerries = 1,
#endif // @header-generator platform
};
