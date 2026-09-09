#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
struct GoalId;
// clang-format on

class EatMobGoal : public ::BaseGoal {
public:
    // EatMobGoal inner types define
    enum State : uint {
        MoveToTarget = 0,
        EatAnimation = 1,
        Done         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                mMob;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mTargetId;
    ::ll::TypedStorage<4, 4, float>                 mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                 mEatAnimationTime;
    ::ll::TypedStorage<4, 4, float>                 mPullInForce;
    ::ll::TypedStorage<4, 4, float>                 mReachMobDistance;
    ::ll::TypedStorage<8, 24, std::string>          mEatMobSound;
    ::ll::TypedStorage<8, 24, std::string>          mLootTable;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mPath;
    ::ll::TypedStorage<4, 4, ::EatMobGoal::State>   mState;
    ::ll::TypedStorage<8, 8, ::Tick>                mEatAnimationTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                mLastPathCalculationTick;
    ::ll::TypedStorage<1, 1, bool>                  mShouldKillTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>               mDropPos;
    // NOLINTEND

public:
    // prevent constructor by default
    EatMobGoal& operator=(EatMobGoal const&);
    EatMobGoal(EatMobGoal const&);
    EatMobGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EatMobGoal();

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
    MCNAPI explicit EatMobGoal(::Mob&);
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
