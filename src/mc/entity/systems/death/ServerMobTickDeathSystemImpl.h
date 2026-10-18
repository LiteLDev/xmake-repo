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
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataDirtyFlagsComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorDefinitionIdentifierComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/ActorTickedComponent.h"
#include "mc/entity/components/ActorUniqueIDComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/SoundEventPlayerComponent.h"
#include "mc/entity/components/SpawnExperienceOrbRequestQueueComponent.h"
#include "mc/entity/components/death/DeathTickingComponent.h"
#include "mc/entity/components/death/TickDeathNeededComponent.h"
#include "mc/entity/components_json_legacy/ExperienceRewardComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorOwnerComponent;
class ExperienceRewardComponent;
#endif // @header-generator platform
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorTickedComponent;
struct ActorUniqueIDComponent;
struct DeathTickingComponent;
struct DimensionTypeComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct SoundEventPlayerComponent;
#endif // @header-generator platform
struct SoundEventRequestQueueComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SpawnExperienceOrbRequestQueueComponent;
#endif // @header-generator platform
struct SpawnOnDeathComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct StateVectorComponent;
struct TickDeathNeededComponent;
#endif // @header-generator platform
// clang-format on

struct ServerMobTickDeathSystemImpl
#if defined(LL_PLAT_A) // @header-generator platform
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ActorTickedComponent, TickDeathNeededComponent, MobFlagComponent>,
      Read<
          AABBShapeComponent,
          ActorDefinitionIdentifierComponent,
          ActorUniqueIDComponent,
          DimensionTypeComponent,
          ExperienceRewardComponent,
          OffsetsComponent,
          SoundEventPlayerComponent,
          StateVectorComponent,
          PlayerComponent>,
      Write<ActorDataFlagComponent, ActorDataDirtyFlagsComponent, ActorOwnerComponent, DeathTickingComponent>,
      AddRemove<>,
      GlobalRead<>,
      GlobalWrite<SpawnExperienceOrbRequestQueueComponent>,
      EntityFactoryT<>>> {
#else // @header-generator platform
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>,
      ::Read<
          ::AABBShapeComponent,
          ::ActorDefinitionIdentifierComponent,
          ::ActorUniqueIDComponent,
          ::DimensionTypeComponent,
          ::ExperienceRewardComponent,
          ::OffsetsComponent,
          ::SoundEventPlayerComponent,
          ::StateVectorComponent,
          ::PlayerComponent>,
      ::Write<::ActorDataFlagComponent, ::ActorDataDirtyFlagsComponent, ::ActorOwnerComponent, ::DeathTickingComponent>,
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
    virtual ~ServerMobTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, MobFlagComponent>, Read<AABBShapeComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, ExperienceRewardComponent, OffsetsComponent, SoundEventPlayerComponent, StateVectorComponent, PlayerComponent>, Write<ActorDataFlagComponent, ActorDataDirtyFlagsComponent, ActorOwnerComponent, DeathTickingComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<SpawnExperienceOrbRequestQueueComponent>, EntityFactoryT<>>&);
    // clang-format on
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::ExperienceRewardComponent,
                ::OffsetsComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::PlayerComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::ActorOwnerComponent,
                ::DeathTickingComponent>,
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
        ::StrictEntityContext&,
        ::AABBShapeComponent const&,
        ::ActorDefinitionIdentifierComponent const&,
        ::ActorUniqueIDComponent const&,
        ::DimensionTypeComponent const&,
        ::OffsetsComponent const&,
        ::SoundEventPlayerComponent const&,
        ::StateVectorComponent const&,
        ::ActorDataFlagComponent&,
        ::ActorDataDirtyFlagsComponent&,
        ::ActorOwnerComponent&,
        ::DeathTickingComponent&,
        ::Optional<ExperienceRewardComponent>,
        ::Optional<PlayerComponent>,
        ::Optional<SpawnOnDeathComponent>,
        ::SpawnExperienceOrbRequestQueueComponent&,
        ::ViewT<StrictEntityContext, SoundEventRequestQueueComponent>&
#else // @header-generator platform
    MCAPI static void _tick(
        ::StrictEntityContext&                                             entity,
        ::AABBShapeComponent const&                                        aabbShape,
        ::ActorDefinitionIdentifierComponent const&                        actorIdentifier,
        ::ActorUniqueIDComponent const&                                    actorUniqueID,
        ::DimensionTypeComponent const&                                    dimensionType,
        ::OffsetsComponent const&                                          offsets,
        ::SoundEventPlayerComponent const&                                 soundEventPlayer,
        ::StateVectorComponent const&                                      stateVector,
        ::ActorDataFlagComponent&                                          actorFlags,
        ::ActorDataDirtyFlagsComponent&                                    actorDirtyFlags,
        ::ActorOwnerComponent&                                             actorOwner,
        ::DeathTickingComponent&                                           deathTicking,
        ::Optional<::ExperienceRewardComponent>                            experienceReward,
        ::Optional<::PlayerComponent>                                      player,
        ::Optional<::SpawnOnDeathComponent>                                spawnOnDeath,
        ::SpawnExperienceOrbRequestQueueComponent&                         experienceOrbRequestQueue,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>& soundRequestQueueView
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
            Filter<ActorTickedComponent, TickDeathNeededComponent, MobFlagComponent>,
            Read<
                AABBShapeComponent,
                ActorDefinitionIdentifierComponent,
                ActorUniqueIDComponent,
                DimensionTypeComponent,
                ExperienceRewardComponent,
                OffsetsComponent,
                SoundEventPlayerComponent,
                StateVectorComponent,
                PlayerComponent>,
            Write<ActorDataFlagComponent, ActorDataDirtyFlagsComponent, ActorOwnerComponent, DeathTickingComponent>,
            AddRemove<>,
            GlobalRead<>,
            GlobalWrite<SpawnExperienceOrbRequestQueueComponent>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::ExperienceRewardComponent,
                ::OffsetsComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::PlayerComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::ActorOwnerComponent,
                ::DeathTickingComponent>,
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
