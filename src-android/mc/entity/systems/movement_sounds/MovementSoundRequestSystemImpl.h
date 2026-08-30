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
#include "mc/entity/components/ActorDefinitionIdentifierComponent.h"
#include "mc/entity/components/ActorUniqueIDComponent.h"
#include "mc/entity/components/ClimbingLadderBlockComponent.h"
#include "mc/entity/components/CurrentlyStandingOnBlockComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/MovementSoundComponent.h"
#include "mc/entity/components/ShouldPlayMovementSoundComponent.h"
#include "mc/entity/components/ShouldPlayStepSoundComponent.h"
#include "mc/entity/components/SoundEventPlayerComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MakesLavaStepSoundComponent;
struct SoundEventRequestQueueComponent;
// clang-format on

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
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MovementSoundRequestSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ShouldPlayMovementSoundComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, MovementSoundComponent, ClimbingLadderBlockComponent, CurrentlyStandingOnBlockComponent>, Write<>, AddRemove<ShouldPlayStepSoundComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<ShouldPlayMovementSoundComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, MovementSoundComponent, ClimbingLadderBlockComponent, CurrentlyStandingOnBlockComponent>, Write<>, AddRemove<ShouldPlayStepSoundComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    );

    MCNAPI static void prepareForStepSound(
        ::StrictEntityContext const&,
        ::MovementSoundComponent const&,
        ::Optional<const CurrentlyStandingOnBlockComponent>,
        ::EntityModifier<ShouldPlayStepSoundComponent>&
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
    );

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
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
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
