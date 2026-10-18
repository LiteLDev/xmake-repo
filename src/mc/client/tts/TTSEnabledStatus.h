#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TTSEnabledStatus : int {
    NotEnabled        = 0,
    EnabledByDefault  = 1,
    EnabledByPlatform = 2,
    EnabledByXBL      = 3,
    EnabledPreviously = 4,
};
#else // @header-generator platform
enum class TTSEnabledStatus : int {};
#endif // @header-generator platform
