#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/ActorTypeComponent.h"
#include "mc/deps/vanilla_components/CamelFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAbilitiesComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/ParrotFlagComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorGameTypeComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/CanStandOnSnowFlagComponent.h"
#include "mc/entity/components/DepenetrationComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/ExternalDataComponent.h"
#include "mc/entity/components/FallDistanceComponent.h"
#include "mc/entity/components/HasLightweightFamilyFlagComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/MoveTowardsClosestSpaceFlagComponent.h"
#include "mc/entity/components/MovementInterpolatorComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
// clang-format on

struct MoveTowardsClosestSpaceSystemImpl : public ::IStrictTickingSystem<StrictExecutionContext<
                                               Filter<
                                                   CanStandOnSnowFlagComponent,
                                                   HasLightweightFamilyFlagComponent,
                                                   HorseFlagComponent,
                                                   MobFlagComponent,
                                                   ParrotFlagComponent,
                                                   VehicleComponent,
                                                   CamelFlagComponent,
                                                   PlayerComponent,
                                                   ActorMovementTickNeededComponent,
                                                   PassengerComponent>,
                                               Read<
                                                   AABBShapeComponent,
                                                   MovementAbilitiesComponent,
                                                   ActorTypeComponent,
                                                   FallDistanceComponent,
                                                   PassengerComponent,
                                                   ActorGameTypeComponent,
                                                   ActorDataFlagComponent,
                                                   VehicleComponent,
                                                   ActorRotationComponent,
                                                   MobBodyRotationComponent,
                                                   RenderRotationComponent,
                                                   StandAnimationComponent,
                                                   OffsetsComponent,
                                                   VanillaOffsetComponent,
                                                   PassengerRenderingRidingOffsetComponent,
                                                   DepenetrationComponent,
                                                   DimensionTypeComponent,
                                                   MovementInterpolatorComponent>,
                                               Write<StateVectorComponent>,
                                               AddRemove<MoveTowardsClosestSpaceFlagComponent>,
                                               GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
                                               GlobalWrite<>,
                                               EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveTowardsClosestSpaceSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MoveTowardsClosestSpaceSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<CanStandOnSnowFlagComponent, HasLightweightFamilyFlagComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent, ActorMovementTickNeededComponent, PassengerComponent>, Read<AABBShapeComponent, MovementAbilitiesComponent, ActorTypeComponent, FallDistanceComponent, PassengerComponent, ActorGameTypeComponent, ActorDataFlagComponent, VehicleComponent, ActorRotationComponent, MobBodyRotationComponent, RenderRotationComponent, StandAnimationComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent, DepenetrationComponent, DimensionTypeComponent, MovementInterpolatorComponent>, Write<StateVectorComponent>, AddRemove<MoveTowardsClosestSpaceFlagComponent>, GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doTick(
        ::StrictEntityContext const&,
        ::ActorDataFlagComponent const&,
        ::AABBShapeComponent const&,
        ::DepenetrationComponent const&,
        ::Optional<const MovementInterpolatorComponent>,
        ::StateVectorComponent&,
        ::StrictExecutionContext<
            Filter<
                CanStandOnSnowFlagComponent,
                HasLightweightFamilyFlagComponent,
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent,
                PlayerComponent,
                ActorMovementTickNeededComponent,
                PassengerComponent>,
            Read<
                AABBShapeComponent,
                MovementAbilitiesComponent,
                ActorTypeComponent,
                FallDistanceComponent,
                PassengerComponent,
                ActorGameTypeComponent,
                ActorDataFlagComponent,
                VehicleComponent,
                ActorRotationComponent,
                MobBodyRotationComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent,
                DepenetrationComponent,
                DimensionTypeComponent,
                MovementInterpolatorComponent>,
            Write<StateVectorComponent>,
            AddRemove<MoveTowardsClosestSpaceFlagComponent>,
            GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        bool,
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
                CanStandOnSnowFlagComponent,
                HasLightweightFamilyFlagComponent,
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent,
                PlayerComponent,
                ActorMovementTickNeededComponent,
                PassengerComponent>,
            Read<
                AABBShapeComponent,
                MovementAbilitiesComponent,
                ActorTypeComponent,
                FallDistanceComponent,
                PassengerComponent,
                ActorGameTypeComponent,
                ActorDataFlagComponent,
                VehicleComponent,
                ActorRotationComponent,
                MobBodyRotationComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent,
                DepenetrationComponent,
                DimensionTypeComponent,
                MovementInterpolatorComponent>,
            Write<StateVectorComponent>,
            AddRemove<MoveTowardsClosestSpaceFlagComponent>,
            GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
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
