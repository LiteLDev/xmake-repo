#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CaptionState : int {
    Unloaded = 0,
    Loaded   = 1,
    Unsaved  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class CaptionState : int {
    Unloaded = 0,
    Loaded   = 1,
    Unsaved  = 2,
};
#else // @header-generator platform
enum class CaptionState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
