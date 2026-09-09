#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"
#include "mc/world/actor/ai/goal/UseKineticWeaponGoalSettings.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
namespace SharedTypes { struct FloatRange; }
// clang-format on

class UseKineticWeaponGoal : public ::MeleeAttackBaseGoal {
public:
    // UseKineticWeaponGoal inner types define
    enum class State : int {
        Approaching   = 0,
        Attacking     = 1,
        Repositioning = 2,
        Cooldown      = 3,
    };

    enum class ForcePathRecalculation : int {
        No  = 0,
        Yes = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, ::UseKineticWeaponGoalSettings> mSettings;
    ::ll::UntypedStorage<4, 88>                               mCachedDamageSettings;
    ::ll::TypedStorage<8, 16, std::optional<Tick>>            mCooldownEndTick;
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>        mRetreatPosition;
    ::ll::TypedStorage<4, 4, ::UseKineticWeaponGoal::State>   mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UseKineticWeaponGoal();

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
    MCNAPI void _cacheDamageSettings();

    MCNAPI void _findRearRetreatPosition(::Actor const&, ::SharedTypes::FloatRange);

    MCNAPI void _startCooldown(::Actor const&);

    MCNAPI void _startRepositioning(::Actor const&);

    MCNAPI void _tryFindRandomRetreatPosition(::SharedTypes::FloatRange);

    MCNAPI void _tryMoveToRetreatPosition(::UseKineticWeaponGoal::ForcePathRecalculation);
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
