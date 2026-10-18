#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ScreenDesignPreviewState : int {
    OptedIn  = 0,
    OptedOut = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ScreenDesignPreviewState : int {
    OptedIn  = 0,
    OptedOut = 1,
};
#else // @header-generator platform
enum class ScreenDesignPreviewState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
