#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class SlotWithDropChance : int {
#if defined(LL_PLAT_A) // @header-generator platform
    _none    = -1,
    _begin   = 0,
#else // @header-generator platform
    None     = -1,
    Begin    = 0,
#endif // @header-generator platform
    Mainhand = 0,
    Offhand  = 1,
    Head     = 2,
    Chest    = 3,
    Legs     = 4,
    Feet     = 5,
#if defined(LL_PLAT_A) // @header-generator platform
    _count   = 6,
#else // @header-generator platform
    Count    = 6,
#endif // @header-generator platform
};

}
