#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ThirdPartyServersStatus : int {
    ServersSupported     = 0,
    Win32DevBuildWarning = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ThirdPartyServersStatus : int {
    ServersSupported     = 0,
    Win32DevBuildWarning = 1,
};
#else // @header-generator platform
enum class ThirdPartyServersStatus : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
