#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RangedAttackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>               mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>> mTarget;
    ::ll::TypedStorage<1, 1, bool>                 mIsChargedAttack;
    ::ll::TypedStorage<1, 1, bool>                 mUsingChargedItem;
    ::ll::TypedStorage<1, 1, bool>                 mSetPersistent;
    ::ll::TypedStorage<1, 1, bool>                 mSwing;
    ::ll::TypedStorage<4, 4, int>                  mReloadBurstTicks;
    ::ll::TypedStorage<4, 4, int>                  mCanSeeTargetTicks;
    ::ll::TypedStorage<4, 4, int>                  mBurstShotsLeft;
    ::ll::TypedStorage<4, 4, int>                  mBurstTicks;
    ::ll::TypedStorage<4, 4, int>                  mBurstCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                  mChargeTicks;
    ::ll::TypedStorage<4, 4, int>                  mReloadTicksMin;
    ::ll::TypedStorage<4, 4, int>                  mReloadTicksMax;
    ::ll::TypedStorage<4, 4, int>                  mChargeReadyTicks;
    ::ll::TypedStorage<4, 4, int>                  mChargeReloadTicks;
    ::ll::TypedStorage<4, 4, int>                  mBurstShots;
    ::ll::TypedStorage<4, 4, int>                  mTargetInSightTicks;
    ::ll::TypedStorage<4, 4, float>                mAttackRadius;
    ::ll::TypedStorage<4, 4, float>                mAttackRadiusMin;
    ::ll::TypedStorage<4, 4, float>                mAttackRadiusMinSq;
    ::ll::TypedStorage<4, 4, float>                mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                mRangedFov;
    ::ll::TypedStorage<4, 4, float>                mSpeedMultiplier;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RangedAttackGoal& operator=(RangedAttackGoal const&);
    RangedAttackGoal(RangedAttackGoal const&);
    RangedAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RangedAttackGoal();
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
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RangedAttackGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit RangedAttackGoal(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _dischargeCarriedItem();
#else // @header-generator platform
    MCAPI void _dischargeCarriedItem();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
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
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
