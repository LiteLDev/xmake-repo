#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
class Mob;
struct GoalId;
// clang-format on

class DragonFlamingGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EnderDragon&>   mDragon;
    ::ll::TypedStorage<4, 4, int>              mGroundFlameAttackCount;
    ::ll::TypedStorage<4, 4, int>              mCooldownTicks;
    ::ll::TypedStorage<4, 4, int>              mFlameTicks;
    ::ll::TypedStorage<4, 4, int>              mFlameDurationTicks;
    ::ll::TypedStorage<4, 4, int>              mRoarTicks;
    ::ll::TypedStorage<4, 4, int>              mRoarDurationTicks;
    ::ll::TypedStorage<4, 4, ::EffectDuration> mSmokeDurationTicks;
    ::ll::TypedStorage<4, 4, float>            mSmokeRadius;
    ::ll::TypedStorage<4, 16, ::mce::Color>    mSmokeColor;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonFlamingGoal& operator=(DragonFlamingGoal const&);
    DragonFlamingGoal(DragonFlamingGoal const&);
    DragonFlamingGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DragonFlamingGoal();

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
    MCNAPI explicit DragonFlamingGoal(::Mob&);
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
