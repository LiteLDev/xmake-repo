#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/EnderDragonFlagComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorDefinitionIdentifierComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/ActorTickedComponent.h"
#include "mc/entity/components/ActorUniqueIDComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/RandomReferenceComponent.h"
#include "mc/entity/components/SoundEventPlayerComponent.h"
#include "mc/entity/components/SpawnExperienceOrbRequestQueueComponent.h"
#include "mc/entity/components/WingFlapDataComponent.h"
#include "mc/entity/components/death/DeathTickingComponent.h"
#include "mc/entity/components/death/TickDeathNeededComponent.h"
#include "mc/entity/components_json_legacy/BossComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct SoundEventRequestQueueComponent;
// clang-format on

struct ServerEnderDragonTickDeathSystemImpl
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ActorTickedComponent, TickDeathNeededComponent, EnderDragonFlagComponent>,
      Read<
          ActorDataFlagComponent,
          ActorDefinitionIdentifierComponent,
          ActorUniqueIDComponent,
          DeathTickingComponent,
          DimensionTypeComponent,
          SoundEventPlayerComponent>,
      Write<ActorOwnerComponent, RandomReferenceComponent, StateVectorComponent, WingFlapDataComponent, BossComponent>,
      AddRemove<>,
      GlobalRead<>,
      GlobalWrite<SpawnExperienceOrbRequestQueueComponent>,
      EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerEnderDragonTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, EnderDragonFlagComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DeathTickingComponent, DimensionTypeComponent, SoundEventPlayerComponent>, Write<ActorOwnerComponent, RandomReferenceComponent, StateVectorComponent, WingFlapDataComponent, BossComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<SpawnExperienceOrbRequestQueueComponent>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(
        ::StrictEntityContext const&,
        ::ActorDataFlagComponent const&,
        ::ActorDefinitionIdentifierComponent const&,
        ::ActorUniqueIDComponent const&,
        ::DeathTickingComponent const&,
        ::DimensionTypeComponent const&,
        ::SoundEventPlayerComponent const&,
        ::ActorOwnerComponent&,
        ::StateVectorComponent&,
        ::WingFlapDataComponent&,
        ::Optional<BossComponent>,
        ::SpawnExperienceOrbRequestQueueComponent&,
        ::ViewT<StrictEntityContext, SoundEventRequestQueueComponent>
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
            Read<
                ActorDataFlagComponent,
                ActorDefinitionIdentifierComponent,
                ActorUniqueIDComponent,
                DeathTickingComponent,
                DimensionTypeComponent,
                SoundEventPlayerComponent>,
            Write<
                ActorOwnerComponent,
                RandomReferenceComponent,
                StateVectorComponent,
                WingFlapDataComponent,
                BossComponent>,
            AddRemove<>,
            GlobalRead<>,
            GlobalWrite<SpawnExperienceOrbRequestQueueComponent>,
            EntityFactoryT<>>&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
