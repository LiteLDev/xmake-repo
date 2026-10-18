#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::persona {

enum class BodySizeType : uint {
    Smaller = 0,
    Small   = 1,
    Medium  = 2,
    Tall    = 3,
    Count   = 4,
    Unknown = 5,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
