#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProfanityFilterContext : uint {
    None        = 0,
    UIFrontEnd  = 1,
    UIInGame    = 2,
    AllUI       = 3,
    InGameChat  = 4,
    InGameItems = 8,
    InGameName  = 16,
    All         = 31,
};
#else // @header-generator platform
enum class ProfanityFilterContext : uint {};
#endif // @header-generator platform
