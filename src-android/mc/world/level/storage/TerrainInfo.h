#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TerrainInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> offset;
    ::ll::TypedStorage<4, 4, float> factor;
    ::ll::TypedStorage<4, 4, float> jaggedness;
    // NOLINTEND
};
