#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
enum class XTaskQueueDuplicateOptions : int {};
#else // @header-generator platform
enum class XTaskQueueDuplicateOptions : int {
    None      = 0,
    Reference = 1,
};
#endif // @header-generator platform
#endif // @header-generator platform
