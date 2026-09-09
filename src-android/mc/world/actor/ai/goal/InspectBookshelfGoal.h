#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Mob;
// clang-format on

class InspectBookshelfGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBookshelfPos;
    ::ll::TypedStorage<1, 1, bool>        mRequireSameY;
    // NOLINTEND

public:
    // prevent constructor by default
    InspectBookshelfGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InspectBookshelfGoal();

    virtual bool canContinueToUse();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);

    virtual bool _canReach(::BlockPos const&);

    virtual bool findTargetBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InspectBookshelfGoal(::Mob&);
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
    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);

    MCNAPI bool $_canReach(::BlockPos const&);

    MCNAPI bool $findTargetBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
