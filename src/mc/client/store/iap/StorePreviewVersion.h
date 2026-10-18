#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class StorePreviewVersion : int {
    LastGen = 0,
    NextGen = 1,
};
#else // @header-generator platform
enum class StorePreviewVersion : int {};
#endif // @header-generator platform
