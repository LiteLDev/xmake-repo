#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InterpolationPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mNew;
    ::ll::TypedStorage<4, 4, float> mOld;
    // NOLINTEND
};
