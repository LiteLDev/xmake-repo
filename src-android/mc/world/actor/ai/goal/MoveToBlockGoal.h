#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/TargetSelectionMethod.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class Mob;
class Path;
// clang-format on

class MoveToBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mGiveUpTicks;
    ::ll::TypedStorage<4, 4, int>                                  mStayDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                                mGoalRadiusSq;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mTargetBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mTargetPositionOffset;
    ::ll::TypedStorage<4, 4, float>                                mChanceToStart;
    ::ll::TypedStorage<4, 4, int>                                  mInterval;
    ::ll::TypedStorage<4, 4, int>                                  mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                  mSearchHeight;
    ::ll::TypedStorage<1, 1, ::TargetSelectionMethod>              mMethod;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mOnReachTriggers;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mOnStayCompletedTriggers;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>         mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 8, ulong>                                mCooldownCounter;
    ::ll::TypedStorage<8, 8, ulong const>                          mCooldownTimeoutTime;
    ::ll::TypedStorage<1, 1, bool>                                 mReachedTarget;
    ::ll::TypedStorage<4, 4, int>                                  mNextStartTick;
    ::ll::TypedStorage<4, 4, int>                                  mStayTicks;
    ::ll::TypedStorage<4, 4, int>                                  mTravelTicks;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mStartPos;
    ::ll::TypedStorage<8, 8, ::Mob&>                               mMob;
    ::ll::TypedStorage<1, 1, bool>                                 mHasSentOnReachEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                  mTargetBlockFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToBlockGoal& operator=(MoveToBlockGoal const&);
    MoveToBlockGoal(MoveToBlockGoal const&);
    MoveToBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveToBlockGoal();

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
    MCNAPI bool _findTargetBlock();

    MCNAPI bool _isValidTarget(::BlockSource&, ::BlockPos&) const;

    MCNAPI void _moveToBlock();
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
