#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class IdentityType : uint64 {
    PlayFab          = 0,
    XboxLive         = 1,
    Platform         = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    Platform_Network = 3,
    EDU_Network      = 4,
#else // @header-generator platform
    PlatformNetwork  = 3,
    EduNetwork       = 4,
#endif // @header-generator platform
    MinecraftService = 5,
    Mock             = 6,
    Count            = 7,
    All              = 8,
};

}
