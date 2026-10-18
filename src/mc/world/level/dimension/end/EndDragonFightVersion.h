#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EndDragonFightVersion : uchar {
    Unknown = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    v1_9_0  = 1,
#else // @header-generator platform
    V1_9_0  = 1,
#endif // @header-generator platform
};
