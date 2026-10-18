#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class PersistenceGroupType : int {
    Local       = 0,
    Replication = 1,
    Shared      = 2,
};

}
#endif // @header-generator platform
