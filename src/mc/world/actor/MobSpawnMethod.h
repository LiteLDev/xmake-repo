#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MobSpawnMethod : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    Unknown           = 0,
    SpawnEgg          = 1,
    Command           = 2,
    Dispenser         = 3,
    Spawner           = 4,
    SpawnMethod_Count = 5,
#else // @header-generator platform
    Unknown          = 0,
    SpawnEgg         = 1,
    Command          = 2,
    Dispenser        = 3,
    Spawner          = 4,
    SpawnMethodCount = 5,
#endif // @header-generator platform
};
