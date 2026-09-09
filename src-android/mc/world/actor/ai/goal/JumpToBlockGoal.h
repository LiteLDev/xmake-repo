#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class Mob;
class MoveControlComponent;
class NavigationComponent;
// clang-format on

class JumpToBlockGoal : public ::BaseGoal {
public:
    // JumpToBlockGoal inner types declare
    // clang-format off
    struct WeightedJumpToBlockPos;
    // clang-format on

    // JumpToBlockGoal inner types define
    enum class JumpState : uchar {
        LookingForBlock = 0,
        FaceJump        = 1,
        Jump            = 2,
        Airborne        = 3,
        Done            = 4,
    };

    struct WeightedJumpToBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> targetPos;
        ::ll::TypedStorage<4, 12, ::Vec3>     velocityVector;
        ::ll::TypedStorage<4, 4, int>         mWeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                                mMob;
    ::ll::TypedStorage<1, 1, bool>                                                  mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick>                                                mCooldownTimeout;
    ::ll::TypedStorage<8, 8, ::Tick>                                                mNextCandidateCheck;
    ::ll::TypedStorage<4, 4, int>                                                   mCandidateAttemptCounter;
    ::ll::TypedStorage<1, 1, ::JumpToBlockGoal::JumpState>                          mState;
    ::ll::TypedStorage<8, 24, std::vector<Vec3>>                                    mJumpCurve;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                           mTargetBlockPos;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                                mCandidateBlocksPositions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                           mStartingPos;
    ::ll::TypedStorage<8, 24, std::vector<JumpToBlockGoal::WeightedJumpToBlockPos>> mJumpableBlocksPositions;
    ::ll::TypedStorage<4, 12, ::Vec3>                                               mVelocityVector;
    ::ll::TypedStorage<8, 8, ::Tick>                                                mFaceJumpTimer;
    ::ll::TypedStorage<4, 24, ::AABB const>                                         mOriginalAabb;
    ::ll::TypedStorage<4, 4, int>                                                   mSearchWidth;
    ::ll::TypedStorage<4, 4, int>                                                   mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                   mMinPathLength;
    ::ll::TypedStorage<4, 4, int>                                                   mMinDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                             mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                                 mScaleFactor;
    ::ll::TypedStorage<4, 4, float>                                                 mMaxVelocity;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>                          mPreferredBlocks;
    ::ll::TypedStorage<4, 4, float>                                                 mPreferredBlocksChance;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>                          mForbiddenBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpToBlockGoal& operator=(JumpToBlockGoal const&);
    JumpToBlockGoal(JumpToBlockGoal const&);
    JumpToBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JumpToBlockGoal();

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
    MCNAPI explicit JumpToBlockGoal(::Mob&);

    MCNAPI void _clearGoalState();

    MCNAPI bool _findCandidateBlocks(::NavigationComponent&);

    MCNAPI bool _findJumpableBlocks(bool);

    MCNAPI bool _findTargetBlock();

    MCNAPI bool _turnToTarget(::MoveControlComponent const&) const;

    MCNAPI void resetCooldown();
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
