#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ImportState : int {
    NotImported = 0,
    Importing   = 1,
    Imported    = 2,
    Failed      = 3,
};
#else // @header-generator platform
enum class ImportState : int {};
#endif // @header-generator platform
