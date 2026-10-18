#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ParticleLayer : int {
    Opaque      = 0,
    AlphaTested = 1,
    Blend       = 2,
    Invisible   = 3,
    _count      = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ParticleLayer : int {
    Opaque      = 0,
    AlphaTested = 1,
    Blend       = 2,
    Invisible   = 3,
    Count       = 4,
};
#else // @header-generator platform
enum class ParticleLayer : int {};
#endif // @header-generator platform
#endif // @header-generator platform
