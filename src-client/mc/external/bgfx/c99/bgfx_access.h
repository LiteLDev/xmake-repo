#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_access : uint {
    BGFX_ACCESS_READ      = 0,
    BGFX_ACCESS_WRITE     = 1,
    BGFX_ACCESS_READWRITE = 2,
    BGFX_ACCESS_COUNT     = 3,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
