#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
struct GoalId;
// clang-format on

class GoAndGiveItemsToNoteblockGoal : public ::BaseGoal {
public:
    // GoAndGiveItemsToNoteblockGoal inner types define
    enum State : uint {
        GoToNoteblock = 0,
        Done          = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, ::GoAndGiveItemsToNoteblockGoal::State> mState;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>                  mPath;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mTargetBlockPos;
    ::ll::TypedStorage<4, 4, float>                                  mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                                  mReachBlockDistance;
    ::ll::TypedStorage<4, 4, int>                                    mListenTime;
    ::ll::TypedStorage<4, 4, float>                                  mThrowForce;
    ::ll::TypedStorage<4, 4, float>                                  mVerticalThrowMul;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mThrowSound;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>>   mOnItemThrowTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    GoAndGiveItemsToNoteblockGoal& operator=(GoAndGiveItemsToNoteblockGoal const&);
    GoAndGiveItemsToNoteblockGoal(GoAndGiveItemsToNoteblockGoal const&);
    GoAndGiveItemsToNoteblockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GoAndGiveItemsToNoteblockGoal();

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
    MCNAPI explicit GoAndGiveItemsToNoteblockGoal(::Mob&);
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
