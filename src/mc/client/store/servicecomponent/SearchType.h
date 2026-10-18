#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SearchType : int {
    Marketplace = 0,
    Persona     = 1,
    Inventory   = 2,
};
#else // @header-generator platform
enum class SearchType : int {};
#endif // @header-generator platform
