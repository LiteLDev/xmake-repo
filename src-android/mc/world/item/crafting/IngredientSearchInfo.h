#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"

struct IngredientSearchInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SlotData>> mSlots;
    ::ll::TypedStorage<4, 4, int>                    mCount;
    // NOLINTEND

public:
    // prevent constructor by default
    IngredientSearchInfo(IngredientSearchInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~IngredientSearchInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
