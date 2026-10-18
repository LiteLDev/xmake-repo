#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

enum class EventType : uchar {
    EntityFallOn     = 0,
    Place            = 1,
    StateChange      = 2,
    PlayerDestroy    = 3,
    PlayerInteract   = 4,
    PlayerPlacing    = 5,
    QueuedTick       = 6,
    RandomTick       = 7,
    RandomTickLegacy = 8,
    StepOff          = 9,
    StepOn           = 10,
    IsValidSpawn     = 11,
    BlockBreak       = 12,
    RedstoneUpdate   = 13,
    Actor            = 14,
    InternalActor    = 15,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count           = 16,
#else // @header-generator platform
    Count            = 16,
#endif // @header-generator platform
};

}
