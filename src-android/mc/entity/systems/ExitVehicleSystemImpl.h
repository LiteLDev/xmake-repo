#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
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
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/ActorSetPositionRequestComponent.h"
#include "mc/entity/components/CanStandOnSnowFlagComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/EjectedByActivatorRailFlagComponent.h"
#include "mc/entity/components/ExternalDataComponent.h"
#include "mc/entity/components/FallDistanceComponent.h"
#include "mc/entity/components/HasLightweightFamilyFlagComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/PostTickPositionDeltaComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/StopRidingRequestComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
class GetCollisionShapeInterface;
class IConstBlockSource;
class StrictEntityContext;
class Vec3;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct ActorDataSeatOffsetComponent;
struct ActorIsBeingDestroyedFlagComponent;
struct DoesServerAuthOnlyDismountFlagComponent;
struct ExitFromPassengerFlagComponent;
struct IsBeingTeleportedFlagComponent;
struct MovementInterpolatorComponent;
namespace VehicleUtils { struct VehicleDirections; }
// clang-format on

struct ExitVehicleSystemImpl : public ::IStrictTickingSystem<StrictExecutionContext<
                                   Filter<
                                       CanStandOnSnowFlagComponent,
                                       HasLightweightFamilyFlagComponent,
                                       HorseFlagComponent,
                                       MobFlagComponent,
                                       ParrotFlagComponent,
                                       VehicleComponent,
                                       CamelFlagComponent,
                                       PlayerComponent,
                                       StopRidingRequestComponent>,
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
                                       DimensionTypeComponent,
                                       EjectedByActivatorRailFlagComponent,
                                       PostTickPositionDeltaComponent>,
                                   Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>,
                                   AddRemove<ActorSetPositionRequestComponent>,
                                   GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
                                   GlobalWrite<>,
                                   EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>          mVersion;
    ::ll::TypedStorage<1, 1, bool const> mIsClient;
    // NOLINTEND

public:
    // prevent constructor by default
    ExitVehicleSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ExitVehicleSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<CanStandOnSnowFlagComponent, HasLightweightFamilyFlagComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent, StopRidingRequestComponent>, Read<AABBShapeComponent, MovementAbilitiesComponent, ActorTypeComponent, FallDistanceComponent, PassengerComponent, ActorGameTypeComponent, ActorDataFlagComponent, VehicleComponent, ActorRotationComponent, MobBodyRotationComponent, RenderRotationComponent, StandAnimationComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent, DimensionTypeComponent, EjectedByActivatorRailFlagComponent, PostTickPositionDeltaComponent>, Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>, AddRemove<ActorSetPositionRequestComponent>, GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<CanStandOnSnowFlagComponent, HasLightweightFamilyFlagComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent, StopRidingRequestComponent>, Read<AABBShapeComponent, MovementAbilitiesComponent, ActorTypeComponent, FallDistanceComponent, PassengerComponent, ActorGameTypeComponent, ActorDataFlagComponent, VehicleComponent, ActorRotationComponent, MobBodyRotationComponent, RenderRotationComponent, StandAnimationComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent, DimensionTypeComponent, EjectedByActivatorRailFlagComponent, PostTickPositionDeltaComponent>, Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>, AddRemove<ActorSetPositionRequestComponent>, GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickExitVehicle(
        ::StrictEntityContext const&,
        ::PassengerComponent const&,
        ::AABBShapeComponent const&,
        ::StateVectorComponent const&,
        ::OffsetsComponent const&,
        ::ActorDataSeatOffsetComponent const&,
        ::ActorRotationComponent&,
        ::Optional<const ExitFromPassengerFlagComponent>,
        ::Optional<const ActorIsBeingDestroyedFlagComponent>,
        ::Optional<const EjectedByActivatorRailFlagComponent>,
        ::BaseGameVersion const&,
        ::ViewT<
            StrictEntityContext,
            Include<VehicleComponent>,
            Exclude<DoesServerAuthOnlyDismountFlagComponent>,
            const StateVectorComponent,
            const ActorRotationComponent,
            const PostTickPositionDeltaComponent,
            Optional<const MovementInterpolatorComponent>> const&,
        ::EntityModifier<ActorSetPositionRequestComponent>&,
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
                StopRidingRequestComponent>,
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
                DimensionTypeComponent,
                EjectedByActivatorRailFlagComponent,
                PostTickPositionDeltaComponent>,
            Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>,
            AddRemove<ActorSetPositionRequestComponent>,
            GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        bool,
        ::IConstBlockSource const&
    );

    MCNAPI static std::tuple<
        ViewT<
            StrictEntityContext,
            Include<const StopRidingRequestComponent>,
            Exclude<const IsBeingTeleportedFlagComponent>,
            const PassengerComponent,
            const AABBShapeComponent,
            const StateVectorComponent,
            const OffsetsComponent,
            const ActorDataSeatOffsetComponent,
            ActorRotationComponent,
            Optional<const ExitFromPassengerFlagComponent>,
            Optional<const ActorIsBeingDestroyedFlagComponent>,
            Optional<const EjectedByActivatorRailFlagComponent>>,
        ViewT<
            StrictEntityContext,
            Include<VehicleComponent>,
            Exclude<DoesServerAuthOnlyDismountFlagComponent>,
            const StateVectorComponent,
            const ActorRotationComponent,
            const PostTickPositionDeltaComponent,
            Optional<const MovementInterpolatorComponent>>,
        EntityModifier<ActorSetPositionRequestComponent>,
        ViewT<StrictEntityContext, const DimensionTypeComponent>,
        OptionalGlobal<const LocalConstBlockSourceFactoryComponent>>
    createViews(
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
                StopRidingRequestComponent>,
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
                DimensionTypeComponent,
                EjectedByActivatorRailFlagComponent,
                PostTickPositionDeltaComponent>,
            Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>,
            AddRemove<ActorSetPositionRequestComponent>,
            GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&
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
                StopRidingRequestComponent>,
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
                DimensionTypeComponent,
                EjectedByActivatorRailFlagComponent,
                PostTickPositionDeltaComponent>,
            Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>,
            AddRemove<ActorSetPositionRequestComponent>,
            GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&
    );

    MCNAPI void $singleTick(
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
                StopRidingRequestComponent>,
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
                DimensionTypeComponent,
                EjectedByActivatorRailFlagComponent,
                PostTickPositionDeltaComponent>,
            Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>,
            AddRemove<ActorSetPositionRequestComponent>,
            GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
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
