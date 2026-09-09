#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
// clang-format on

class BreakBlockNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mBlockPos;
    ::ll::TypedStorage<4, 4, int>                           mNumTicksToBreak;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mStartingBlock;
    ::ll::TypedStorage<4, 4, int>                           mNumTicksBreaking;
    ::ll::TypedStorage<1, 1, bool>                          mPreActionDone;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BreakBlockNode();

    virtual ::BehaviorStatus tick(::Actor&);

    virtual void initializeFromDefinition(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BreakBlockNode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BehaviorStatus $tick(::Actor&);

    MCNAPI void $initializeFromDefinition(::Actor&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
