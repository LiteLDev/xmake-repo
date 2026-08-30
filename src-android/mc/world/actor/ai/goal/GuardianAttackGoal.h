#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Guardian;
class Mob;
struct GoalId;
// clang-format on

class GuardianAttackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Guardian&> mGuardian;
    ::ll::TypedStorage<4, 4, int>         mAttackTicks;
    ::ll::TypedStorage<4, 4, int>         mSoundDelayTicks;
    ::ll::TypedStorage<4, 4, int>         mMagicDamage;
    ::ll::TypedStorage<4, 4, int>         mHardModeExtraMagicDamage;
    ::ll::TypedStorage<4, 4, int>         mElderExtraMagicDamage;
    ::ll::TypedStorage<4, 4, float>       mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>       mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>       mMinDistance;
    ::ll::TypedStorage<1, 1, bool>        mLastCanSinkState;
    // NOLINTEND

public:
    // prevent constructor by default
    GuardianAttackGoal& operator=(GuardianAttackGoal const&);
    GuardianAttackGoal(GuardianAttackGoal const&);
    GuardianAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GuardianAttackGoal();

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
    MCNAPI explicit GuardianAttackGoal(::Mob&);
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
