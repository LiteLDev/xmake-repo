#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class ActorOwnerComponent;
class AmbientSoundComponent;
class EntityRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AmbientSoundSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AmbientSoundSystem();

    virtual void tick(::EntityRegistry&);
#else // @header-generator platform
    virtual void tick(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _tickAmbientSoundComponent(::ActorOwnerComponent&, ::AmbientSoundComponent&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void _tickAmbientSoundComponent(
        ::ActorOwnerComponent&   actorOwnerComponent,
        ::AmbientSoundComponent& ambientSoundComponent
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
