#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
enum class LevelRendererCameraType : uchar {
    Invalid = 0,
    Unknown = 1,
    Player  = 2,
    Shadow  = 3,
};
#else // @header-generator platform
enum class LevelRendererCameraType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
