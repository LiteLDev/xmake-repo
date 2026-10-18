#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedChoices.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct TimerComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>   mTime;
    ::ll::TypedStorage<8, 8, ulong> mTimeStamp;
    ::ll::TypedStorage<1, 1, bool>  mHasExecuted;
    ::ll::TypedStorage<1, 1, bool>  mLooping;
    ::ll::TypedStorage<4, 4, int>   mStartTime;
    ::ll::TypedStorage<1, 1, bool>  mRandomInterval;
    ::ll::TypedStorage<4, 4, int>   mMinTime;
    ::ll::TypedStorage<4, 4, int>   mMaxTime;
    ::ll::UntypedStorage<8, 24>     mTimeChoices;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                       mTime;
    ::ll::TypedStorage<8, 8, uint64>                    mTimeStamp;
    ::ll::TypedStorage<1, 1, bool>                      mHasExecuted;
    ::ll::TypedStorage<1, 1, bool>                      mLooping;
    ::ll::TypedStorage<4, 4, int>                       mStartTime;
    ::ll::TypedStorage<1, 1, bool>                      mRandomInterval;
    ::ll::TypedStorage<4, 4, int>                       mMinTime;
    ::ll::TypedStorage<4, 4, int>                       mMaxTime;
    ::ll::TypedStorage<8, 24, ::WeightedChoices<float>> mTimeChoices;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TimerComponent& operator=(TimerComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getRandomTime(::Actor&);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getTimeStamp(::Level const&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void restartTimer(::Actor&);

    MCNAPI void tryConvertToTimeStamp(::Level const&);
#else // @header-generator platform
    MCAPI void restartTimer(::Actor& actor);
#endif // @header-generator platform
    // NOLINTEND
};
