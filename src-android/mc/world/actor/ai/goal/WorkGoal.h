#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class WorkGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::POIType>                              mPOIType;
    ::ll::TypedStorage<4, 4, int>                                    mMinSoundDelay;
    ::ll::TypedStorage<4, 4, int>                                    mMaxSoundDelay;
    ::ll::TypedStorage<4, 4, int>                                    mGoalCooldown;
    ::ll::TypedStorage<4, 4, int>                                    mActiveTime;
    ::ll::TypedStorage<1, 1, bool>                                   mCanWorkInRain;
    ::ll::TypedStorage<4, 4, int>                                    mWorkInRainTolerance;
    ::ll::TypedStorage<4, 4, int>                                    mCooldownTick;
    ::ll::TypedStorage<4, 4, int>                                    mActiveTick;
    ::ll::TypedStorage<4, 4, int>                                    mSoundTick;
    ::ll::TypedStorage<4, 4, int>                                    mSoundTickMax;
    ::ll::TypedStorage<1, 1, bool>                                   mCanRainAtLocation;
    ::ll::TypedStorage<4, 4, int>                                    mRainCheckCooldownTick;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnArrival;
    ::ll::TypedStorage<1, 1, bool>                                   mHasEverReachedJobsite;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorkGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual void useWorkstation();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void playPOISoundEvent() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& RAIN_CHECK_MAX_COOLDOWN();

    MCNAPI static int const& WORK_TIMESTAMP_UPDATE_INVERVAL();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI void $useWorkstation();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
