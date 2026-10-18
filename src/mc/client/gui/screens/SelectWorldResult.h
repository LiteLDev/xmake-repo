#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum SelectWorldResult : uint {
    NewWorldCreated = 0,
    WorldSelected   = 1,
    RealmSelected   = 2,
    ScreenClosed    = 3,
    Error           = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SelectWorldResult : int {
    NewWorldCreated = 0,
    WorldSelected   = 1,
    RealmSelected   = 2,
    ScreenClosed    = 3,
    Error           = 4,
};
#else // @header-generator platform
enum class SelectWorldResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform
