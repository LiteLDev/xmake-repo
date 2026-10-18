#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class V2TempComponentRequirements : uchar {
    // bitfield representation
    None              = 0,
    Unsupported       = 1 << 0,
    ActorMatrix       = 1 << 1,
    ModelPartsUpdated = 1 << 2,
    SetupShading      = 1 << 3,
};
#else // @header-generator platform
enum class V2TempComponentRequirements : uchar {};
#endif // @header-generator platform
