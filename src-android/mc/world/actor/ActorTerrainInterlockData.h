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
    // clang-format off
    ::ll::TypedStorage<1, 1, ::ActorTerrainInterlockData::VisibilityState> mRenderVisibilityState;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreationTime;
    ::ll::TypedStorage<1, 1, bool> mHasBeenDelayedDeleted;
    // clang-format on
    // NOLINTEND
};
