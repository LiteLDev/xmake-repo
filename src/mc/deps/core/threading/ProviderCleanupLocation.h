#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
enum class ProviderCleanupLocation : int {};
#else // @header-generator platform
enum class ProviderCleanupLocation : int {
    Destructor  = 0,
    AfterDoWork = 1,
    InCancel    = 2,
    CleanedUp   = 3,
};
#endif // @header-generator platform
#endif // @header-generator platform
