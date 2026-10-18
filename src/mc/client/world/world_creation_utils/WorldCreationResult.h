#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WorldCreationUtils {

#if defined(LL_PLAT_A) // @header-generator platform
enum class WorldCreationResult : int {
    LowDiskSpace  = 0,
    Join          = 1,
    UploadToRealm = 2,
    ValidateDlc   = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WorldCreationResult : int {
    LowDiskSpace  = 0,
    Join          = 1,
    UploadToRealm = 2,
    ValidateDlc   = 3,
};
#else // @header-generator platform
enum class WorldCreationResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
