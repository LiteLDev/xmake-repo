#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
class Mob;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class TemptBaseGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                      mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Player>>                  mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                  mSpeed;
    ::ll::TypedStorage<1, 1, bool>                                   mOldAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                                   mCanTemptVertically;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mMobPlayerDelta;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                           mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextSoundEventTick;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnStartEvent;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnEndEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnEndEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int const>                              COOLDOWN_TICKS;
    ::ll::TypedStorage<1, 1, bool>                                   mCanGetScared;
    ::ll::TypedStorage<4, 4, int>                                    mCooldown;
    ::ll::TypedStorage<1, 1, bool>                                   mCanMove;
    ::ll::TypedStorage<4, 4, float>                                  mTemptDistance;
    ::ll::TypedStorage<4, 4, float>                                  mStopDistance;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mOldPlayerPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>                                 mOldPlayerRotation;
    ::ll::TypedStorage<1, 1, bool>                                   mCanTemptWhileRidden;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>           mItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>       mItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TemptBaseGoal& operator=(TemptBaseGoal const&);
    TemptBaseGoal(TemptBaseGoal const&);
    TemptBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TemptBaseGoal();
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

    virtual void tick();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

    virtual void updateMovement() = 0;

    virtual void stopMovement() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ~TemptBaseGoal() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TemptBaseGoal(
        ::Mob&,
        float,
        std::vector<ItemDescriptor> const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::FloatRange,
        bool,
        float,
        float,
        bool,
        bool,
        ::ActorDefinitionTrigger const&,
        ::ActorDefinitionTrigger const&
#else // @header-generator platform
    MCAPI TemptBaseGoal(
        ::Mob&                                 mob,
        float                                  speed,
        ::std::vector<::ItemDescriptor> const& itemList,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        bool                                   canGetScared,
        float                                  temptDistance,
        float                                  stopDistance,
        bool                                   canTemptVertically,
        bool                                   canTemptWhileRidden,
        ::ActorDefinitionTrigger const&        onStartEvent,
        ::ActorDefinitionTrigger const&        onEndEvent
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
        std::vector<ItemDescriptor> const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::FloatRange,
        bool,
        float,
        float,
        bool,
        bool,
        ::ActorDefinitionTrigger const&,
        ::ActorDefinitionTrigger const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Mob&                                 mob,
        float                                  speed,
        ::std::vector<::ItemDescriptor> const& itemList,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        bool                                   canGetScared,
        float                                  temptDistance,
        float                                  stopDistance,
        bool                                   canTemptVertically,
        bool                                   canTemptWhileRidden,
        ::ActorDefinitionTrigger const&        onStartEvent,
        ::ActorDefinitionTrigger const&        onEndEvent
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
