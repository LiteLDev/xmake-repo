#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
struct GoalId;
// clang-format on

class DragonStrafePlayerGoal : public ::DragonBaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>      mAttackTarget;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mCurrentPath;
    ::ll::TypedStorage<1, 1, bool>                  mClockwise;
    ::ll::TypedStorage<1, 1, bool>                  mDone;
    ::ll::TypedStorage<4, 4, int>                   mHasTargetTicks;
    ::ll::TypedStorage<4, 4, int>                   mRangeAndViewTicks;
    ::ll::TypedStorage<4, 4, float>                 mFireballPower;
    ::ll::TypedStorage<4, 4, float>                 mFireballRange;
    ::ll::TypedStorage<4, 4, float>                 mSwitchDirectionProbability;
    ::ll::TypedStorage<4, 4, float>                 mViewAngle;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonStrafePlayerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DragonStrafePlayerGoal();

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
    MCNAPI explicit DragonStrafePlayerGoal(::Mob&);

    MCNAPI void navigateToNextPathNode();
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
