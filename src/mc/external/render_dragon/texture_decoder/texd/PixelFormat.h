#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

enum class PixelFormat : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Unknown       = 0,
    R8_UINT       = 1,
    R8G8_UINT     = 2,
    R8G8B8_UINT   = 3,
    R8G8B8A8_UINT = 4,
#else // @header-generator platform
    Unknown      = 0,
    R8Uint       = 1,
    R8g8Uint     = 2,
    R8g8b8Uint   = 3,
    R8g8b8a8Uint = 4,
#endif // @header-generator platform
};

}
