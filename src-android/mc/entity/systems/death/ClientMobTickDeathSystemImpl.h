#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
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
#include "mc/entity/components/death/DeathTickingComponent.h"
#include "mc/entity/components/death/TickDeathNeededComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct SoundEventRequestQueueComponent;
// clang-format on

struct ClientMobTickDeathSystemImpl : public ::IStrictTickingSystem<StrictExecutionContext<
                                          Filter<ActorTickedComponent, TickDeathNeededComponent, MobFlagComponent>,
                                          Read<
                                              AABBShapeComponent,
                                              ActorDefinitionIdentifierComponent,
                                              ActorUniqueIDComponent,
                                              DimensionTypeComponent,
                                              OffsetsComponent,
                                              SoundEventPlayerComponent,
                                              StateVectorComponent>,
                                          Write<
                                              ActorDataFlagComponent,
                                              ActorDataDirtyFlagsComponent,
                                              ActorOwnerComponent,
                                              DeathTickingComponent,
                                              PlayerComponent>,
                                          AddRemove<>,
                                          GlobalRead<>,
                                          GlobalWrite<>,
                                          EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientMobTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, MobFlagComponent>, Read<AABBShapeComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, OffsetsComponent, SoundEventPlayerComponent, StateVectorComponent>, Write<ActorDataFlagComponent, ActorDataDirtyFlagsComponent, ActorOwnerComponent, DeathTickingComponent, PlayerComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
        ::Optional<PlayerComponent>,
        ::ViewT<StrictEntityContext, SoundEventRequestQueueComponent>&
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
            Filter<ActorTickedComponent, TickDeathNeededComponent, MobFlagComponent>,
            Read<
                AABBShapeComponent,
                ActorDefinitionIdentifierComponent,
                ActorUniqueIDComponent,
                DimensionTypeComponent,
                OffsetsComponent,
                SoundEventPlayerComponent,
                StateVectorComponent>,
            Write<
                ActorDataFlagComponent,
                ActorDataDirtyFlagsComponent,
                ActorOwnerComponent,
                DeathTickingComponent,
                PlayerComponent>,
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
