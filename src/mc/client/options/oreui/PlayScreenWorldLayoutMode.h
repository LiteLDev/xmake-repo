#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayScreenWorldLayoutMode : int {
    Default = 0,
    List    = 1,
    Grid    = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PlayScreenWorldLayoutMode : int {
    Default = 0,
    List    = 1,
    Grid    = 2,
};
#else // @header-generator platform
enum class PlayScreenWorldLayoutMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
