#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FindPackFlags : uchar {
    Selected  = 0,
    Global    = 1,
    Available = 2,
    Realms    = 3,
    Unowned   = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FindPackFlags : uchar {
    Selected  = 0,
    Global    = 1,
    Available = 2,
    Realms    = 3,
    Unowned   = 4,
};
#else // @header-generator platform
enum class FindPackFlags : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
