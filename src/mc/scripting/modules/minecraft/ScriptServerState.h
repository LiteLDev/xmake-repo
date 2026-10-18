#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptServerState : int {
#if defined(LL_PLAT_A) // @header-generator platform
    PreInit                = 0,
    ScriptLoaded           = 1,
    Finalized              = 2,
    Reloading_PreInit      = 3,
    Reloading_ScriptLoaded = 4,
#else // @header-generator platform
    PreInit               = 0,
    ScriptLoaded          = 1,
    Finalized             = 2,
    ReloadingPreInit      = 3,
    ReloadingScriptLoaded = 4,
#endif // @header-generator platform
};

}
