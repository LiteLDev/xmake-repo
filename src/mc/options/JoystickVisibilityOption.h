#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class JoystickVisibilityOption : int {
    VisibleJoystick          = 0,
    HiddenJoystick           = 1,
    HiddenJoystickWhenUnused = 2,
    Count                    = 3,
};
#else // @header-generator platform
enum class JoystickVisibilityOption : int {};
#endif // @header-generator platform
