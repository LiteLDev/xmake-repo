#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorTerrainInterlockData {
public:
    // ActorTerrainInterlockData inner types define
    enum class VisibilityState : uchar {
        InitialNotVisible            = 0,
        Visible                      = 1,
        DelayedDestructionNotVisible = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ActorTerrainInterlockData::VisibilityState> mRenderVisibilityState;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreationTime;
    ::ll::TypedStorage<1, 1, bool> mHasBeenDelayedDeleted;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>      mCreationTime;
    ::ll::TypedStorage<1, 1, bool>                                         mHasBeenDelayedDeleted;
#endif // @header-generator platform
    // NOLINTEND
};
