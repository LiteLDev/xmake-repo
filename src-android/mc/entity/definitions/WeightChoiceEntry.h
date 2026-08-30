#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WeightChoiceEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mValue;
    ::ll::TypedStorage<4, 4, int>   mWeight;
    // NOLINTEND
};
