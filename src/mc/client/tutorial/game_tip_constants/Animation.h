#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameTipConstants {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Animation : int {
    None    = 0,
    FadeIn  = 1,
    FadeOut = 2,
};
#else // @header-generator platform
enum class Animation : int {};
#endif // @header-generator platform

}
