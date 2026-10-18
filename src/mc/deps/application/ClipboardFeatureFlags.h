#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ClipboardFeatureFlags : int {
    None              = 0,
    ClipboardSet      = 1,
    ClipboardGet      = 2,
    ClipboardAsyncGet = 4,
};
#else // @header-generator platform
enum class ClipboardFeatureFlags : int {};
#endif // @header-generator platform
