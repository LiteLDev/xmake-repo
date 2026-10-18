#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InputMode : uint {
#if defined(LL_PLAT_A) // @header-generator platform
    Undefined                   = 0,
    Mouse                       = 1,
    Touch                       = 2,
    GamePad                     = 3,
    MotionController_Deprecated = 4,
    Count                       = 5,
#else // @header-generator platform
    Undefined                  = 0,
    Mouse                      = 1,
    Touch                      = 2,
    GamePad                    = 3,
    MotionControllerDeprecated = 4,
    Count                      = 5,
#endif // @header-generator platform
};
