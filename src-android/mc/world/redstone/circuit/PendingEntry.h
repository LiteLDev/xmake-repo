#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PendingEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        mName;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    // NOLINTEND
};
