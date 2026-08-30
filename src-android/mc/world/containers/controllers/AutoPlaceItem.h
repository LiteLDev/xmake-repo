#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoPlaceItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> collection;
    ::ll::TypedStorage<1, 1, bool>         stopWhenPlaced;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoPlaceItem();
};
