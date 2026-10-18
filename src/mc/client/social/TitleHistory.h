#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TitleHistory : int {
    Unknown   = 0,
    NotPlayed = 1,
    HasPlayed = 2,
};
#else // @header-generator platform
enum class TitleHistory : int {};
#endif // @header-generator platform

}
