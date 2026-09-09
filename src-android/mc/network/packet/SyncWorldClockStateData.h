#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WorldClock;
// clang-format on

struct SyncWorldClockStateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mClockId;
    ::ll::TypedStorage<4, 4, int>   mTime;
    ::ll::TypedStorage<1, 1, bool>  mIsPaused;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SyncWorldClockStateData(::WorldClock const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldClock const&);
    // NOLINTEND
};
