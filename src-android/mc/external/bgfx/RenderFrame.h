#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct RenderFrame {
public:
    // RenderFrame inner types define
    enum Enum : uint {
        NoContext = 0,
        Render    = 1,
        Timeout   = 2,
        Exiting   = 3,
        Count     = 4,
    };
};

} // namespace bgfx
