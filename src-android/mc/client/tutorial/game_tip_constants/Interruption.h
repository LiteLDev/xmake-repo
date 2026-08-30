#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameTipConstants {

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

}
