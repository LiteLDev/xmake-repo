#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HardcodedSpawnAreaType : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    None                  = 0,
    NetherFortress        = 1,
    WitchHut              = 2,
    OceanMonument         = 3,
    Village_Deprecated    = 4,
    PillagerOutpost       = 5,
    NewVillage_Deprecated = 6,
    _Count                = 7,
#else // @header-generator platform
    None                 = 0,
    NetherFortress       = 1,
    WitchHut             = 2,
    OceanMonument        = 3,
    VillageDeprecated    = 4,
    PillagerOutpost      = 5,
    NewVillageDeprecated = 6,
    Count                = 7,
#endif // @header-generator platform
};
