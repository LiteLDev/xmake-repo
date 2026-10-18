#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AttachableSlotIndex : int {
    Head        = 0,
    Torso       = 1,
    Legs        = 2,
    Feet        = 3,
    Body        = 4,
    CarriedItem = 5,
    OffhandItem = 6,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count      = 7,
#else // @header-generator platform
    Count       = 7,
#endif // @header-generator platform
};
