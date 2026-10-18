#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ItemInstallState : int {
    NotInstalled    = 0,
    Installed       = 1,
    UpdateAvailable = 2,
    _Unknown        = 3,
};
#else // @header-generator platform
enum class ItemInstallState : int {};
#endif // @header-generator platform
