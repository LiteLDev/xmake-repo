#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

enum class ChatFloodingAction : int {
#if defined(LL_PLAT_A) // @header-generator platform
    NONE     = -1,
    SUPPRESS = 0,
    KICK     = 1,
#else // @header-generator platform
    None     = -1,
    Suppress = 0,
    Kick     = 1,
#endif // @header-generator platform
};

}
