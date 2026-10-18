#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class RealmsServiceStatus : int {
    Fetching    = 0,
    Idle        = 1,
    Exporting   = 2,
    Uploading   = 3,
    Downloading = 4,
};

}
#endif // @header-generator platform
