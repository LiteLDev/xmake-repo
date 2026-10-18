#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LocalServerStartupState : int {
    NotStarted = 0,
    Starting   = 1,
    Started    = 2,
};
#else // @header-generator platform
enum class LocalServerStartupState : int {};
#endif // @header-generator platform
