#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class zip_compression_status : int {
    Ok       = 0,
    End      = 1,
    Error    = 2,
    NeedData = 3,
};
#endif // @header-generator platform
