#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ScopedFPSDataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mFPS;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mTotalTimeSpent;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mLongestActiveFrameTime;
    ::ll::TypedStorage<4, 4, int>                        mAmountOfFrames;
    // NOLINTEND
};
#else // @header-generator platform
struct ScopedFPSDataTracker {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
