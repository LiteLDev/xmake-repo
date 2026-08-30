#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityRegistry;
// clang-format on

class GoalSelectorSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GoalSelectorSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickGoalSelectorComponent(::ActorOwnerComponent&);
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
