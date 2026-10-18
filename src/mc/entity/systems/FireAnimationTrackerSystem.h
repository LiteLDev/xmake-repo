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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FireAnimationTrackerSystem();

    virtual void tick(::EntityRegistry&);
#else // @header-generator platform
    virtual void tick(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void _tickFireAnimationTrackerComponent(
        ::EntityContext&                    entity,
        ::ActorOwnerComponent&              actorOwnerComponent,
        ::FireAnimationTrackerComponent&    fireAnimationTrackerComponent,
        ::Optional<::OnFireComponent const> onFireComponent
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $tick(::EntityRegistry& registry);
#endif
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
