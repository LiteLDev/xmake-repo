#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemUseMethod : int {
    Unknown           = -1,
    EquipArmor        = 0,
    Eat               = 1,
    Attack            = 2,
    Consume           = 3,
    Throw             = 4,
    Shoot             = 5,
    Place             = 6,
    FillBottle        = 7,
    FillBucket        = 8,
    PourBucket        = 9,
    UseTool           = 10,
    Interact          = 11,
    Retrieved         = 12,
    Dyed              = 13,
    Traded            = 14,
    BrushingCompleted = 15,
    OpenedVault       = 16,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count            = 17,
#else // @header-generator platform
    Count             = 17,
#endif // @header-generator platform
};
