#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ImportSuccess : int {
    Default      = 0,
    WithWarnings = 1,
};
#else // @header-generator platform
enum class ImportSuccess : int {};
#endif // @header-generator platform
