#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerTextEvent : uchar {
    PlayerSleeping    = 0,
    PlayerConnection  = 1,
    PlayerChangedSkin = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count            = 3,
#else // @header-generator platform
    Count             = 3,
#endif // @header-generator platform
};
