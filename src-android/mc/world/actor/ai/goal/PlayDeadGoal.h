#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class PlayDeadGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                               mDuration;
    ::ll::TypedStorage<4, 4, float>                                               mRandomStartChance;
    ::ll::TypedStorage<4, 4, int>                                                 mForceUseBelowHealth;
    ::ll::TypedStorage<1, 1, bool>                                                mApplyRegeneration;
    ::ll::TypedStorage<4, 8, ::IntRange>                                          mActivationDamageRange;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                 mFilters;
    ::ll::TypedStorage<8, 8, ::Mob&>                                              mMob;
    ::ll::TypedStorage<8, 8, ulong>                                               mPlayDeadDuration;
    ::ll::TypedStorage<8, 8, ulong>                                               mStopPlayingDeadTime;
    ::ll::TypedStorage<8, 8, ulong>                                               mLastDamagedTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                                mPlayDeadOnAllCauses;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayDeadGoal& operator=(PlayDeadGoal const&);
    PlayDeadGoal(PlayDeadGoal const&);
    PlayDeadGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayDeadGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayDeadGoal(::Mob&);
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
