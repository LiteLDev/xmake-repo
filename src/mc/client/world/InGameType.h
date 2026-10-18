#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class InGameType : int {
    InGame    = 0,
    OutOfGame = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class InGameType : int {
    InGame    = 0,
    OutOfGame = 1,
};
#else // @header-generator platform
enum class InGameType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
