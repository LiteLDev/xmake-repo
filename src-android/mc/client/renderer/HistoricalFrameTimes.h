#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
