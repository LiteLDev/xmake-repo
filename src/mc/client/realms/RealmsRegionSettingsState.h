#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsRegionSettingsState : int {
    Idle       = 0,
    Fetching   = 1,
    FetchError = 2,
};
#else // @header-generator platform
enum class RealmsRegionSettingsState : int {};
#endif // @header-generator platform

}
