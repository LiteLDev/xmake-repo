#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProcessSortOrder : int {
    DownloadPriority_High = 1,
    DownloadPriority_Low  = 2,
    ImportPriority        = 3,
    Unknown               = 100,
};
#else // @header-generator platform
enum class ProcessSortOrder : int {};
#endif // @header-generator platform
