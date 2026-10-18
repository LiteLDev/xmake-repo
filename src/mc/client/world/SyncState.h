#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SyncState : uint {
    CloudSynced    = 0,
    CloudOnly      = 1,
    CloudError     = 2,
    LocalOutOfDate = 3,
    LocalOnly      = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SyncState : uint {
    CloudSynced    = 0,
    CloudOnly      = 1,
    CloudError     = 2,
    LocalOutOfDate = 3,
    LocalOnly      = 4,
};
#else // @header-generator platform
enum class SyncState : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

}
