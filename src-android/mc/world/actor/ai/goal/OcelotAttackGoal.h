#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class OcelotAttackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, int>    mAttackTicks;
    ::ll::TypedStorage<4, 4, int>    mCooldownTicks;
    ::ll::TypedStorage<4, 4, float>  mMaxHeadRotationX;
    ::ll::TypedStorage<4, 4, float>  mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>  mMaxDistance;
    ::ll::TypedStorage<4, 4, float>  mMaxSneakRange;
    ::ll::TypedStorage<4, 4, float>  mMaxSprintRange;
    ::ll::TypedStorage<4, 4, float>  mReachMultiplier;
    ::ll::TypedStorage<4, 4, float>  mSneakSpeedModifier;
    ::ll::TypedStorage<4, 4, float>  mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float>  mWalkSpeedModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    OcelotAttackGoal& operator=(OcelotAttackGoal const&);
    OcelotAttackGoal(OcelotAttackGoal const&);
    OcelotAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OcelotAttackGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OcelotAttackGoal(::Mob&);
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
