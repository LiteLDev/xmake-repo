#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::DataStore {

enum class EventType : int {
    Create      = 0,
    Update      = 1,
    Destroy     = 2,
    Custom      = 3,
    Passthrough = 4,
};

}
#endif // @header-generator platform
