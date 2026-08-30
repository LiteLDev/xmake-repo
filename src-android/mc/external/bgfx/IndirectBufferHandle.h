#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct IndirectBufferHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> idx;
    // NOLINTEND
};

} // namespace bgfx
