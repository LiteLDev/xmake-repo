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
