#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerfContextTrackerReportLite {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mContext;
    ::ll::TypedStorage<4, 4, float>        mContextSeconds;
    // NOLINTEND
};
