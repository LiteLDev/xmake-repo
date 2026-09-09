#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ai/goal/AquaticChargeAttackSettings.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Mob;
struct GoalId;
// clang-format on

class AquaticChargeAttackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                         mMob;
    ::ll::TypedStorage<4, 36, ::AquaticChargeAttackSettings> mSettings;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>>  mTargetId;
    ::ll::TypedStorage<1, 1, bool>                           mHasAttacked;
    ::ll::TypedStorage<1, 1, bool>                           mHasMissed;
    ::ll::TypedStorage<4, 12, ::Vec3>                        mLockedTargetPosition;
    ::ll::TypedStorage<8, 8, ::Tick>                         mNextChargeTick;
    ::ll::TypedStorage<4, 12, ::Vec3>                        mRandomSwimTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                        mRandomSwimLastPosition;
    ::ll::TypedStorage<8, 8, ::Tick>                         mRandomSwimNoProgressTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    AquaticChargeAttackGoal& operator=(AquaticChargeAttackGoal const&);
    AquaticChargeAttackGoal(AquaticChargeAttackGoal const&);
    AquaticChargeAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AquaticChargeAttackGoal();

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
    MCNAPI explicit AquaticChargeAttackGoal(::Mob&);

    MCNAPI bool _isCloseEnoughToAttack() const;

    MCNAPI void _performKnockbackAttack(::Actor&);

    MCNAPI void _transitionToCooldown(bool);
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
