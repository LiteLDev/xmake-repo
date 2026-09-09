#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
class Village;
// clang-format on

class MoveToVillageGoal : public ::BaseMoveToGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mVillageSearchRangeBlocks;
    ::ll::TypedStorage<1, 1, bool> mReachedVillage;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToVillageGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveToVillageGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);

    virtual void _moveToBlock();

    virtual ::BlockPos _selectRandomPosInVillage();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MoveToVillageGoal(::Mob&, float, float, float, int);

    MCNAPI std::shared_ptr<Village> _tryGetCurrentVillage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, float, float, float, int);
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

    MCNAPI void $_moveToBlock();

    MCNAPI ::BlockPos $_selectRandomPosInVillage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
