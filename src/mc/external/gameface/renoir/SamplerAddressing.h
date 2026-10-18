#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum SamplerAddressing : uint {
    SAMA_Wrap   = 0,
    SAMA_Mirror = 1,
    SAMA_Clamp  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SamplerAddressing : int {
    Wrap   = 0,
    Mirror = 1,
    Clamp  = 2,
};
#else // @header-generator platform
enum class SamplerAddressing : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
