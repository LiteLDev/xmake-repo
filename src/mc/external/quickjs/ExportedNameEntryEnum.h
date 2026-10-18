#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ExportedNameEntryEnum : int {
    Ambiguous = 0,
    Normal    = 1,
    Delayed   = 2,
};
#endif // @header-generator platform
