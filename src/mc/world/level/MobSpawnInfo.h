#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

class MobSpawnInfo {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int categoryID(::ActorType);
    // NOLINTEND
};
#else // @header-generator platform
class MobSpawnInfo {};
#endif // @header-generator platform
