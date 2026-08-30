#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct ScopedFPSDataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                       mFPS;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTotalTimeSpent;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLongestActiveFrameTime;
    ::ll::TypedStorage<4, 4, int>                                                         mAmountOfFrames;
    // NOLINTEND
};

} // namespace OreUI
