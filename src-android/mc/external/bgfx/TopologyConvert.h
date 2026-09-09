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
