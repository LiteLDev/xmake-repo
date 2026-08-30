#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct bgfx_resolution_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> width;
    ::ll::TypedStorage<4, 4, uint> height;
    ::ll::TypedStorage<4, 4, uint> reset;
    // NOLINTEND
};
