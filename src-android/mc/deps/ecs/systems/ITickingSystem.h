#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ISystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class StrictEntityContext;
// clang-format on

class ITickingSystem : public ::ISystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITickingSystem();

    virtual void tick(::EntityRegistry&) = 0;

    virtual void singleTick(::EntityRegistry&, ::StrictEntityContext&);

    virtual void singleTick(::EntityRegistry&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $singleTick(::EntityRegistry&, ::StrictEntityContext&);

    MCNAPI void $singleTick(::EntityRegistry&, ::EntityContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
