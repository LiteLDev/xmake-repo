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
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
#else // @header-generator platform
#endif // @header-generator platform
class Actor;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AquaticChargeAttackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
    ::ll::TypedStorage<4, 36, ::AquaticChargeAttackSettings>    mSettings;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mTargetId;
    ::ll::TypedStorage<1, 1, bool>                              mHasAttacked;
    ::ll::TypedStorage<1, 1, bool>                              mHasMissed;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mLockedTargetPosition;
    ::ll::TypedStorage<8, 8, ::Tick>                            mNextChargeTick;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mRandomSwimTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mRandomSwimLastPosition;
    ::ll::TypedStorage<8, 8, ::Tick>                            mRandomSwimNoProgressTicks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AquaticChargeAttackGoal& operator=(AquaticChargeAttackGoal const&);
    AquaticChargeAttackGoal(AquaticChargeAttackGoal const&);
    AquaticChargeAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AquaticChargeAttackGoal();
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
    MCNAPI explicit AquaticChargeAttackGoal(::Mob&);
#else // @header-generator platform
    MCAPI bool _isCloseEnoughToAttack() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isCloseEnoughToAttack() const;
#else // @header-generator platform
    MCAPI void _performKnockbackAttack(::Actor& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _transitionToCooldown(bool hasAttacked);
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
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
