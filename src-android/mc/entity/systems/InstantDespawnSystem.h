#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityRegistry;
class InstantDespawnComponent;
struct TickingSystemWithInfo;
// clang-format on

class InstantDespawnSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InstantDespawnSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createInstantDespawningPlayerCleanupSystem();
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
