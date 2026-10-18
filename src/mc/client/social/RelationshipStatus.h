#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RelationshipStatus : int {
    Unknown = 0,
    True    = 1,
    False   = 2,
};
#else // @header-generator platform
enum class RelationshipStatus : int {};
#endif // @header-generator platform
