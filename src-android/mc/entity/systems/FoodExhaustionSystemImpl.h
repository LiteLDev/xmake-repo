#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/CamelFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/OnGroundFlagComponent.h"
#include "mc/deps/vanilla_components/ParrotFlagComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorGameTypeComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/AttributeRequestComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/ExhaustionComponent.h"
#include "mc/entity/components/ExternalDataComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/ServerPlayerCurrentMovementComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#include "mc/entity/components/WasInWaterFlagComponent.h"

namespace FoodExhaustionSystemImpl {

struct FoodExhaustionSystemImpl : public ::IStrictTickingSystem<StrictExecutionContext<
                                      Filter<
                                          ActorMovementTickNeededComponent,
                                          PassengerComponent,
                                          PlayerComponent,
                                          HorseFlagComponent,
                                          MobFlagComponent,
                                          ParrotFlagComponent,
                                          VehicleComponent,
                                          CamelFlagComponent>,
                                      Read<
                                          DimensionTypeComponent,
                                          ExhaustionComponent,
                                          OnGroundFlagComponent,
                                          ActorGameTypeComponent,
                                          ServerPlayerCurrentMovementComponent,
                                          StateVectorComponent,
                                          ActorDataFlagComponent,
                                          WasInWaterFlagComponent,
                                          ActorRotationComponent,
                                          MobBodyRotationComponent,
                                          PassengerComponent,
                                          RenderRotationComponent,
                                          StandAnimationComponent,
                                          AABBShapeComponent,
                                          OffsetsComponent,
                                          VanillaOffsetComponent,
                                          PassengerRenderingRidingOffsetComponent>,
                                      Write<>,
                                      AddRemove<AttributeRequestComponent>,
                                      GlobalRead<LocalConstBlockSourceFactoryComponent, ExternalDataComponent>,
                                      GlobalWrite<>,
                                      EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FoodExhaustionSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorMovementTickNeededComponent, PassengerComponent, PlayerComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent>, Read<DimensionTypeComponent, ExhaustionComponent, OnGroundFlagComponent, ActorGameTypeComponent, ServerPlayerCurrentMovementComponent, StateVectorComponent, ActorDataFlagComponent, WasInWaterFlagComponent, ActorRotationComponent, MobBodyRotationComponent, PassengerComponent, RenderRotationComponent, StandAnimationComponent, AABBShapeComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<>, AddRemove<AttributeRequestComponent>, GlobalRead<LocalConstBlockSourceFactoryComponent, ExternalDataComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
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
            Filter<
                ActorMovementTickNeededComponent,
                PassengerComponent,
                PlayerComponent,
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent>,
            Read<
                DimensionTypeComponent,
                ExhaustionComponent,
                OnGroundFlagComponent,
                ActorGameTypeComponent,
                ServerPlayerCurrentMovementComponent,
                StateVectorComponent,
                ActorDataFlagComponent,
                WasInWaterFlagComponent,
                ActorRotationComponent,
                MobBodyRotationComponent,
                PassengerComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                AABBShapeComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent>,
            Write<>,
            AddRemove<AttributeRequestComponent>,
            GlobalRead<LocalConstBlockSourceFactoryComponent, ExternalDataComponent>,
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

} // namespace FoodExhaustionSystemImpl
