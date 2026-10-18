#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SonicBoomGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, float>                                  mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                                  mAttackDamage;
    ::ll::TypedStorage<4, 4, float>                                  mAttackRangeHorizontal;
    ::ll::TypedStorage<4, 4, float>                                  mAttackRangeVertical;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackHeightCap;
    ::ll::TypedStorage<2, 2, ushort>                                 mAttackCooldownTicks;
    ::ll::TypedStorage<2, 2, ushort>                                 mDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                                 mDurationTicksUntilAttackSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mAttackSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mChargeSound;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>>           mAnimationLength;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>>           mSoundCooldown;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>>           mSoundDelay;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>>           mSonicBoomCooldown;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mAnimationLength;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSoundCooldown;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSoundDelay;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSonicBoomCooldown;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SonicBoomGoal& operator=(SonicBoomGoal const&);
    SonicBoomGoal(SonicBoomGoal const&);
    SonicBoomGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SonicBoomGoal();
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SonicBoomGoal(::Mob&);
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
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
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
