#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AnimationStatus : ushort {
    Running          = 0,
    Finished         = 1,
    Finished_Refresh = 2,
    Unknown          = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class AnimationStatus : ushort {
    Running         = 0,
    Finished        = 1,
    FinishedRefresh = 2,
    Unknown         = 3,
};
#else // @header-generator platform
enum class AnimationStatus : ushort {};
#endif // @header-generator platform
#endif // @header-generator platform

}
