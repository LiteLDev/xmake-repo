#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::API {

enum class ServerScriptPackType : int {
    Core         = 0,
    Experimental = 1,
    Samples      = 2,
    External     = 3,
    Testing      = 4,
};

}
#endif // @header-generator platform
