#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class PersistenceGroupChangeAction : int {
    Added   = 0,
    Deleted = 1,
};

}
#endif // @header-generator platform
