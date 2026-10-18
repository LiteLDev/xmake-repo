#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EducationEditionOffer : uint {
#if defined(LL_PLAT_A) // @header-generator platform
    None             = 0,
    RestOfWorld      = 1,
    China_Deprecated = 2,
#else // @header-generator platform
    None            = 0,
    RestOfWorld     = 1,
    ChinaDeprecated = 2,
#endif // @header-generator platform
};
