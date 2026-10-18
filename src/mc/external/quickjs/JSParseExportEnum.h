#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSParseExportEnum : int {
    None    = 0,
    Named   = 1,
    Default = 2,
};
#endif // @header-generator platform
