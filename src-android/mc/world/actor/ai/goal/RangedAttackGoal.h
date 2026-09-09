#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Vec3;
// clang-format on

class RangedAttackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::UntypedStorage<8, 40>      mTarget;
    ::ll::TypedStorage<1, 1, bool>   mIsChargedAttack;
    ::ll::TypedStorage<1, 1, bool>   mUsingChargedItem;
    ::ll::TypedStorage<1, 1, bool>   mSetPersistent;
    ::ll::TypedStorage<1, 1, bool>   mSwing;
    ::ll::TypedStorage<4, 4, int>    mReloadBurstTicks;
    ::ll::TypedStorage<4, 4, int>    mCanSeeTargetTicks;
    ::ll::TypedStorage<4, 4, int>    mBurstShotsLeft;
    ::ll::TypedStorage<4, 4, int>    mBurstTicks;
    ::ll::TypedStorage<4, 4, int>    mBurstCooldownTicks;
    ::ll::TypedStorage<4, 4, int>    mChargeTicks;
    ::ll::TypedStorage<4, 4, int>    mReloadTicksMin;
    ::ll::TypedStorage<4, 4, int>    mReloadTicksMax;
    ::ll::TypedStorage<4, 4, int>    mChargeReadyTicks;
    ::ll::TypedStorage<4, 4, int>    mChargeReloadTicks;
    ::ll::TypedStorage<4, 4, int>    mBurstShots;
    ::ll::TypedStorage<4, 4, int>    mTargetInSightTicks;
    ::ll::TypedStorage<4, 4, float>  mAttackRadius;
    ::ll::TypedStorage<4, 4, float>  mAttackRadiusMin;
    ::ll::TypedStorage<4, 4, float>  mAttackRadiusMinSq;
    ::ll::TypedStorage<4, 4, float>  mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>  mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>  mRangedFov;
    ::ll::TypedStorage<4, 4, float>  mSpeedMultiplier;
    // NOLINTEND

public:
    // prevent constructor by default
    RangedAttackGoal& operator=(RangedAttackGoal const&);
    RangedAttackGoal(RangedAttackGoal const&);
    RangedAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RangedAttackGoal();

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
    MCNAPI explicit RangedAttackGoal(::Mob&);

    MCNAPI void _dischargeCarriedItem();
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
