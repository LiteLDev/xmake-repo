#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CopyResourcePacksResult : int {
    CopyingInProgress = 0,
    PacksReady        = 1,
};
#else // @header-generator platform
enum class CopyResourcePacksResult : int {};
#endif // @header-generator platform
