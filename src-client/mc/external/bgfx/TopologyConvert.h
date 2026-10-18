#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct TopologyConvert {
public:
    // TopologyConvert inner types define
    enum Enum : uint {
        TriListFlipWinding  = 0,
        TriStripFlipWinding = 1,
        TriListToLineList   = 2,
        TriStripToTriList   = 3,
        LineStripToLineList = 4,
        Count               = 5,
    };
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
