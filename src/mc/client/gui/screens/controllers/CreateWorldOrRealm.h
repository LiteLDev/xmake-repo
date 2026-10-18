#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CreateWorldOrRealm : int {
    World = 0,
    Realm = 1,
    Count = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class CreateWorldOrRealm : int {
    World = 0,
    Realm = 1,
    Count = 2,
};
#else // @header-generator platform
enum class CreateWorldOrRealm : int {};
#endif // @header-generator platform
#endif // @header-generator platform
