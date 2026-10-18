#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MultiplayerLockedContext : uchar {
    EnteringWorldWithLockedSkin               = 0,
    SelectingWorldWithLockedSkin              = 1,
    EnteringWorldWithoutPremiumPlatformAccess = 2,
    EnteringRealmWithoutPremiumPlatformAccess = 3,
};
#else // @header-generator platform
enum class MultiplayerLockedContext : uchar {};
#endif // @header-generator platform
