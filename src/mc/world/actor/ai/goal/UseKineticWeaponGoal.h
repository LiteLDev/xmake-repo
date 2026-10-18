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
#if defined(LL_PLAT_A) // @header-generator platform
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes { struct FloatRange; }
// clang-format on

class UseKineticWeaponGoal : public ::MeleeAttackBaseGoal {
public:
    // UseKineticWeaponGoal inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class ForcePathRecalculation : int {
        No  = 0,
        Yes = 1,
    };

#endif // @header-generator platform
    enum class State : int {
        Approaching   = 0,
        Attacking     = 1,
        Repositioning = 2,
        Cooldown      = 3,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ForcePathRecalculation : int {
        No  = 0,
        Yes = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, ::UseKineticWeaponGoalSettings> mSettings;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 88>                               mCachedDamageSettings;
    ::ll::TypedStorage<8, 16, std::optional<Tick>>            mCooldownEndTick;
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>        mRetreatPosition;
#else // @header-generator platform
    ::ll::TypedStorage<4, 84, ::KineticDamageSettings>        mCachedDamageSettings;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>        mCooldownEndTick;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>    mRetreatPosition;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::UseKineticWeaponGoal::State>   mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~UseKineticWeaponGoal();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
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
    MCNAPI void _cacheDamageSettings();
#else // @header-generator platform
    MCAPI void _cacheDamageSettings();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _findRearRetreatPosition(::Actor const&, ::SharedTypes::FloatRange);
#else // @header-generator platform
    MCAPI void _findRearRetreatPosition(::Actor const& target, ::SharedTypes::FloatRange distance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _startCooldown(::Actor const&);
#else // @header-generator platform
    MCAPI void _startCooldown(::Actor const& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _startRepositioning(::Actor const&);
#else // @header-generator platform
    MCAPI void _startRepositioning(::Actor const& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryFindRandomRetreatPosition(::SharedTypes::FloatRange);
#else // @header-generator platform
    MCAPI void _tryFindRandomRetreatPosition(::SharedTypes::FloatRange distance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryMoveToRetreatPosition(::UseKineticWeaponGoal::ForcePathRecalculation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _tryMoveToRetreatPosition(::UseKineticWeaponGoal::ForcePathRecalculation forceRecalculation);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
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
