#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProgressAnimation : int {
    None       = 0,
    Waveform   = 1,
    LoadingBar = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ProgressAnimation : int {
    None       = 0,
    Waveform   = 1,
    LoadingBar = 2,
};
#else // @header-generator platform
enum class ProgressAnimation : int {};
#endif // @header-generator platform
#endif // @header-generator platform
