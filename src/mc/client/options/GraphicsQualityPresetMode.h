#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class GraphicsQualityPresetMode : uchar {
    Performance = 0,
    Visual      = 1,
    Custom      = 2,
};
#else // @header-generator platform
enum class GraphicsQualityPresetMode : uchar {};
#endif // @header-generator platform
