#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct AccelerationStructureBuildFlags {
public:
    // AccelerationStructureBuildFlags inner types define
    enum Enum : ushort {
        // bitfield representation
        NONE              = 0,
        ALLOW_UPDATE      = 1 << 0,
        ALLOW_COMPACTION  = 1 << 1,
        PREFER_FAST_TRACE = 1 << 2,
        PREFER_FAST_BUILD = 1 << 3,
        MINIMIZE_MEMORY   = 1 << 4,
        PERFORM_UPDATE    = 1 << 5,
    };
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
