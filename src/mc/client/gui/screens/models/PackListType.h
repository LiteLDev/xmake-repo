#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PackListType : int {
    None      = 0,
    Selected  = 1,
    Available = 2,
    Unknown   = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PackListType : int {
    None      = 0,
    Selected  = 1,
    Available = 2,
    Unknown   = 3,
};
#else // @header-generator platform
enum class PackListType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
