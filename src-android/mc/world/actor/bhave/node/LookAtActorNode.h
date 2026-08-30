#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class LookAtActorNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>         mDelayTicks;
    ::ll::TypedStorage<4, 4, int>         mDelayCounter;
    ::ll::TypedStorage<4, 4, ::ActorType> mEntityType;
    ::ll::TypedStorage<4, 4, int>         mSearchRadius;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LookAtActorNode();

    virtual ::BehaviorStatus tick(::Actor&);

    virtual void initializeFromDefinition(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LookAtActorNode();
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
