#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ScreenPhase : uchar {
    None              = 0,
    Loading           = 1,
    Interaction       = 2,
    IdleOrDataChanged = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ScreenPhase : uchar {
    None              = 0,
    Loading           = 1,
    Interaction       = 2,
    IdleOrDataChanged = 3,
};
#else // @header-generator platform
enum class ScreenPhase : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
