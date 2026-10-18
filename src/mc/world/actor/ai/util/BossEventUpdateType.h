#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BossEventUpdateType : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    Add               = 0,
    PlayerAdded       = 1,
    Remove            = 2,
    PlayerRemoved     = 3,
    Update_Percent    = 4,
    Update_Name       = 5,
    Update_Properties = 6,
    Update_Style      = 7,
    Query             = 8,
#else // @header-generator platform
    Add              = 0,
    PlayerAdded      = 1,
    Remove           = 2,
    PlayerRemoved    = 3,
    UpdatePercent    = 4,
    UpdateName       = 5,
    UpdateProperties = 6,
    UpdateStyle      = 7,
    Query            = 8,
#endif // @header-generator platform
};
