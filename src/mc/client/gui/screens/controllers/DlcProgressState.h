#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DlcProgressState : uint {
    FirstTick   = 0,
    PreDownload = 1,
    Downloading = 2,
    Importing   = 3,
    Complete    = 4,
    Failed      = 5,
    Canceled    = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class DlcProgressState : int {
    FirstTick   = 0,
    PreDownload = 1,
    Downloading = 2,
    Importing   = 3,
    Complete    = 4,
    Failed      = 5,
    Canceled    = 6,
};
#else // @header-generator platform
enum class DlcProgressState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
