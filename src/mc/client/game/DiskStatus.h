#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DiskStatus : uchar {
    Initialized       = 0,
    LowDiskSpace      = 1,
    OutOfDiskSpace    = 2,
    CriticalDiskError = 3,
};
#else // @header-generator platform
enum class DiskStatus : uchar {};
#endif // @header-generator platform
