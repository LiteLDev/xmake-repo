#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ImportStatus : int {
    NotStarted = 0,
    InProgress = 1,
    Done       = 2,
    Failed     = 3,
};
#else // @header-generator platform
enum class ImportStatus : int {};
#endif // @header-generator platform

}
