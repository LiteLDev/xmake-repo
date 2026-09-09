#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedChoices.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Level;
// clang-format on

struct TimerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mTime;
    ::ll::TypedStorage<8, 8, ulong> mTimeStamp;
    ::ll::TypedStorage<1, 1, bool>  mHasExecuted;
    ::ll::TypedStorage<1, 1, bool>  mLooping;
    ::ll::TypedStorage<4, 4, int>   mStartTime;
    ::ll::TypedStorage<1, 1, bool>  mRandomInterval;
    ::ll::TypedStorage<4, 4, int>   mMinTime;
    ::ll::TypedStorage<4, 4, int>   mMaxTime;
    ::ll::UntypedStorage<8, 24>     mTimeChoices;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerComponent& operator=(TimerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI int getRandomTime(::Actor&);

    MCNAPI ulong getTimeStamp(::Level const&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void restartTimer(::Actor&);

    MCNAPI void tryConvertToTimeStamp(::Level const&);
    // NOLINTEND
};
