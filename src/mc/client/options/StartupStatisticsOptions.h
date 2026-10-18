#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class StartupStatisticsOptions : uchar {
    Off              = 0,
    Basic            = 1,
    BasicAndShutdown = 2,
};
#else // @header-generator platform
enum class StartupStatisticsOptions : uchar {};
#endif // @header-generator platform
