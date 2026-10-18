#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct AttributeRequestComponent;
struct CamelFlagComponent;
struct DimensionTypeComponent;
struct ExhaustionComponent;
struct ExternalDataComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct ServerPlayerCurrentMovementComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
// clang-format on
#endif // @header-generator platform

namespace FoodExhaustionSystemImpl {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct FoodExhaustionSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                      ::Filter<
                                          ::ActorMovementTickNeededComponent,
                                          ::PassengerComponent,
                                          ::PlayerComponent,
                                          ::HorseFlagComponent,
                                          ::MobFlagComponent,
                                          ::ParrotFlagComponent,
                                          ::VehicleComponent,
                                          ::CamelFlagComponent>,
                                      ::Read<
                                          ::DimensionTypeComponent,
                                          ::ExhaustionComponent,
                                          ::OnGroundFlagComponent,
                                          ::ActorGameTypeComponent,
                                          ::ServerPlayerCurrentMovementComponent,
                                          ::StateVectorComponent,
                                          ::ActorDataFlagComponent,
                                          ::WasInWaterFlagComponent,
                                          ::ActorRotationComponent,
                                          ::MobBodyRotationComponent,
                                          ::PassengerComponent,
                                          ::RenderRotationComponent,
                                          ::StandAnimationComponent,
                                          ::AABBShapeComponent,
                                          ::OffsetsComponent,
                                          ::VanillaOffsetComponent,
                                          ::PassengerRenderingRidingOffsetComponent>,
                                      ::Write<>,
                                      ::AddRemove<::AttributeRequestComponent>,
                                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
                                      ::GlobalWrite<>,
                                      ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FoodExhaustionSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorMovementTickNeededComponent, PassengerComponent, PlayerComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent>, Read<DimensionTypeComponent, ExhaustionComponent, OnGroundFlagComponent, ActorGameTypeComponent, ServerPlayerCurrentMovementComponent, StateVectorComponent, ActorDataFlagComponent, WasInWaterFlagComponent, ActorRotationComponent, MobBodyRotationComponent, PassengerComponent, RenderRotationComponent, StandAnimationComponent, AABBShapeComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<>, AddRemove<AttributeRequestComponent>, GlobalRead<LocalConstBlockSourceFactoryComponent, ExternalDataComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::PassengerComponent,
                ::PlayerComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::ExhaustionComponent,
                ::OnGroundFlagComponent,
                ::ActorGameTypeComponent,
                ::ServerPlayerCurrentMovementComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::WasInWaterFlagComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::AttributeRequestComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
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
#else // @header-generator platform
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::PassengerComponent,
                ::PlayerComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::ExhaustionComponent,
                ::OnGroundFlagComponent,
                ::ActorGameTypeComponent,
                ::ServerPlayerCurrentMovementComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::WasInWaterFlagComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::AttributeRequestComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
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

} // namespace FoodExhaustionSystemImpl
