#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityRegistry;
struct GroupSizeComponent;
// clang-format on

class GroupSizeSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GroupSizeSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickComponent(::ActorOwnerComponent&, ::GroupSizeComponent&);
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
