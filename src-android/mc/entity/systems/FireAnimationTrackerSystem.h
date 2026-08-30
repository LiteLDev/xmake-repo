#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityContext;
class EntityRegistry;
class FireAnimationTrackerComponent;
struct OnFireComponent;
// clang-format on

class FireAnimationTrackerSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FireAnimationTrackerSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickFireAnimationTrackerComponent(
        ::EntityContext&,
        ::ActorOwnerComponent&,
        ::FireAnimationTrackerComponent&,
        ::Optional<const OnFireComponent>
    );
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
