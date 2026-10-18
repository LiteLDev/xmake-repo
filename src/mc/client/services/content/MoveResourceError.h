#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MoveResourceError : int {
    NoError                 = 0,
    NullItem                = 1,
    ContentTierIncompatible = 2,
    DataWarning             = 3,
    AddDependenciesError    = 4,
    PackSelectError         = 5,
    NeedsDownload           = 6,
};
#else // @header-generator platform
enum class MoveResourceError : int {};
#endif // @header-generator platform
