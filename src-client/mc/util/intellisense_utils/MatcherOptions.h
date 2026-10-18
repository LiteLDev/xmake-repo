#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace IntellisenseUtils {

enum class MatcherOptions : uchar {
    NONE           = 0,
    HIGHLIGHT      = 1,
    CASE_SENSITIVE = 2,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
