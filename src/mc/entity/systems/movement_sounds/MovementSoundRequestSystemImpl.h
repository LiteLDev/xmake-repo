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
#include "mc/deps/ecs/strict/EntityModifier.h"
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
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorDefinitionIdentifierComponent.h"
#include "mc/entity/components/ActorUniqueIDComponent.h"
#include "mc/entity/components/ClimbingLadderBlockComponent.h"
#include "mc/entity/components/CurrentlyStandingOnBlockComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/MovementSoundComponent.h"
#include "mc/entity/components/ShouldPlayMovementSoundComponent.h"
#include "mc/entity/components/ShouldPlayStepSoundComponent.h"
#include "mc/entity/components/SoundEventPlayerComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct ClimbingLadderBlockComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
#endif // @header-generator platform
struct MakesLavaStepSoundComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MovementSoundComponent;
struct ShouldPlayMovementSoundComponent;
struct ShouldPlayStepSoundComponent;
struct SoundEventPlayerComponent;
#endif // @header-generator platform
struct SoundEventRequestQueueComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct StateVectorComponent;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct MovementSoundRequestSystemImpl : public ::IStrictTickingSystem<StrictExecutionContext<
                                            Filter<ShouldPlayMovementSoundComponent>,
                                            Read<
                                                ActorDataFlagComponent,
                                                ActorDefinitionIdentifierComponent,
                                                ActorUniqueIDComponent,
                                                DimensionTypeComponent,
                                                SoundEventPlayerComponent,
                                                StateVectorComponent,
                                                MovementSoundComponent,
                                                ClimbingLadderBlockComponent,
                                                CurrentlyStandingOnBlockComponent>,
                                            Write<>,
                                            AddRemove<ShouldPlayStepSoundComponent>,
                                            GlobalRead<>,
                                            GlobalWrite<>,
                                            EntityFactoryT<>>> {
#else // @header-generator platform
struct MovementSoundRequestSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                            ::Filter<::ShouldPlayMovementSoundComponent>,
                                            ::Read<
                                                ::ActorDataFlagComponent,
                                                ::ActorDefinitionIdentifierComponent,
                                                ::ActorUniqueIDComponent,
                                                ::DimensionTypeComponent,
                                                ::SoundEventPlayerComponent,
                                                ::StateVectorComponent,
                                                ::MovementSoundComponent,
                                                ::ClimbingLadderBlockComponent,
                                                ::CurrentlyStandingOnBlockComponent>,
                                            ::Write<>,
                                            ::AddRemove<::ShouldPlayStepSoundComponent>,
                                            ::GlobalRead<>,
                                            ::GlobalWrite<>,
                                            ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MovementSoundRequestSystemImpl();
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::StrictExecutionContext<Filter<ShouldPlayMovementSoundComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, MovementSoundComponent, ClimbingLadderBlockComponent, CurrentlyStandingOnBlockComponent>, Write<>, AddRemove<ShouldPlayStepSoundComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<ShouldPlayMovementSoundComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, MovementSoundComponent, ClimbingLadderBlockComponent, CurrentlyStandingOnBlockComponent>, Write<>, AddRemove<ShouldPlayStepSoundComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
#else // @header-generator platform
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void doMovementSoundRequestSystem(
        ::StrictEntityContext const&,
        ::ActorDataFlagComponent const&,
        ::ActorDefinitionIdentifierComponent const&,
        ::ActorUniqueIDComponent const&,
        ::DimensionTypeComponent const&,
        ::SoundEventPlayerComponent const&,
        ::StateVectorComponent const&,
        ::MovementSoundComponent const&,
        ::Optional<const ClimbingLadderBlockComponent>,
        ::Optional<const CurrentlyStandingOnBlockComponent>,
        ::Optional<const MakesLavaStepSoundComponent>,
        ::EntityModifier<ShouldPlayStepSoundComponent>,
        ::ViewT<StrictEntityContext, SoundEventRequestQueueComponent>
#else // @header-generator platform
    MCAPI static void doMovementSoundRequestSystem(
        ::StrictEntityContext const&                                      entity,
        ::ActorDataFlagComponent const&                                   actorFlags,
        ::ActorDefinitionIdentifierComponent const&                       actorIdentifier,
        ::ActorUniqueIDComponent const&                                   actorUniqueID,
        ::DimensionTypeComponent const&                                   dimensionType,
        ::SoundEventPlayerComponent const&                                soundEventPlayerComponent,
        ::StateVectorComponent const&                                     stateVectorComponent,
        ::MovementSoundComponent const&                                   movementSoundComponent,
        ::Optional<::ClimbingLadderBlockComponent const>                  climbingLadderBlockComponent,
        ::Optional<::CurrentlyStandingOnBlockComponent const>             currentlyStandingOnBlockComponent,
        ::Optional<::MakesLavaStepSoundComponent const>                   makesLavaStepSoundComponent,
        ::EntityModifier<::ShouldPlayStepSoundComponent>                  entityModifier,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> requestQueueView
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void prepareForStepSound(
        ::StrictEntityContext const&,
        ::MovementSoundComponent const&,
        ::Optional<const CurrentlyStandingOnBlockComponent>,
        ::EntityModifier<ShouldPlayStepSoundComponent>&
#else // @header-generator platform
    MCAPI static void prepareForStepSound(
        ::StrictEntityContext const&                          entity,
        ::MovementSoundComponent const&                       movementSoundComponent,
        ::Optional<::CurrentlyStandingOnBlockComponent const> currentlyStandingOnBlockComponent,
        ::EntityModifier<::ShouldPlayStepSoundComponent>&     entityModifier
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
            Filter<ShouldPlayMovementSoundComponent>,
            Read<
                ActorDataFlagComponent,
                ActorDefinitionIdentifierComponent,
                ActorUniqueIDComponent,
                DimensionTypeComponent,
                SoundEventPlayerComponent,
                StateVectorComponent,
                MovementSoundComponent,
                ClimbingLadderBlockComponent,
                CurrentlyStandingOnBlockComponent>,
            Write<>,
            AddRemove<ShouldPlayStepSoundComponent>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $singleTick(
#else // @header-generator platform
    MCAPI void $singleTick(
#endif // @header-generator platform
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
            Filter<ShouldPlayMovementSoundComponent>,
            Read<
                ActorDataFlagComponent,
                ActorDefinitionIdentifierComponent,
                ActorUniqueIDComponent,
                DimensionTypeComponent,
                SoundEventPlayerComponent,
                StateVectorComponent,
                MovementSoundComponent,
                ClimbingLadderBlockComponent,
                CurrentlyStandingOnBlockComponent>,
            Write<>,
            AddRemove<ShouldPlayStepSoundComponent>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        ::StrictEntityContext&
#else // @header-generator platform
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
