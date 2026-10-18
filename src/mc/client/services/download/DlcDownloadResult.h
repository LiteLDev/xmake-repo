#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DlcDownloadResult : int {
    DownloadStarted = 0,
    Downloading     = 1,
    Completed       = 2,
    Cancelled       = 3,
    Failed          = 4,
};
#else // @header-generator platform
enum class DlcDownloadResult : int {};
#endif // @header-generator platform
