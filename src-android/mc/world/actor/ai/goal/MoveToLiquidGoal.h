#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
// clang-format on

class MoveToLiquidGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::MaterialType> mMaterialType;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToLiquidGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveToLiquidGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);

    virtual bool findTargetBlock();
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

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);

    MCNAPI bool $findTargetBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
