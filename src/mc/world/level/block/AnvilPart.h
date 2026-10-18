#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class AnvilPart : int {
    Base   = 0,
    Joint  = 1,
    Column = 2,
    Top    = 3,
};
#else // @header-generator platform
enum class AnvilPart : int {};
#endif // @header-generator platform
