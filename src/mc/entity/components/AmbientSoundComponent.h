#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AmbientSoundComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mNeedsInitialization;
    ::ll::TypedStorage<4, 4, int>  mMinimumTimeTicks;
    ::ll::TypedStorage<4, 4, int>  mMaxAdditionalTimeTicks;
    ::ll::TypedStorage<4, 4, int>  mRemainingTimeTicks;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void decreaseRemainingTimeTicks(int);

    MCNAPI void initialize(float, float, ::IRandom&);

    MCNAPI bool isTimeRemaining() const;

    MCNAPI void resetRemainingTime(::IRandom&);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool extendAmbientSoundRemainingTimeIfBelow(::Actor&, float, float);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool
    extendAmbientSoundRemainingTimeIfBelow(::Actor& owner, float newRemainingTimeSeconds, float belowTimeSeconds);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setAmbientSoundRemainingTime(::Actor&, float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& SHORTEST_MAX_ADDITIONAL_TIME_TICKS();

    MCNAPI static int const& SHORTEST_MINIMUM_TIME_TICKS();
#else // @header-generator platform
    MCAPI static void setAmbientSoundRemainingTime(::Actor& owner, float seconds);
#endif // @header-generator platform
    // NOLINTEND
};
