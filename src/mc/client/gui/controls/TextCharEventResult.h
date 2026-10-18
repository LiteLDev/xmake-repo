#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextCharEventResult : int {
    None             = 0,
    EnterPressed     = 1,
    BackspacePressed = 2,
    Success          = 3,
    Failed           = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextCharEventResult : int {
    None             = 0,
    EnterPressed     = 1,
    BackspacePressed = 2,
    Success          = 3,
    Failed           = 4,
};
#else // @header-generator platform
enum class TextCharEventResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform
