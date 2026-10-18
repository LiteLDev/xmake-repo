#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ResourcePackResponse : uchar {
#else // @header-generator platform
enum class ResourcePackResponse : schar {
#endif // @header-generator platform
    Cancel                    = 1,
    Downloading               = 2,
    DownloadingFinished       = 3,
    ResourcePackStackFinished = 4,
};
