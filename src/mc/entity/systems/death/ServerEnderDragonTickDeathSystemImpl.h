#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
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
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorTickedComponent;
struct ActorUniqueIDComponent;
struct BossComponent;
struct DeathTickingComponent;
struct DimensionTypeComponent;
struct EnderDragonFlagComponent;
struct RandomReferenceComponent;
struct SoundEventPlayerComponent;
#endif // @header-generator platform
struct SoundEventRequestQueueComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SpawnExperienceOrbRequestQueueComponent;
struct StateVectorComponent;
struct TickDeathNeededComponent;
struct WingFlapDataComponent;
#endif // @header-generator platform
// clang-format on

struct ServerEnderDragonTickDeathSystemImpl
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
      ::Read<
          ::ActorDataFlagComponent,
          ::ActorDefinitionIdentifierComponent,
          ::ActorUniqueIDComponent,
          ::DeathTickingComponent,
          ::DimensionTypeComponent,
          ::SoundEventPlayerComponent>,
      ::Write<
          ::ActorOwnerComponent,
          ::RandomReferenceComponent,
          ::StateVectorComponent,
          ::WingFlapDataComponent,
          ::BossComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
      ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerEnderDragonTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, EnderDragonFlagComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DeathTickingComponent, DimensionTypeComponent, SoundEventPlayerComponent>, Write<ActorOwnerComponent, RandomReferenceComponent, StateVectorComponent, WingFlapDataComponent, BossComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<SpawnExperienceOrbRequestQueueComponent>, EntityFactoryT<>>&);
    // clang-format on
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DeathTickingComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent,
                ::BossComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void _tick(
        ::StrictEntityContext const&                                      entity,
        ::ActorDataFlagComponent const&                                   actorFlags,
        ::ActorDefinitionIdentifierComponent const&                       actorIdentifier,
        ::ActorUniqueIDComponent const&                                   actorUniqueID,
        ::DeathTickingComponent const&                                    deathTicking,
        ::DimensionTypeComponent const&                                   dimensionType,
        ::SoundEventPlayerComponent const&                                soundEventPlayerComponent,
        ::ActorOwnerComponent&                                            actorOwner,
        ::StateVectorComponent&                                           stateVector,
        ::WingFlapDataComponent&                                          wingFlapData,
        ::Optional<::BossComponent>                                       boss,
        ::SpawnExperienceOrbRequestQueueComponent&                        experienceOrbRequestQueueComponent,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> soundRequestQueueView
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
#else // @header-generator platform
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DeathTickingComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent,
                ::BossComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
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
