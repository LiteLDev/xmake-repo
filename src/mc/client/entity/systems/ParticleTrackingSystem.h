#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ClientParticleInitializationComponent;
class ClientParticleTerminationComponent;
class ClientParticleTrackingComponent;
class EntityContext;
class EntityRegistry;
class IClientInstance;
class ParticleSystemEngine;
struct ActorComponent;
// clang-format on

class ParticleTrackingSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleTrackingSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleTrackingSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ParticleTrackingSystem(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickClientParticleComponent(
        ::EntityContext&,
        ::ActorComponent const&,
        ::ClientParticleInitializationComponent&,
        ::ParticleSystemEngine&
    );

    MCNAPI static void tickClientParticleTrackingComponent(
        ::EntityContext&,
        ::ActorComponent const&,
        ::ClientParticleTrackingComponent&,
        ::ClientParticleTerminationComponent&,
        ::ParticleSystemEngine&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ClientParticleInitializationComponent;
class ClientParticleTerminationComponent;
class ClientParticleTrackingComponent;
class EntityContext;
class EntityRegistry;
class ParticleSystemEngine;
struct ActorComponent;
// clang-format on

class ParticleTrackingSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk50d5a6;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleTrackingSystem& operator=(ParticleTrackingSystem const&);
    ParticleTrackingSystem(ParticleTrackingSystem const&);
    ParticleTrackingSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickClientParticleComponent(
        ::EntityContext& entity,
        ::ActorComponent const&,
        ::ClientParticleInitializationComponent& clientParticleComponent,
        ::ParticleSystemEngine&                  particleSystemEngine
    );

    MCNAPI static void tickClientParticleTrackingComponent(
        ::EntityContext& entity,
        ::ActorComponent const&,
        ::ClientParticleTrackingComponent&    clientParticleTrackingComponent,
        ::ClientParticleTerminationComponent& clientParticleTerminationComponent,
        ::ParticleSystemEngine&               particleSystemEngine
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ParticleTrackingSystem {};
#endif // @header-generator platform
#endif // @header-generator platform
