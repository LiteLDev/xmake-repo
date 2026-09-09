#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class KnockbackRoarGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<4, 4, int>                       mMaxRoarDurationTicks;
    ::ll::TypedStorage<4, 4, int>                       mMaxTicksUntilAttack;
    ::ll::TypedStorage<4, 4, int>                       mKnockbackDamage;
    ::ll::TypedStorage<4, 4, int>                       mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, int>                       mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                     mHeightCap;
    ::ll::TypedStorage<4, 4, int>                       mKnockbackEffectRange;
    ::ll::TypedStorage<4, 4, int>                       mMaxCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mKnockbackFilterGroup;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mDamageFilterGroup;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnRoarEnd;
    ::ll::TypedStorage<1, 1, bool>                      mFilterEvaluateFix;
    ::ll::TypedStorage<4, 4, int>                       mCurrentCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                       mCurrentRoarTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    KnockbackRoarGoal& operator=(KnockbackRoarGoal const&);
    KnockbackRoarGoal(KnockbackRoarGoal const&);
    KnockbackRoarGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KnockbackRoarGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit KnockbackRoarGoal(::Mob&);
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

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
