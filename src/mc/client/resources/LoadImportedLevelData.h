#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LoadImportedLevelData : int {
    DoNotLoad         = 0,
    LoadLevelAsync    = 1,
    LoadLevelBlocking = 2,
};
#else // @header-generator platform
enum class LoadImportedLevelData : int {};
#endif // @header-generator platform
