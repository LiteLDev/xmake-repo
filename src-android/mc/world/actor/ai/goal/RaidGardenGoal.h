#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
// clang-format on

class RaidGardenGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mMaxToEat;
    ::ll::TypedStorage<4, 4, int>                           mEaten;
    ::ll::TypedStorage<4, 4, int>                           mEatDelay;
    ::ll::TypedStorage<4, 4, int>                           mHasEatenFillDelay;
    ::ll::TypedStorage<4, 4, int>                           mInitialEatDelay;
    ::ll::TypedStorage<4, 4, int>                           mEatTimer;
    ::ll::TypedStorage<4, 4, int>                           mHasEatenFillTimer;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mEatBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    RaidGardenGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RaidGardenGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RaidGardenGoal(::Mob&);
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
