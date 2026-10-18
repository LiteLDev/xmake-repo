#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsBackupsDownloadState : uchar {
    Idle         = 0,
    CheckingDisk = 1,
    InProgress   = 2,
    Error        = 3,
    Success      = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
