#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/deps/vanilla_components/WitherBossFlagComponent.h"
#include "mc/entity/components/ActorDefinitionIdentifierComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/ActorTickedComponent.h"
#include "mc/entity/components/ActorUniqueIDComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/OverlayAlphaComponent.h"
#include "mc/entity/components/ShieldFlickerComponent.h"
#include "mc/entity/components/SoundEventPlayerComponent.h"
#include "mc/entity/components/SpawnExperienceOrbRequestQueueComponent.h"
#include "mc/entity/components/SwellComponent.h"
#include "mc/entity/components/SynchedActorDataComponent.h"
#include "mc/entity/components/death/DeathTickingComponent.h"
#include "mc/entity/components/death/TickDeathNeededComponent.h"
#include "mc/entity/components_json_legacy/ExperienceRewardComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct IsDeadFlagComponent;
struct SoundEventRequestQueueComponent;
// clang-format on

struct ServerWitherBossTickDeathSystemImpl
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ActorTickedComponent, TickDeathNeededComponent, WitherBossFlagComponent>,
      Read<
          ActorDataFlagComponent,
          ActorDefinitionIdentifierComponent,
          ActorUniqueIDComponent,
          DeathTickingComponent,
          DimensionTypeComponent,
          SoundEventPlayerComponent,
          StateVectorComponent,
          ExperienceRewardComponent>,
      Write<
          ActorOwnerComponent,
          OverlayAlphaComponent,
          ShieldFlickerComponent,
          SwellComponent,
          SynchedActorDataComponent>,
      AddRemove<>,
      GlobalRead<>,
      GlobalWrite<SpawnExperienceOrbRequestQueueComponent>,
      EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerWitherBossTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, WitherBossFlagComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DeathTickingComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, ExperienceRewardComponent>, Write<ActorOwnerComponent, OverlayAlphaComponent, ShieldFlickerComponent, SwellComponent, SynchedActorDataComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<SpawnExperienceOrbRequestQueueComponent>, EntityFactoryT<>>&);
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
        ::StateVectorComponent const&,
        ::ActorOwnerComponent&,
        ::OverlayAlphaComponent&,
        ::ShieldFlickerComponent&,
        ::SwellComponent&,
        ::SynchedActorDataComponent&,
        ::Optional<const ExperienceRewardComponent>,
        ::SpawnExperienceOrbRequestQueueComponent&,
        ::ViewT<StrictEntityContext, SoundEventRequestQueueComponent>,
        ::EntityModifier<IsDeadFlagComponent>&
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
            Read<
                ActorDataFlagComponent,
                ActorDefinitionIdentifierComponent,
                ActorUniqueIDComponent,
                DeathTickingComponent,
                DimensionTypeComponent,
                SoundEventPlayerComponent,
                StateVectorComponent,
                ExperienceRewardComponent>,
            Write<
                ActorOwnerComponent,
                OverlayAlphaComponent,
                ShieldFlickerComponent,
                SwellComponent,
                SynchedActorDataComponent>,
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
