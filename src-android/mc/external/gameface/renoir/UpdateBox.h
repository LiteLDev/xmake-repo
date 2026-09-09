#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct UpdateBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Top;
    ::ll::TypedStorage<4, 4, uint> Left;
    ::ll::TypedStorage<4, 4, uint> Right;
    ::ll::TypedStorage<4, 4, uint> Bottom;
    // NOLINTEND
};

} // namespace renoir
