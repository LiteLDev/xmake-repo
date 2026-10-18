#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

enum class PrefabSource : int {
    Project = 0,
    Global  = 1,
    Unknown = 2,
};

}
#endif // @header-generator platform
