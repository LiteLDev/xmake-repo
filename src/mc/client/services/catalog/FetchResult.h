#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FetchResult : uchar {
    None    = 0,
    Success = 1,
    Fail    = 2,
};
#else // @header-generator platform
enum class FetchResult : uchar {};
#endif // @header-generator platform
