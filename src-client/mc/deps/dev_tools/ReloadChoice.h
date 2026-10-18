#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DevTools {

enum class ReloadChoice : int {
    NoReload                = 0,
    HotReloadScripts        = 1,
    HotReloadJson           = 2,
    HotReloadScriptsAndJson = 3,
    ReloadWorld             = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
