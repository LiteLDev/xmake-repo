#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetMultipleVertexBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> StartSlot;
    ::ll::TypedStorage<4, 4, uint> Count;
    // NOLINTEND
};

} // namespace renoir
