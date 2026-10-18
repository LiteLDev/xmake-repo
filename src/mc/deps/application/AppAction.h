#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class AppAction : uchar {
    OpenKeyboard         = 0,
    OpenExternalResource = 1,
};
#else // @header-generator platform
enum class AppAction : uchar {};
#endif // @header-generator platform
