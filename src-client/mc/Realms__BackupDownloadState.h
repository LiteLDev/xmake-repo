#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class BackupDownloadState : uchar {
    Idle         = 0,
    Initializing = 1,
    Downloading  = 2,
    Importing    = 3,
    Done         = 4,
    Failed       = 5,
    Canceled     = 6,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
