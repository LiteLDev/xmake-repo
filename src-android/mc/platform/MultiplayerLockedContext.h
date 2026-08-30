#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MultiplayerLockedContext : uchar {
    EnteringWorldWithLockedSkin               = 0,
    SelectingWorldWithLockedSkin              = 1,
    EnteringWorldWithoutPremiumPlatformAccess = 2,
    EnteringRealmWithoutPremiumPlatformAccess = 3,
};
