#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GiftContent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mDate;
    ::ll::TypedStorage<8, 24, std::string>       mProductId;
    ::ll::TypedStorage<1, 1, bool>               mIsWorld;
    // NOLINTEND
};
