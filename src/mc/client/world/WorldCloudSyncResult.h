#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum WorldCloudSyncResult : uint {
    Ok                    = 0,
    Unsupported           = 1,
    WorldNotCloudStored   = 2,
    UnableToGetManifest   = 3,
    UnableToSyncWorld     = 4,
    UnableToSetLocalOnly  = 5,
    UnableToSetCloudSaved = 6,
    QuotaExceeded         = 7,
    OutOfLocalStorage     = 8,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WorldCloudSyncResult : int {
    Ok                    = 0,
    Unsupported           = 1,
    WorldNotCloudStored   = 2,
    UnableToGetManifest   = 3,
    UnableToSyncWorld     = 4,
    UnableToSetLocalOnly  = 5,
    UnableToSetCloudSaved = 6,
    QuotaExceeded         = 7,
    OutOfLocalStorage     = 8,
};
#else // @header-generator platform
enum class WorldCloudSyncResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
