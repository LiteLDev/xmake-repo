#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class WorldClock;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct SyncWorldClockStateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mClockId;
    ::ll::TypedStorage<4, 4, int>    mTime;
    ::ll::TypedStorage<1, 1, bool>   mIsPaused;
#endif // @header-generator platform
    // NOLINTEND
};
