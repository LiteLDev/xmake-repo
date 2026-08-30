#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class UseActorNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mDelayCounter;
    ::ll::TypedStorage<1, 1, bool> mRightMouseDown;
    ::ll::TypedStorage<1, 1, bool> mPreActionDone;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UseActorNode();

    virtual ::BehaviorStatus tick(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UseActorNode();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
