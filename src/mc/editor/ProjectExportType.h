#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class ProjectExportType : int {
    PlayableWorld  = 0,
    ProjectBackup  = 1,
    WorldTemplate  = 2,
    ShareableWorld = 3,
    RealmsWorld    = 4,
};

}
#endif // @header-generator platform
