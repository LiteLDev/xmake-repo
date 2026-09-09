#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TimeMarkerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>              mId;
    ::ll::TypedStorage<8, 24, std::string>       mName;
    ::ll::TypedStorage<4, 4, int>                mTime;
    ::ll::TypedStorage<4, 8, std::optional<int>> mPeriod;
    // NOLINTEND
};
