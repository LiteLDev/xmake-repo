#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Clock {
public:
    // Clock inner types define
    using time_t = float;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAccumulatedTime;
    ::ll::TypedStorage<4, 4, float> mLastDeltaTime;
    ::ll::TypedStorage<4, 4, float> mLastDeltaTimeSquared;
    ::ll::TypedStorage<4, 4, float> mCurrentTime;
    ::ll::TypedStorage<4, 4, float> mTimeScale;
    ::ll::TypedStorage<1, 1, bool>  mPaused;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Clock();

    MCNAPI float accumulatedTime() const;

    MCNAPI float currentTime() const;

    MCNAPI float lastDeltaTime() const;

    MCNAPI void pause();

    MCNAPI void resume();

    MCNAPI void update(float const, float const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace mce
