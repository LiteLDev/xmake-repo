#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSExportTypeEnum : int {
    Local    = 0,
    Indirect = 1,
};
#endif // @header-generator platform
