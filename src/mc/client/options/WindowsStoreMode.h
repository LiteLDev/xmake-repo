#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class WindowsStoreMode : int {
    V6    = 0,
    V8    = 1,
    Count = 2,
};
#else // @header-generator platform
enum class WindowsStoreMode : int {};
#endif // @header-generator platform
