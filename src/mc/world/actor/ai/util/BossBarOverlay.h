#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BossBarOverlay : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    PROGRESS   = 0,
    NOTCHED_6  = 1,
    NOTCHED_10 = 2,
    NOTCHED_12 = 3,
    NOTCHED_20 = 4,
#else // @header-generator platform
    Progress  = 0,
    Notched6  = 1,
    Notched10 = 2,
    Notched12 = 3,
    Notched20 = 4,
#endif // @header-generator platform
};
