#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
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
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/ActorHeadInWaterFlagComponent.h"
#include "mc/deps/vanilla_components/ActorHeadWasInWaterFlagComponent.h"
#include "mc/deps/vanilla_components/CamelFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/ParrotFlagComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/UpdateWaterStateRequestComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorHeadInWaterFlagComponent;
struct ActorHeadWasInWaterFlagComponent;
struct ActorRotationComponent;
struct CamelFlagComponent;
struct DimensionTypeComponent;
#endif // @header-generator platform
struct GetAttachPositionViews;
#if defined(LL_PLAT_A) // @header-generator platform
struct TickingSystemWithInfo;
#else // @header-generator platform
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct UpdateWaterStateRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct UnderWaterSensingSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                                     Filter<
                                         HorseFlagComponent,
                                         MobFlagComponent,
                                         ParrotFlagComponent,
                                         VehicleComponent,
                                         CamelFlagComponent,
                                         PlayerComponent>,
                                     Read<
                                         DimensionTypeComponent,
                                         StateVectorComponent,
                                         UpdateWaterStateRequestComponent,
                                         ActorRotationComponent,
                                         MobBodyRotationComponent,
                                         PassengerComponent,
                                         RenderRotationComponent,
                                         StandAnimationComponent,
                                         ActorDataFlagComponent,
                                         AABBShapeComponent,
                                         OffsetsComponent,
                                         VanillaOffsetComponent,
                                         PassengerRenderingRidingOffsetComponent>,
                                     Write<>,
                                     AddRemove<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>,
                                     GlobalRead<LocalConstBlockSourceFactoryComponent>,
                                     GlobalWrite<>,
                                     EntityFactoryT<>>> {
#else // @header-generator platform
struct UnderWaterSensingSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                                     ::Filter<
                                         ::HorseFlagComponent,
                                         ::MobFlagComponent,
                                         ::ParrotFlagComponent,
                                         ::VehicleComponent,
                                         ::CamelFlagComponent,
                                         ::PlayerComponent>,
                                     ::Read<
                                         ::DimensionTypeComponent,
                                         ::StateVectorComponent,
                                         ::UpdateWaterStateRequestComponent,
                                         ::ActorRotationComponent,
                                         ::MobBodyRotationComponent,
                                         ::PassengerComponent,
                                         ::RenderRotationComponent,
                                         ::StandAnimationComponent,
                                         ::ActorDataFlagComponent,
                                         ::AABBShapeComponent,
                                         ::OffsetsComponent,
                                         ::VanillaOffsetComponent,
                                         ::PassengerRenderingRidingOffsetComponent>,
                                     ::Write<>,
                                     ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
                                     ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                                     ::GlobalWrite<>,
                                     ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~UnderWaterSensingSystem();
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::UpdateWaterStateRequestComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::ActorDataFlagComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::StrictExecutionContext<Filter<HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent>, Read<DimensionTypeComponent, StateVectorComponent, UpdateWaterStateRequestComponent, ActorRotationComponent, MobBodyRotationComponent, PassengerComponent, RenderRotationComponent, StandAnimationComponent, ActorDataFlagComponent, AABBShapeComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<>, AddRemove<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent>, Read<DimensionTypeComponent, StateVectorComponent, UpdateWaterStateRequestComponent, ActorRotationComponent, MobBodyRotationComponent, PassengerComponent, RenderRotationComponent, StandAnimationComponent, ActorDataFlagComponent, AABBShapeComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<>, AddRemove<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
#else // @header-generator platform
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::UpdateWaterStateRequestComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::ActorDataFlagComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
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
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doUnderWaterSensing(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&,
        ::UpdateWaterStateRequestComponent const&,
        ::Optional<const ActorHeadInWaterFlagComponent>,
        ::EntityModifier<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>,
        ::GetAttachPositionViews const&,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void doUnderWaterSensing(
        ::StrictEntityContext const&                                                          entity,
        ::StateVectorComponent const&                                                         stateVectorComponent,
        ::UpdateWaterStateRequestComponent const&                                             request,
        ::Optional<::ActorHeadInWaterFlagComponent const>                                     headInWater,
        ::EntityModifier<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent> modifier,
        ::GetAttachPositionViews const&                                                       views,
        ::IConstBlockSource const&                                                            region
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
            Filter<
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent,
                PlayerComponent>,
            Read<
                DimensionTypeComponent,
                StateVectorComponent,
                UpdateWaterStateRequestComponent,
                ActorRotationComponent,
                MobBodyRotationComponent,
                PassengerComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                ActorDataFlagComponent,
                AABBShapeComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent>,
            Write<>,
            AddRemove<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>,
            GlobalRead<LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::UpdateWaterStateRequestComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::ActorDataFlagComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
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
            Filter<
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent,
                PlayerComponent>,
            Read<
                DimensionTypeComponent,
                StateVectorComponent,
                UpdateWaterStateRequestComponent,
                ActorRotationComponent,
                MobBodyRotationComponent,
                PassengerComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                ActorDataFlagComponent,
                AABBShapeComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent>,
            Write<>,
            AddRemove<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>,
            GlobalRead<LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        ::StrictEntityContext&
#else // @header-generator platform
            ::Filter<
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::UpdateWaterStateRequestComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::ActorDataFlagComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<>,
            ::AddRemove<::ActorHeadInWaterFlagComponent, ::ActorHeadWasInWaterFlagComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
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
