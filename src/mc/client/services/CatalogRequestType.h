#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CatalogRequestType : int {
    _Unknown = 0,
    Search   = 1,
    Hydrate  = 2,
    Review   = 3,
    Image    = 4,
};
#else // @header-generator platform
enum class CatalogRequestType : int {};
#endif // @header-generator platform
