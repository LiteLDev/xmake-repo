#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PrepareDownloadResult : int {
    OK                 = 0,
    ShowDownloadDialog = 1,
};
#else // @header-generator platform
enum class PrepareDownloadResult : int {};
#endif // @header-generator platform
