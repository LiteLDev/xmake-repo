#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Mob;
// clang-format on

class JumpAroundTargetGoal : public ::BaseGoal {
public:
    // JumpAroundTargetGoal inner types declare
    // clang-format off
    struct Jump;
    // clang-format on

    // JumpAroundTargetGoal inner types define
    enum class State : int {
        PREPARE_JUMP = 0,
        JUMPING      = 1,
        DONE         = 2,
    };

    struct Jump {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> targetPosition;
        ::ll::TypedStorage<4, 12, ::Vec3> velocityVector;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                        mFilters;
    ::ll::TypedStorage<4, 4, int>                                        mCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                                        mCooldownWhenHurtTicks;
    ::ll::TypedStorage<4, 4, int>                                        mLastHurtDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                      mMaxJumpVelocity;
    ::ll::TypedStorage<1, 1, bool>                                       mCheckCollision;
    ::ll::TypedStorage<4, 4, float>                                      mBoundingBoxScaleFactor;
    ::ll::TypedStorage<4, 4, int>                                        mLineOfSightCheckHeight;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mDistanceToTargetSqrRange;
    ::ll::TypedStorage<4, 4, int>                                        mLandingPositionSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mDistanceFromTargetLandingPosition;
    ::ll::TypedStorage<4, 4, int>                                        mRequiredAirBlocksAbove;
    ::ll::TypedStorage<4, 4, int>                                        mSnapToSurfaceBlockRange;
    ::ll::TypedStorage<8, 24, std::vector<float>>                        mAllowedJumpAngles;
    ::ll::TypedStorage<4, 4, int>                                        mJumpFromWaterTimeoutTicks;
    ::ll::TypedStorage<8, 8, ::Mob&>                                     mMob;
    ::ll::TypedStorage<1, 1, bool>                                       mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mJumpedFromWaterEndTick;
    ::ll::TypedStorage<4, 24, ::AABB const>                              mOriginalAabb;
    ::ll::TypedStorage<4, 4, ::JumpAroundTargetGoal::State>              mState;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                mStartingPos;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mGoalStartTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mCooldownEndTick;
    ::ll::TypedStorage<4, 28, std::optional<JumpAroundTargetGoal::Jump>> mJumpData;
    ::ll::TypedStorage<8, 8, ulong>                                      mPrepareJumpDurationTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpAroundTargetGoal& operator=(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JumpAroundTargetGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual bool canBeInterrupted();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JumpAroundTargetGoal(::Mob&);

    MCNAPI std::optional<JumpAroundTargetGoal::Jump> _calculateOptimalJumpVector(::Vec3 const&) const;

    MCNAPI std::optional<BlockPos> _snapToSurface(::Vec3 const&) const;
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

    MCNAPI bool $canBeInterrupted();

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
