#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SpawnCategory {

#if defined(LL_PLAT_A) // @header-generator platform
enum Type : uint {
    MONSTER                    = 0,
    CREATURE                   = 1,
    AMBIENT                    = 2,
    AXOLOTLS                   = 3,
    UNDERGROUND_WATER_CREATURE = 4,
    WATER_CREATURE             = 5,
    WATER_AMBIENT              = 6,
    MISC                       = 7,
#else // @header-generator platform
enum class Type : int {
    Monster                  = 0,
    Creature                 = 1,
    Ambient                  = 2,
    Axolotls                 = 3,
    UndergroundWaterCreature = 4,
    WaterCreature            = 5,
    WaterAmbient             = 6,
    Misc                     = 7,
#endif // @header-generator platform
};

}
