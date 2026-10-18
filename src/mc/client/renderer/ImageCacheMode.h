#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ImageCacheMode : int {
    Enabled  = 0,
    Disabled = 1,
};
#else // @header-generator platform
enum class ImageCacheMode : int {};
#endif // @header-generator platform
