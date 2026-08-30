#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptServerState : int {
    PreInit                = 0,
    ScriptLoaded           = 1,
    Finalized              = 2,
    Reloading_PreInit      = 3,
    Reloading_ScriptLoaded = 4,
};

}
