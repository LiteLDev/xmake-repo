#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RawInputType : uchar {
#else // @header-generator platform
enum class RawInputType : schar {
#endif // @header-generator platform
    None           = 0,
    MouseButton    = 1,
    MouseWheelUp   = 2,
    MouseWheelDown = 3,
    Keyboard       = 4,
    GamepadButton  = 5,
    GamepadTrigger = 6,
};
