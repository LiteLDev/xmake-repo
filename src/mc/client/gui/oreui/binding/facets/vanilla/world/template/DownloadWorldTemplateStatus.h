#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DownloadWorldTemplateStatus : int {
    Initialising = 0,
    Downloading  = 1,
    Importing    = 2,
    Success      = 3,
    Fail         = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class DownloadWorldTemplateStatus : int {
    Initialising = 0,
    Downloading  = 1,
    Importing    = 2,
    Success      = 3,
    Fail         = 4,
};
#else // @header-generator platform
enum class DownloadWorldTemplateStatus : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
