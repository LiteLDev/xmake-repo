#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MERSTextureMode : uchar {
    MER  = 0,
    MERS = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class MERSTextureMode : uchar {
    Mer  = 0,
    Mers = 1,
};
#else // @header-generator platform
enum class MERSTextureMode : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
