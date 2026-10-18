#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DigGoal : public ::BaseGoal {
public:
    // DigGoal inner types define
    enum class CanUseResult : int {
        CanDig                               = 0,
        IsDigging                            = 1,
        NamedAndNotAllowedToDigWhenNamed     = 2,
        NotOnGoundOrInWaterOrInLava          = 3,
        CanSeeDaylightAndShouldDigInDaylight = 4,
        DisturbedByVibration                 = 5,
        DisturbedBySuspicion                 = 6,
        IdlingBeforeStartingGoalAgain        = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                    mGoalInitializationTick;
    ::ll::TypedStorage<4, 4, uint>                      mIdleTimeTicks;
    ::ll::TypedStorage<2, 2, ushort>                    mDurationTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                    mEndTick;
    ::ll::TypedStorage<1, 1, bool>                      mAllowDigWhenNamed;
    ::ll::TypedStorage<1, 1, bool>                      mVibrationIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                      mSuspicionIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                      mDigsInDaylight;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnStartEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                     mGoalInitializationTick;
    ::ll::TypedStorage<4, 4, uint>                       mIdleTimeTicks;
    ::ll::TypedStorage<2, 2, ushort>                     mDurationTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                     mEndTick;
    ::ll::TypedStorage<1, 1, bool>                       mAllowDigWhenNamed;
    ::ll::TypedStorage<1, 1, bool>                       mVibrationIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                       mSuspicionIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                       mDigsInDaylight;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStartEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DigGoal& operator=(DigGoal const&);
    DigGoal(DigGoal const&);
    DigGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DigGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DigGoal(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCFOLD void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
