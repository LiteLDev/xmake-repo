#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RespawnAnimation : int {
#if defined(LL_PLAT_A) // @header-generator platform
    NONE                        = 0,
    START                       = 1,
    PREPARING_TO_SUMMON_PILLARS = 2,
    SUMMONING_PILLARS           = 3,
    SUMMONING_DRAGON            = 4,
    END                         = 5,
#else // @header-generator platform
    None                     = 0,
    Start                    = 1,
    PreparingToSummonPillars = 2,
    SummoningPillars         = 3,
    SummoningDragon          = 4,
    End                      = 5,
#endif // @header-generator platform
};
