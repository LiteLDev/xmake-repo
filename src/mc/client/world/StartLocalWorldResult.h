#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class StartLocalWorldResult : int {
    Ok                                   = 0,
    WorldNotInLevelList                  = 1,
    StartupAlreadyInProgress             = 2,
    GameServerStarterNotReady            = 3,
    MissingDependencies                  = 4,
    DlcMissingContentKey                 = 5,
    DlcPendingImports                    = 6,
    HasUnownedPacks                      = 7,
    UnknownError                         = 8,
    WorldSavedInNewerVersion             = 9,
    RealmsPlusEnded                      = 10,
    UnableToGetManifest                  = 11,
    HasNotConfirmedPlatformLockedContent = 12,
    WorldNotFoundInFileSystem            = 13,
    WorldHasSlimCacheData                = 14,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class StartLocalWorldResult : int {
    Ok                                   = 0,
    WorldNotInLevelList                  = 1,
    StartupAlreadyInProgress             = 2,
    GameServerStarterNotReady            = 3,
    MissingDependencies                  = 4,
    DlcMissingContentKey                 = 5,
    DlcPendingImports                    = 6,
    HasUnownedPacks                      = 7,
    UnknownError                         = 8,
    WorldSavedInNewerVersion             = 9,
    RealmsPlusEnded                      = 10,
    UnableToGetManifest                  = 11,
    HasNotConfirmedPlatformLockedContent = 12,
    WorldNotFoundInFileSystem            = 13,
    WorldHasSlimCacheData                = 14,
};
#else // @header-generator platform
enum class StartLocalWorldResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
