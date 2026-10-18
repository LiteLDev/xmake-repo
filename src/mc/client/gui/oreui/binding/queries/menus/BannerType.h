#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BannerType : int {
    Neutral     = 0,
    Notice      = 1,
    Destructive = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BannerType : int {
    Neutral     = 0,
    Notice      = 1,
    Destructive = 2,
};
#else // @header-generator platform
enum class BannerType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
