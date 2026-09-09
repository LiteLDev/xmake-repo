#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Item;
class Mob;
struct GoalId;
// clang-format on

class FertilizeFarmBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mNextFertilizeStartTick;
    ::ll::TypedStorage<4, 4, int>   mMaxFertilizerUsage;
    ::ll::TypedStorage<4, 4, int>   mSearchCooldownMaximumTicks;
    ::ll::TypedStorage<4, 4, int>   mInventoryFertilizerIndex;
    ::ll::TypedStorage<4, 4, int>   mTimesFertilized;
    // NOLINTEND

public:
    // prevent constructor by default
    FertilizeFarmBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FertilizeFarmBlockGoal();

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
    MCNAPI explicit FertilizeFarmBlockGoal(::Mob&);

    MCNAPI int findInventorySlotForItem(std::function<bool(const Item&)>) const;
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
