#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/optional_ref.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Exclude.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/Filter.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
class BlockPos;
class GetCollisionShapeInterface;
#else // @header-generator platform
#endif // @header-generator platform
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
#else // @header-generator platform
struct AABBShapeComponent;
struct ActorDataFlagComponent;
#endif // @header-generator platform
struct ActorDataSeatOffsetComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorGameTypeComponent;
#endif // @header-generator platform
struct ActorIsBeingDestroyedFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct DimensionTypeComponent;
#endif // @header-generator platform
struct DoesServerAuthOnlyDismountFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct EjectedByActivatorRailFlagComponent;
#endif // @header-generator platform
struct ExitFromPassengerFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct IsBeingTeleportedFlagComponent;
#else // @header-generator platform
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MovementAbilitiesComponent;
#endif // @header-generator platform
struct MovementInterpolatorComponent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace VehicleUtils { struct VehicleDirections; }
#else // @header-generator platform
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct PostTickPositionDeltaComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct StopRidingRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct ExitVehicleSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                   ::Filter<
                                       ::CanStandOnSnowFlagComponent,
                                       ::HasLightweightFamilyFlagComponent,
                                       ::HorseFlagComponent,
                                       ::MobFlagComponent,
                                       ::ParrotFlagComponent,
                                       ::VehicleComponent,
                                       ::CamelFlagComponent,
                                       ::PlayerComponent,
                                       ::StopRidingRequestComponent>,
                                   ::Read<
                                       ::AABBShapeComponent,
                                       ::MovementAbilitiesComponent,
                                       ::ActorTypeComponent,
                                       ::FallDistanceComponent,
                                       ::PassengerComponent,
                                       ::ActorGameTypeComponent,
                                       ::ActorDataFlagComponent,
                                       ::VehicleComponent,
                                       ::ActorRotationComponent,
                                       ::MobBodyRotationComponent,
                                       ::RenderRotationComponent,
                                       ::StandAnimationComponent,
                                       ::OffsetsComponent,
                                       ::VanillaOffsetComponent,
                                       ::PassengerRenderingRidingOffsetComponent,
                                       ::DimensionTypeComponent,
                                       ::EjectedByActivatorRailFlagComponent,
                                       ::PostTickPositionDeltaComponent>,
                                   ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
                                   ::AddRemove<::ActorSetPositionRequestComponent>,
                                   ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                                   ::GlobalWrite<>,
                                   ::EntityFactoryT<>>> {
public:
    // ExitVehicleSystemImpl inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::CanStandOnSnowFlagComponent,
            ::HasLightweightFamilyFlagComponent,
            ::HorseFlagComponent,
            ::MobFlagComponent,
            ::ParrotFlagComponent,
            ::VehicleComponent,
            ::CamelFlagComponent,
            ::PlayerComponent,
            ::StopRidingRequestComponent>,
        ::Read<
            ::AABBShapeComponent,
            ::MovementAbilitiesComponent,
            ::ActorTypeComponent,
            ::FallDistanceComponent,
            ::PassengerComponent,
            ::ActorGameTypeComponent,
            ::ActorDataFlagComponent,
            ::VehicleComponent,
            ::ActorRotationComponent,
            ::MobBodyRotationComponent,
            ::RenderRotationComponent,
            ::StandAnimationComponent,
            ::OffsetsComponent,
            ::VanillaOffsetComponent,
            ::PassengerRenderingRidingOffsetComponent,
            ::DimensionTypeComponent,
            ::EjectedByActivatorRailFlagComponent,
            ::PostTickPositionDeltaComponent>,
        ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
        ::AddRemove<::ActorSetPositionRequestComponent>,
        ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>          mVersion;
    ::ll::TypedStorage<1, 1, bool const> mIsClient;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::BaseGameVersion const> mVersion;
    ::ll::TypedStorage<1, 1, bool const>               mIsClient;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ExitVehicleSystemImpl();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ExitVehicleSystemImpl();
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::StopRidingRequestComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::StrictExecutionContext<Filter<CanStandOnSnowFlagComponent, HasLightweightFamilyFlagComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent, StopRidingRequestComponent>, Read<AABBShapeComponent, MovementAbilitiesComponent, ActorTypeComponent, FallDistanceComponent, PassengerComponent, ActorGameTypeComponent, ActorDataFlagComponent, VehicleComponent, ActorRotationComponent, MobBodyRotationComponent, RenderRotationComponent, StandAnimationComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent, DimensionTypeComponent, EjectedByActivatorRailFlagComponent, PostTickPositionDeltaComponent>, Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>, AddRemove<ActorSetPositionRequestComponent>, GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<CanStandOnSnowFlagComponent, HasLightweightFamilyFlagComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent, StopRidingRequestComponent>, Read<AABBShapeComponent, MovementAbilitiesComponent, ActorTypeComponent, FallDistanceComponent, PassengerComponent, ActorGameTypeComponent, ActorDataFlagComponent, VehicleComponent, ActorRotationComponent, MobBodyRotationComponent, RenderRotationComponent, StandAnimationComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent, DimensionTypeComponent, EjectedByActivatorRailFlagComponent, PostTickPositionDeltaComponent>, Write<AABBShapeComponent, ActorRotationComponent, StateVectorComponent>, AddRemove<ActorSetPositionRequestComponent>, GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
#else // @header-generator platform
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::StopRidingRequestComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void _tickExitVehicle(
        ::StrictEntityContext const&                            entity,
        ::PassengerComponent const&                             passenger,
        ::AABBShapeComponent const&                             aabb,
        ::StateVectorComponent const&                           svc,
        ::OffsetsComponent const&                               offsetsComponent,
        ::ActorDataSeatOffsetComponent const&                   actorDataSeatOffset,
        ::ActorRotationComponent&                               rotation,
        ::Optional<::ExitFromPassengerFlagComponent const>      exitFromPassengerFlag,
        ::Optional<::ActorIsBeingDestroyedFlagComponent const>  actorIsBeingDestroyedFlag,
        ::Optional<::EjectedByActivatorRailFlagComponent const> ejectedByActivatorRailFlagComponent,
        ::BaseGameVersion const&                                baseGameVersion,
#endif // @header-generator platform
        ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
            StrictEntityContext,
            Include<VehicleComponent>,
            Exclude<DoesServerAuthOnlyDismountFlagComponent>,
            const StateVectorComponent,
            const ActorRotationComponent,
            const PostTickPositionDeltaComponent,
            Optional<const MovementInterpolatorComponent>> const&,
        ::EntityModifier<ActorSetPositionRequestComponent>&,
#else // @header-generator platform
            ::StrictEntityContext,
            ::Include<::VehicleComponent>,
            ::Exclude<::DoesServerAuthOnlyDismountFlagComponent>,
            ::StateVectorComponent const,
            ::ActorRotationComponent const,
            ::PostTickPositionDeltaComponent const,
            ::Optional<::MovementInterpolatorComponent const>> const& vehicleView,
        ::EntityModifier<::ActorSetPositionRequestComponent>&         modifier,
#endif // @header-generator platform
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::StopRidingRequestComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&   executionContext,
        bool                       isClientSide,
        ::IConstBlockSource const& region
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::StopRidingRequestComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
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
#else // @header-generator platform
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::StopRidingRequestComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
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
