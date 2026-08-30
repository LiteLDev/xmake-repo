#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct BackbufferRatio {
public:
    // BackbufferRatio inner types define
    enum Enum : uint {
        Equal     = 0,
        Half      = 1,
        Quarter   = 2,
        Eighth    = 3,
        Sixteenth = 4,
        Double    = 5,
        Count     = 6,
    };
};

} // namespace bgfx
