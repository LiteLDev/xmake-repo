#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/OnFireSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityRegistry;
// clang-format on

class OnFireClientSystem : public ::OnFireSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnFireClientSystem();

    virtual void tick(::EntityRegistry&);
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
