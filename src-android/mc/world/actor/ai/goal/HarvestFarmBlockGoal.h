#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
struct GoalId;
// clang-format on

class HarvestFarmBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // HarvestFarmBlockGoal inner types define
    enum class Task : int {
        NONE = -1,
        REAP = 0,
        SOW  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mMaximumTicksUntilSearch;
    ::ll::TypedStorage<4, 4, int>                          mSearchCooldownMaximumTicks;
    ::ll::TypedStorage<4, 4, int>                          mTaskCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                          mInventorySeedsIndex;
    ::ll::TypedStorage<4, 4, ::HarvestFarmBlockGoal::Task> mCurrentTask;
    // NOLINTEND

public:
    // prevent constructor by default
    HarvestFarmBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HarvestFarmBlockGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HarvestFarmBlockGoal(::Mob&);

    MCNAPI int findInventorySlotForFarmSeeds();

    MCNAPI bool trySowCrop(::BlockSource&, ::BlockPos const&);
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

    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
