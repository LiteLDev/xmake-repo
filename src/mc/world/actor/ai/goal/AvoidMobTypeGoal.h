#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/goal/MobDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
struct MobDescriptor;
#endif // @header-generator platform
// clang-format on

class AvoidMobTypeGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<1, 1, bool>                                   mIgnoreVisibility;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mAvoidIdentifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                         mAvoidIdentifier;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnEscapeTrigger;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnEscapeTrigger;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 12>                                      mSoundIntervalRange;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                       mToAvoid;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>              mSoundIntervalRange;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                       mToAvoid;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPosition;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>                  mPath;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>              mPath;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextSoundEventTick;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>>            mAvoidMobs;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>>        mAvoidMobs;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AvoidMobTypeGoal();
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
    MCNAPI explicit AvoidMobTypeGoal(::Mob&);
#else // @header-generator platform
    MCAPI bool canFindAvoidPath(::Actor* actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Actor* findNearestEntityToAvoid(float dist);
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
