#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentCommands {

enum class SubCommand : int {
    None     = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    destroy  = 1,
    inspect  = 2,
    interact = 3,
#else // @header-generator platform
    Destroy  = 1,
    Inspect  = 2,
    Interact = 3,
#endif // @header-generator platform
};

}
