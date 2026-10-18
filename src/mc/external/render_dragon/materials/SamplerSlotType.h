#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SamplerSlotType : int {
    Buffer          = 0,
    CombinedSampler = 1,
    SamplerState    = 2,
    Count           = 3,
};
#else // @header-generator platform
enum class SamplerSlotType : int {};
#endif // @header-generator platform

}
