#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct HistoricalFrameTimes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>       mFrameIndex;
    ::ll::TypedStorage<4, 120, float[30]> mHistoricalMinimumFrameTimes;
    ::ll::TypedStorage<4, 120, float[30]> mHistoricalMaximumFrameTimes;
    ::ll::TypedStorage<4, 120, float[30]> mHistoricalAverageFrameTimes;
    ::ll::TypedStorage<4, 120, float[30]> mLastFrameTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getHistoricalAverageFrameTime(ulong) const;

    MCNAPI float getHistoricalMaximumFrameTime(ulong) const;

    MCNAPI float getHistoricalMinimumFrameTime(ulong) const;

    MCNAPI float getLastFrameTime(ulong) const;

    MCNAPI void setCurrentFrameTime(float);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct HistoricalFrameTimes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk72f49d;
    ::ll::UntypedStorage<4, 120> mUnkbc305f;
    ::ll::UntypedStorage<4, 120> mUnka191e5;
    ::ll::UntypedStorage<4, 120> mUnk67054e;
    ::ll::UntypedStorage<4, 120> mUnk7c71e8;
    // NOLINTEND

public:
    // prevent constructor by default
    HistoricalFrameTimes& operator=(HistoricalFrameTimes const&);
    HistoricalFrameTimes(HistoricalFrameTimes const&);
    HistoricalFrameTimes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setCurrentFrameTime(float frameTime);
    // NOLINTEND
};
#else // @header-generator platform
struct HistoricalFrameTimes {};
#endif // @header-generator platform
#endif // @header-generator platform
