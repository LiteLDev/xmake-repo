#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Clock {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // Clock inner types define
    using time_t = float;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mAccumulatedTime;
    ::ll::TypedStorage<4, 4, float> mLastDeltaTime;
    ::ll::TypedStorage<4, 4, float> mLastDeltaTimeSquared;
    ::ll::TypedStorage<4, 4, float> mCurrentTime;
    ::ll::TypedStorage<4, 4, float> mTimeScale;
    ::ll::TypedStorage<1, 1, bool>  mPaused;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkb389b9;
    ::ll::UntypedStorage<4, 4> mUnk27c54e;
    ::ll::UntypedStorage<4, 4> mUnk3c0e8f;
    ::ll::UntypedStorage<4, 4> mUnk2e9149;
    ::ll::UntypedStorage<4, 4> mUnk242c30;
    ::ll::UntypedStorage<1, 1> mUnk2d6aa8;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // prevent constructor by default
    Clock& operator=(Clock const&);
    Clock(Clock const&);
    Clock();
#endif // @header-generator platform
};

} // namespace mce
