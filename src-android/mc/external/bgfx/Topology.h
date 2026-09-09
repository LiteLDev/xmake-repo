#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Topology {
public:
    // Topology inner types define
    enum Enum : uint {
        TriList   = 0,
        TriStrip  = 1,
        LineList  = 2,
        LineStrip = 3,
        PointList = 4,
        Count     = 5,
    };
};

} // namespace bgfx
