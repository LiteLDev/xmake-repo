#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ExportWorldFlags : uchar {
    None                = 0,
    ClearPlayerData     = 2,
    HardcoreModeEnabled = 4,
    Count               = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ExportWorldFlags : uchar {
    None                = 0,
    ClearPlayerData     = 2,
    HardcoreModeEnabled = 4,
    Count               = 5,
};
#else // @header-generator platform
enum class ExportWorldFlags : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
