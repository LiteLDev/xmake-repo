#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
namespace AgentComponents { class Move; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

class AgentMoveCommandSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AgentMoveCommandSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void cleanUp(::EntityContext&, float);

    MCNAPI static void initialize(::EntityContext&, ::AgentComponents::ActionDetails&, ::AgentComponents::Move&);

    MCNAPI static void tickMove(::EntityContext&, ::AgentComponents::ActionDetails&, ::AgentComponents::Move&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
