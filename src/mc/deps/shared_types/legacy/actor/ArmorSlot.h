#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class ArmorSlot : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Head           = 0,
    Torso          = 1,
    Legs           = 2,
    Feet           = 3,
    Body           = 4,
    _humanoidCount = 4,
    _count         = 5,
#else // @header-generator platform
    Head          = 0,
    Torso         = 1,
    Legs          = 2,
    Feet          = 3,
    Body          = 4,
    HumanoidCount = 4,
    Count         = 5,
#endif // @header-generator platform
};

}
