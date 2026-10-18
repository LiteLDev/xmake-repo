#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ManifestOrigin : uchar {
#else // @header-generator platform
enum class ManifestOrigin : schar {
#endif // @header-generator platform
    Directory    = 0,
    Archive      = 1,
    Realms       = 2,
    Catalog      = 3,
    WorldHistory = 4,
    Invalid      = 5,
};
