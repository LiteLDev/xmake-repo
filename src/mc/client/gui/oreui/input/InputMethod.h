#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class InputMethod : uchar {
    Gamepad = 0,
    Touch   = 1,
    Mouse   = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class InputMethod : uchar {
    Gamepad = 0,
    Touch   = 1,
    Mouse   = 2,
};
#else // @header-generator platform
enum class InputMethod : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
