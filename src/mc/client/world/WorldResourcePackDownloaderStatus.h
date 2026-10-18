#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class WorldResourcePackDownloaderStatus : uchar {
    Idle        = 0,
    Downloading = 1,
    Importing   = 2,
    Completed   = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WorldResourcePackDownloaderStatus : uchar {
    Idle        = 0,
    Downloading = 1,
    Importing   = 2,
    Completed   = 3,
};
#else // @header-generator platform
enum class WorldResourcePackDownloaderStatus : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
