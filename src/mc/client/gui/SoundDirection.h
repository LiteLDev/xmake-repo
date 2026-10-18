#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SoundDirection : int {
    Center = 0,
    Left   = 1,
    Right  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SoundDirection : int {
    Center = 0,
    Left   = 1,
    Right  = 2,
};
#else // @header-generator platform
enum class SoundDirection : int {};
#endif // @header-generator platform
#endif // @header-generator platform
