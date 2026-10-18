#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DeferredTaskCategory : int {
    OnFrameStart             = 0,
    OnFrameEnd               = 1,
    OnUserManagerReady       = 2,
    OnPrimaryClientReady     = 3,
    AfterSwapBuffers         = 4,
    AfterUpdateComplete      = 5,
    OnInitializationComplete = 6,
};
#else // @header-generator platform
enum class DeferredTaskCategory : int {};
#endif // @header-generator platform
