#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Matrix4 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> un;
    // NOLINTEND
};

} // namespace bgfx
