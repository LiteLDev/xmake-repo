#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FocusImpact : uchar {
#else // @header-generator platform
enum class FocusImpact : schar {
#endif // @header-generator platform
    Neutral         = 0,
    ActivateFocus   = 1,
    DeactivateFocus = 2,
};
