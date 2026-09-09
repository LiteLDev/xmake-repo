#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/EnderDragonFlagComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/ActorTickedComponent.h"
#include "mc/entity/components/ParticleEventDispatcherComponent.h"
#include "mc/entity/components/RandomReferenceComponent.h"
#include "mc/entity/components/WingFlapDataComponent.h"
#include "mc/entity/components/death/DeathTickingComponent.h"
#include "mc/entity/components/death/TickDeathNeededComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ParticleEventRequestQueueComponent;
struct RandomComponent;
// clang-format on

struct ClientEnderDragonTickDeathSystemImpl
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
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientEnderDragonTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, EnderDragonFlagComponent>, Read<DeathTickingComponent>, Write<ActorOwnerComponent, ParticleEventDispatcherComponent, RandomReferenceComponent, StateVectorComponent, WingFlapDataComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(
        ::StrictEntityContext const&,
        ::DeathTickingComponent const&,
        ::ActorOwnerComponent&,
        ::ParticleEventDispatcherComponent&,
        ::RandomReferenceComponent&,
        ::StateVectorComponent&,
        ::WingFlapDataComponent&,
        ::ViewT<StrictEntityContext, RandomComponent>,
        ::ViewT<StrictEntityContext, ParticleEventRequestQueueComponent>
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
    MCNAPI void $tick(
        ::StrictExecutionContext<
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
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
