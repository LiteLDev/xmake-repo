#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ModalWindowSize : int {
    smallWindow  = 0,
    mediumWindow = 1,
    largeWindow  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ModalWindowSize : int {
    SmallWindow  = 0,
    MediumWindow = 1,
    LargeWindow  = 2,
};
#else // @header-generator platform
enum class ModalWindowSize : int {};
#endif // @header-generator platform
#endif // @header-generator platform
