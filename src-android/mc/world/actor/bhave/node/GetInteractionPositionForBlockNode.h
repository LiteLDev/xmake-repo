#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class GetInteractionPositionForBlockNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    mTargetBlockPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mAnchorBlockPos;
    ::ll::TypedStorage<1, 1, ::Facing::Name> mFacing;
    ::ll::TypedStorage<4, 4, int>            mMaxSearchDistance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GetInteractionPositionForBlockNode();

    virtual ::BehaviorStatus tick(::Actor&);

    virtual void initializeFromDefinition(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GetInteractionPositionForBlockNode();

    MCNAPI ::Facing::Name parseFacingNameFromString(std::string);
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
