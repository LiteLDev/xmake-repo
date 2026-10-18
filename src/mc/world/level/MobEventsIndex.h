#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MobEventsIndex : ushort {
    Invalid              = 65535,
#else // @header-generator platform
enum class MobEventsIndex : short {
    Invalid              = -1,
#endif // @header-generator platform
    PillagerPatrolsEvent = 0,
    WanderingTraderEvent = 1,
    EnderDragonEvent     = 2,
    EventCount           = 3,
};
