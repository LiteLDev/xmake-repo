#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/systems/OnFireSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class EntityContext;
class EntityRegistry;
struct AbilitiesComponent;
struct OnFireComponent;
// clang-format on

class OnFireServerSystem : public ::OnFireSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnFireServerSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _tickServer(::EntityContext&, ::ActorOwnerComponent&, ::OnFireComponent&, ::Optional<const AbilitiesComponent>);
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
