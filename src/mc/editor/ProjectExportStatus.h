#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class ProjectExportStatus : int {
    Idle       = 0,
    Processing = 1,
    Completed  = 2,
};

}
#endif // @header-generator platform
