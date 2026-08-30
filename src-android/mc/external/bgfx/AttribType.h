#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct AttribType {
public:
    // AttribType inner types define
    enum Enum : uint {
        Uint8  = 0,
        Int8   = 1,
        Uint10 = 2,
        Uint16 = 3,
        Int16  = 4,
        Half   = 5,
        Float  = 6,
        Count  = 7,
    };
};

} // namespace bgfx
