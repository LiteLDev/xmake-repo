#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class GestureMode : int {
    Normal      = 0,
    TtsHover    = 1,
    TtsGestures = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class GestureMode : int {
    Normal      = 0,
    TtsHover    = 1,
    TtsGestures = 2,
};
#else // @header-generator platform
enum class GestureMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
