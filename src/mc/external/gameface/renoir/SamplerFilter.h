#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum SamplerFilter : uint {
    SAMF_Point     = 0,
    SAMF_Linear    = 1,
    SAMF_Trilinear = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SamplerFilter : int {
    Point     = 0,
    Linear    = 1,
    Trilinear = 2,
};
#else // @header-generator platform
enum class SamplerFilter : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
