#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JoystickVisibilityOption : int {
    VisibleJoystick          = 0,
    HiddenJoystick           = 1,
    HiddenJoystickWhenUnused = 2,
    Count                    = 3,
};
