#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class AnimEvent : int {
    End = 0,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class AnimEvent : int {
    End = 0,
};
#else // @header-generator platform
enum class AnimEvent : int {};
#endif // @header-generator platform
#endif // @header-generator platform
