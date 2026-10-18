#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LegacyOptionsConverter {

enum class LegacyButtonIndiciesEnum : uchar {
    UNASSIGNED    = 0,
    BUTTON_A      = 1,
    BUTTON_B      = 2,
    BUTTON_X      = 3,
    BUTTON_Y      = 4,
    DPAD_LEFT     = 5,
    DPAD_RIGHT    = 6,
    DPAD_UP       = 7,
    DPAD_DOWN     = 8,
    BUTTON_RB     = 9,
    BUTTON_LB     = 10,
    BUTTON_RT     = 11,
    BUTTON_LT     = 12,
    BUTTON_RTHUMB = 13,
    BUTTON_LTHUMB = 14,
    COUNT         = 15,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
