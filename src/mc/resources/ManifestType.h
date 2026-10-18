#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ManifestType : uchar {
#else // @header-generator platform
enum class ManifestType : schar {
#endif // @header-generator platform
    Pack          = 0,
    WorldTemplate = 1,
    Catalog       = 2,
};
