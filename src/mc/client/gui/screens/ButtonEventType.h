#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ButtonEventType : int {
    Clicked  = 0,
    Pressed  = 1,
    Released = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ButtonEventType : int {
    Clicked  = 0,
    Pressed  = 1,
    Released = 2,
};
#else // @header-generator platform
enum class ButtonEventType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
