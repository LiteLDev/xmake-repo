#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/optional_ref.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/systems/OnFireSystem.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OnFireServerSystem();

    virtual void tick(::EntityRegistry&);
#else // @header-generator platform
    virtual void tick(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    _tickServer(::EntityContext&, ::ActorOwnerComponent&, ::OnFireComponent&, ::Optional<const AbilitiesComponent>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void _tickServer(
        ::EntityContext&                       entity,
        ::ActorOwnerComponent&                 actorOwnerComponent,
        ::OnFireComponent&                     onFireComponent,
        ::Optional<::AbilitiesComponent const> abilities
    );
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
