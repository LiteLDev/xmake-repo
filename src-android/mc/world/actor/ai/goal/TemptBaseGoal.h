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
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Player;
struct GoalId;
// clang-format on

class TemptBaseGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::UntypedStorage<8, 40>                                      mPlayer;
    ::ll::TypedStorage<4, 4, float>                                  mSpeed;
    ::ll::TypedStorage<1, 1, bool>                                   mOldAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                                   mCanTemptVertically;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mMobPlayerDelta;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                           mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextSoundEventTick;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnStartEvent;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnEndEvent;
    ::ll::TypedStorage<4, 4, int const>                              COOLDOWN_TICKS;
    ::ll::TypedStorage<1, 1, bool>                                   mCanGetScared;
    ::ll::TypedStorage<4, 4, int>                                    mCooldown;
    ::ll::TypedStorage<1, 1, bool>                                   mCanMove;
    ::ll::TypedStorage<4, 4, float>                                  mTemptDistance;
    ::ll::TypedStorage<4, 4, float>                                  mStopDistance;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mOldPlayerPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>                                 mOldPlayerRotation;
    ::ll::TypedStorage<1, 1, bool>                                   mCanTemptWhileRidden;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>           mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    TemptBaseGoal& operator=(TemptBaseGoal const&);
    TemptBaseGoal(TemptBaseGoal const&);
    TemptBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TemptBaseGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void updateMovement() = 0;

    virtual void stopMovement() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    );
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
