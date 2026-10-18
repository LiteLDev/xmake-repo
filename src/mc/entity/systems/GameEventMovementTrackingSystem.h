#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class ActorOwnerComponent;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class EntityRegistry;
class GameEventMovementTrackingComponent;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
struct RailMovementComponent;
// clang-format on

class GameEventMovementTrackingSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameEventMovementTrackingSystem();

    virtual void tick(::EntityRegistry&);
#else // @header-generator platform
    virtual void tick(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _tickGameEventMovementTrackingComponent(
        ::ActorOwnerComponent&,
        ::GameEventMovementTrackingComponent&,
        ::Optional<const RailMovementComponent>
#else // @header-generator platform
    MCAPI static void _tickGameEventMovementTrackingComponent(
        ::ActorOwnerComponent&                    actorOwnerComponent,
        ::GameEventMovementTrackingComponent&     gameEventMovementTrackingComponent,
        ::Optional<::RailMovementComponent const> railMovementComponent
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $tick(::EntityRegistry& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
