#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ResourcePackFileDownloadError : int {
    OutOfStorage            = 1,
    CouldNotCreateDirectory = 2,
    AlreadyInitialized      = 3,
    CouldNotUnzipFiles      = 4,
    CouldNotWriteToDisk     = 5,
};
#else // @header-generator platform
enum class ResourcePackFileDownloadError : int {};
#endif // @header-generator platform
