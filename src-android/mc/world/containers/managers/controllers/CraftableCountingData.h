#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftableCountingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTotalResultItems;
    ::ll::TypedStorage<4, 4, int> mAmountOfTimesRecipeIsCrafted;
    // NOLINTEND
};
