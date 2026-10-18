#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SubtitlePosition : int {
    TopRight    = 0,
    BottomRight = 1,
};
#else // @header-generator platform
enum class SubtitlePosition : int {};
#endif // @header-generator platform
