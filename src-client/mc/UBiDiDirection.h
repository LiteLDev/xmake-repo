#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum UBiDiDirection : uint {
    UBIDI_LTR     = 0,
    UBIDI_RTL     = 1,
    UBIDI_MIXED   = 2,
    UBIDI_NEUTRAL = 3,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
