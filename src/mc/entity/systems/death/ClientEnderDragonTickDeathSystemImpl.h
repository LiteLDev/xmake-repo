#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/Filter.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/EnderDragonFlagComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/ActorTickedComponent.h"
#include "mc/entity/components/ParticleEventDispatcherComponent.h"
#include "mc/entity/components/RandomReferenceComponent.h"
#include "mc/entity/components/WingFlapDataComponent.h"
#include "mc/entity/components/death/DeathTickingComponent.h"
#include "mc/entity/components/death/TickDeathNeededComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorOwnerComponent;
#endif // @header-generator platform
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorTickedComponent;
struct DeathTickingComponent;
struct EnderDragonFlagComponent;
struct ParticleEventDispatcherComponent;
#endif // @header-generator platform
struct ParticleEventRequestQueueComponent;
struct RandomComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct RandomReferenceComponent;
struct StateVectorComponent;
struct TickDeathNeededComponent;
struct WingFlapDataComponent;
#endif // @header-generator platform
// clang-format on

struct ClientEnderDragonTickDeathSystemImpl
#if defined(LL_PLAT_A) // @header-generator platform
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ActorTickedComponent, TickDeathNeededComponent, EnderDragonFlagComponent>,
      Read<DeathTickingComponent>,
      Write<
          ActorOwnerComponent,
          ParticleEventDispatcherComponent,
          RandomReferenceComponent,
          StateVectorComponent,
          WingFlapDataComponent>,
      AddRemove<>,
      GlobalRead<>,
      GlobalWrite<>,
      EntityFactoryT<>>> {
#else // @header-generator platform
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
      ::Read<::DeathTickingComponent>,
      ::Write<
          ::ActorOwnerComponent,
          ::ParticleEventDispatcherComponent,
          ::RandomReferenceComponent,
          ::StateVectorComponent,
          ::WingFlapDataComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ClientEnderDragonTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, EnderDragonFlagComponent>, Read<DeathTickingComponent>, Write<ActorOwnerComponent, ParticleEventDispatcherComponent, RandomReferenceComponent, StateVectorComponent, WingFlapDataComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
            ::Read<::DeathTickingComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ParticleEventDispatcherComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _tick(
#else // @header-generator platform
    MCAPI static void _tick(
#endif // @header-generator platform
        ::StrictEntityContext const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::DeathTickingComponent const&,
        ::ActorOwnerComponent&,
        ::ParticleEventDispatcherComponent&,
        ::RandomReferenceComponent&,
        ::StateVectorComponent&,
        ::WingFlapDataComponent&,
        ::ViewT<StrictEntityContext, RandomComponent>,
        ::ViewT<StrictEntityContext, ParticleEventRequestQueueComponent>
#else // @header-generator platform
        ::DeathTickingComponent const&                                       deathTicking,
        ::ActorOwnerComponent&                                               actorOwner,
        ::ParticleEventDispatcherComponent&                                  particleEventDispatcherComponent,
        ::RandomReferenceComponent&                                          randomReference,
        ::StateVectorComponent&                                              stateVector,
        ::WingFlapDataComponent&                                             wingFlapData,
        ::ViewT<::StrictEntityContext, ::RandomComponent>                    randomView,
        ::ViewT<::StrictEntityContext, ::ParticleEventRequestQueueComponent> particleEventRequestQueueView
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
    MCNAPI void $tick(
#else // @header-generator platform
    MCAPI void $tick(
#endif // @header-generator platform
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
            Filter<ActorTickedComponent, TickDeathNeededComponent, EnderDragonFlagComponent>,
            Read<DeathTickingComponent>,
            Write<
                ActorOwnerComponent,
                ParticleEventDispatcherComponent,
                RandomReferenceComponent,
                StateVectorComponent,
                WingFlapDataComponent>,
            AddRemove<>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
            ::Read<::DeathTickingComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ParticleEventDispatcherComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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
