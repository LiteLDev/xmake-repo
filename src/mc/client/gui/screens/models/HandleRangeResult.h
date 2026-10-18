#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class HandleRangeResult : int {
    NotHandled   = 0,
    Handled      = 1,
    UnknownRetry = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class HandleRangeResult : int {
    NotHandled   = 0,
    Handled      = 1,
    UnknownRetry = 2,
};
#else // @header-generator platform
enum class HandleRangeResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform
