#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TileDirection : int {
    None = 0,
    X    = 1,
    Y    = 2,
    Both = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TileDirection : int {
    None = 0,
    X    = 1,
    Y    = 2,
    Both = 3,
};
#else // @header-generator platform
enum class TileDirection : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
