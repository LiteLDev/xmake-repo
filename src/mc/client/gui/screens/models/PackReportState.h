#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PackReportState : uchar {
    Unavailable = 0,
    Generating  = 1,
    Available   = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PackReportState : uchar {
    Unavailable = 0,
    Generating  = 1,
    Available   = 2,
};
#else // @header-generator platform
enum class PackReportState : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
