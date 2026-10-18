#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SneakOption : int {
    Toggle = 0,
    Hold   = 1,
    Count  = 2,
};
#else // @header-generator platform
enum class SneakOption : int {};
#endif // @header-generator platform
