#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmType : int {
    Personal = 0,
    Friends  = 1,
};
#else // @header-generator platform
enum class RealmType : int {};
#endif // @header-generator platform
