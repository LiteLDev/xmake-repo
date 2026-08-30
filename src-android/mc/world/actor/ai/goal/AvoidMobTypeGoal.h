#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
struct GoalId;
// clang-format on

class AvoidMobTypeGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<1, 1, bool>                                   mIgnoreVisibility;
    ::ll::TypedStorage<8, 24, std::string>                           mAvoidIdentifier;
    ::ll::TypedStorage<4, 4, int>                                    mAvoidTargetPositionXZDistance;
    ::ll::TypedStorage<4, 4, int>                                    mAvoidTargetPositionYDistance;
    ::ll::TypedStorage<4, 4, float>                                  mMaximumDistance;
    ::ll::TypedStorage<4, 4, float>                                  mMaximumFlee;
    ::ll::TypedStorage<4, 4, float>                                  mProbabilityPerStrength;
    ::ll::TypedStorage<4, 4, float>                                  mRiverSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                  mSprintDistanceSquared;
    ::ll::TypedStorage<4, 4, float>                                  mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                  mWalkSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                   mRemoveTarget;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnEscapeTrigger;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::UntypedStorage<4, 12>                                      mSoundIntervalRange;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                       mToAvoid;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPosition;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>                  mPath;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextSoundEventTick;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>>            mAvoidMobs;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AvoidMobTypeGoal();

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
    MCNAPI explicit AvoidMobTypeGoal(::Mob&);

    MCNAPI bool canFindAvoidPath(::Actor*);

    MCNAPI ::Actor* findNearestEntityToAvoid(float);
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
