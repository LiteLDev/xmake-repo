#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeHeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDepth;
    ::ll::TypedStorage<4, 4, float> mScale;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeHeight();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MIN_DEPTH();
    // NOLINTEND
};
