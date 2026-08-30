#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct bgfx_transform_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, float*> data;
    ::ll::TypedStorage<2, 2, ushort> num;
    // NOLINTEND
};
