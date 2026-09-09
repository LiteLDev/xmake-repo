#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SlimeAttackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, int>    mGrowTiredTicks;
    ::ll::TypedStorage<4, 4, int>    mGrowTiredCooldownTicks;
    ::ll::TypedStorage<4, 4, float>  mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>  mMaxRotationY;
    ::ll::TypedStorage<4, 4, float>  mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>  mSetPersistent;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeAttackGoal& operator=(SlimeAttackGoal const&);
    SlimeAttackGoal(SlimeAttackGoal const&);
    SlimeAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SlimeAttackGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SlimeAttackGoal(::Mob&);
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

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
