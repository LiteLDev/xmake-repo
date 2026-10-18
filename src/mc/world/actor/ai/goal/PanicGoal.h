#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class PanicGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                              mMob;
    ::ll::TypedStorage<8, 8, ::Mob*>                                              mHurtByMob;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<1, 1, bool>                                                mIgnoreMobDamage;
    ::ll::TypedStorage<1, 1, bool>                                                mPanicOnAllCauses;
    ::ll::TypedStorage<1, 1, bool>                                                mForceUse;
    ::ll::TypedStorage<1, 1, bool>                                                mPreferWater;
    ::ll::TypedStorage<1, 1, bool>                                                mCanTeleportToOwner;
    ::ll::TypedStorage<4, 4, float>                                               mSpeedMultipler;
    ::ll::TypedStorage<4, 12, ::Vec3>                                             mTargetPosition;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>              mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                                        mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                              mNextSoundEventTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                              mNextNavigationTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                                  mMob;
    ::ll::TypedStorage<8, 8, ::Mob*>                                                  mHurtByMob;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<1, 1, bool>                                                    mIgnoreMobDamage;
    ::ll::TypedStorage<1, 1, bool>                                                    mPanicOnAllCauses;
    ::ll::TypedStorage<1, 1, bool>                                                    mForceUse;
    ::ll::TypedStorage<1, 1, bool>                                                    mPreferWater;
    ::ll::TypedStorage<1, 1, bool>                                                    mCanTeleportToOwner;
    ::ll::TypedStorage<4, 4, float>                                                   mSpeedMultipler;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                 mTargetPosition;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                  mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                                            mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                                  mNextSoundEventTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                                  mNextNavigationTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PanicGoal& operator=(PanicGoal const&);
    PanicGoal(PanicGoal const&);
    PanicGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PanicGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual void stop() /*override*/;
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
    MCNAPI PanicGoal(
        ::Mob&,
        float,
        bool,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::FloatRange,
        bool,
        bool,
        std::vector<SharedTypes::Legacy::ActorDamageCause>
#else // @header-generator platform
    MCAPI PanicGoal(
        ::Mob&                                                 mob,
        float                                                  speedMultiplier,
        bool                                                   ignoreMobDamage,
        ::SharedTypes::Legacy::LevelSoundEvent                 sound,
        ::FloatRange                                           soundIntervalRange,
        bool                                                   forceUse,
        bool                                                   preferWater,
        ::std::vector<::SharedTypes::Legacy::ActorDamageCause> damageCauses
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Mob&,
        float,
        bool,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::FloatRange,
        bool,
        bool,
        std::vector<SharedTypes::Legacy::ActorDamageCause>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Mob&                                                 mob,
        float                                                  speedMultiplier,
        bool                                                   ignoreMobDamage,
        ::SharedTypes::Legacy::LevelSoundEvent                 sound,
        ::FloatRange                                           soundIntervalRange,
        bool                                                   forceUse,
        bool                                                   preferWater,
        ::std::vector<::SharedTypes::Legacy::ActorDamageCause> damageCauses
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
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
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCFOLD bool $canContinueToUse();
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
