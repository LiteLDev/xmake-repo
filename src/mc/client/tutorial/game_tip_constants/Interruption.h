#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameTipConstants {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Interruption : int {
    ToastEvent         = 0,
    PlayerDeath        = 1,
    PlayerFlying       = 2,
    PlayerInLava       = 3,
    PlayerInWater      = 4,
    PlayerInPowderSnow = 5,
    InputModeChanged   = 6,
    MobsNearby         = 7,
};
#else // @header-generator platform
enum class Interruption : int {};
#endif // @header-generator platform

}
