#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoPlaceResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> collectionName;
    ::ll::TypedStorage<4, 4, int>          collectionIndex;
    ::ll::TypedStorage<1, 1, bool>         slotEmpty;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoPlaceResult& operator=(AutoPlaceResult const&);
    AutoPlaceResult(AutoPlaceResult const&);
    AutoPlaceResult();
};
