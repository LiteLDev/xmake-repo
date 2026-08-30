#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/util/TargetSelectionMethod.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class Mob;
class Path;
struct GoalId;
// clang-format on

class AvoidBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                mTargetPos;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>                  mPath;
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextStartTick;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mTargetBlockToAvoidPos;
    ::ll::TypedStorage<4, 4, float>                                  mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                  mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                    mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                    mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                    mInterval;
    ::ll::TypedStorage<1, 1, ::TargetSelectionMethod>                mMethod;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>           mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>>   mOnEscapedTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>              mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextSoundEventTick;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidBlockGoal& operator=(AvoidBlockGoal const&);
    AvoidBlockGoal(AvoidBlockGoal const&);
    AvoidBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AvoidBlockGoal();

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
    MCNAPI explicit AvoidBlockGoal(::Mob&);

    MCNAPI bool _findTargetBlock();
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
