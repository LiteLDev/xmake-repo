#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class KeyboardType : int {
    Standard     = 0,
    FullKeyboard = 1,
    Count        = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class KeyboardType : int {
    Standard     = 0,
    FullKeyboard = 1,
    Count        = 2,
};
#else // @header-generator platform
enum class KeyboardType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
