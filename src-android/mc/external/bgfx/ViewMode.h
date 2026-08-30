#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct ViewMode {
public:
    // ViewMode inner types define
    enum Enum : uint {
        Default         = 0,
        Sequential      = 1,
        DepthAscending  = 2,
        DepthDescending = 3,
        Count           = 4,
    };
};

} // namespace bgfx
