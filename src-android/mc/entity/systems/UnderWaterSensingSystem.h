#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
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

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct GetAttachPositionViews;
struct TickingSystemWithInfo;
// clang-format on

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
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UnderWaterSensingSystem();

    virtual void tick(::StrictExecutionContext<Filter<HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent>, Read<DimensionTypeComponent, StateVectorComponent, UpdateWaterStateRequestComponent, ActorRotationComponent, MobBodyRotationComponent, PassengerComponent, RenderRotationComponent, StandAnimationComponent, ActorDataFlagComponent, AABBShapeComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<>, AddRemove<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent>, Read<DimensionTypeComponent, StateVectorComponent, UpdateWaterStateRequestComponent, ActorRotationComponent, MobBodyRotationComponent, PassengerComponent, RenderRotationComponent, StandAnimationComponent, ActorDataFlagComponent, AABBShapeComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<>, AddRemove<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doUnderWaterSensing(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&,
        ::UpdateWaterStateRequestComponent const&,
        ::Optional<const ActorHeadInWaterFlagComponent>,
        ::EntityModifier<ActorHeadInWaterFlagComponent, ActorHeadWasInWaterFlagComponent>,
        ::GetAttachPositionViews const&,
        ::IConstBlockSource const&
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
    );

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
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
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
