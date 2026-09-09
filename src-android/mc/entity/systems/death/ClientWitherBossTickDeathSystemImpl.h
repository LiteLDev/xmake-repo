#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/WitherBossFlagComponent.h"
#include "mc/entity/components/ActorTickedComponent.h"
#include "mc/entity/components/OverlayAlphaComponent.h"
#include "mc/entity/components/ShieldFlickerComponent.h"
#include "mc/entity/components/SwellComponent.h"
#include "mc/entity/components/SynchedActorDataComponent.h"
#include "mc/entity/components/death/DeathTickingComponent.h"
#include "mc/entity/components/death/TickDeathNeededComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on

struct ClientWitherBossTickDeathSystemImpl
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ActorTickedComponent, TickDeathNeededComponent, WitherBossFlagComponent>,
      Read<DeathTickingComponent>,
      Write<OverlayAlphaComponent, ShieldFlickerComponent, SwellComponent, SynchedActorDataComponent>,
      AddRemove<>,
      GlobalRead<>,
      GlobalWrite<>,
      EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientWitherBossTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, WitherBossFlagComponent>, Read<DeathTickingComponent>, Write<OverlayAlphaComponent, ShieldFlickerComponent, SwellComponent, SynchedActorDataComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(
        ::StrictEntityContext const&,
        ::DeathTickingComponent const&,
        ::OverlayAlphaComponent&,
        ::ShieldFlickerComponent&,
        ::SwellComponent&,
        ::SynchedActorDataComponent&
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
            Filter<ActorTickedComponent, TickDeathNeededComponent, WitherBossFlagComponent>,
            Read<DeathTickingComponent>,
            Write<OverlayAlphaComponent, ShieldFlickerComponent, SwellComponent, SynchedActorDataComponent>,
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
