#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RespawnAnimation : int {
    NONE                        = 0,
    START                       = 1,
    PREPARING_TO_SUMMON_PILLARS = 2,
    SUMMONING_PILLARS           = 3,
    SUMMONING_DRAGON            = 4,
    END                         = 5,
};
