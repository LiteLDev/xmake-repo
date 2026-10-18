#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsSku : int {
    Production = 0,
    FiveDay    = 1,
    Default    = 2,
};
#else // @header-generator platform
enum class RealmsSku : int {};
#endif // @header-generator platform
