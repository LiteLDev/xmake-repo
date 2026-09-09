#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Resolution {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> width;
    ::ll::TypedStorage<4, 4, uint> height;
    ::ll::TypedStorage<4, 4, uint> reset;
    // NOLINTEND
};

} // namespace bgfx
