#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/clock/TimeMarkerData.h"

struct WorldClockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                        mId;
    ::ll::TypedStorage<8, 24, std::string>                 mName;
    ::ll::TypedStorage<4, 4, int>                          mTime;
    ::ll::TypedStorage<1, 1, bool>                         mIsPaused;
    ::ll::TypedStorage<8, 24, std::vector<TimeMarkerData>> mTimeMarkers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::WorldClockData const&) const;

    MCNAPI ~WorldClockData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
