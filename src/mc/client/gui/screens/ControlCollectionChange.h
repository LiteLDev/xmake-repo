#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ControlCollectionChange : int {
    Add    = 0,
    Remove = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ControlCollectionChange : int {
    Add    = 0,
    Remove = 1,
};
#else // @header-generator platform
enum class ControlCollectionChange : int {};
#endif // @header-generator platform
#endif // @header-generator platform
