#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TimelinePhase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mDuration;
    ::ll::TypedStorage<4, 4, int>          mStartTickValue;
    ::ll::TypedStorage<4, 4, int>          mEndTickValue;
    ::ll::TypedStorage<4, 4, int>          mTransitionTickDuration;
    ::ll::TypedStorage<8, 24, std::string> mName;
    // NOLINTEND

public:
    // prevent constructor by default
    TimelinePhase();
};
