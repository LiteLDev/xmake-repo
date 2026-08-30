#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IRandom;
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
    // member functions
    // NOLINTBEGIN
    MCNAPI void decreaseRemainingTimeTicks(int);

    MCNAPI void initialize(float, float, ::IRandom&);

    MCNAPI bool isTimeRemaining() const;

    MCNAPI void resetRemainingTime(::IRandom&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool extendAmbientSoundRemainingTimeIfBelow(::Actor&, float, float);

    MCNAPI static void setAmbientSoundRemainingTime(::Actor&, float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& SHORTEST_MAX_ADDITIONAL_TIME_TICKS();

    MCNAPI static int const& SHORTEST_MINIMUM_TIME_TICKS();
    // NOLINTEND
};
