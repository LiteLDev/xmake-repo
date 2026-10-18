#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HorseInventoryEnum : int {
#if defined(LL_PLAT_A) // @header-generator platform
    INV_SLOT_SADDLE = 0,
    INV_SLOT_ARMOR  = 1,
    INV_BASE_COUNT  = 2,
#else // @header-generator platform
    SlotSaddle = 0,
    SlotArmor  = 1,
    BaseCount  = 2,
#endif // @header-generator platform
};
