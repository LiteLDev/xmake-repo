#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/block_source_visitor/CollisionShape.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform
#include "mc/entity/components/LocalConstBlockSource.h"
#include "mc/entity/components/LocalSpatialEntityFetcher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/AABB.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AABB;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct CollidableMobFlagComponent;
struct CollidableMobNearFlagComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FallingBlockFlagComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
#endif // @header-generator platform
struct LocalConstBlockSourceFactoryComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#ifndef LL_GENERATED_ANDROID_BASE_STUB_MOVECOLLISIONSYSTEM__SYSTEMBASE
#define LL_GENERATED_ANDROID_BASE_STUB_MOVECOLLISIONSYSTEM__SYSTEMBASE
namespace MoveCollisionSystem { class SystemBase {}; }
#endif
#else // @header-generator platform
struct MaxAutoStepComponent;
struct MinecartFlagComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
namespace BlockSourceVisitor { struct CollisionShape; }
#endif // @header-generator platform
// clang-format on

namespace MoveCollisionSystem {

#if defined(LL_PLAT_A) // @header-generator platform
struct System : public ::MoveCollisionSystem::SystemBase {
#else // @header-generator platform
struct System : public ::IStrictTickingSystem<::StrictExecutionContext<
                    ::Filter<
                        ::CanStandOnSnowFlagComponent,
                        ::HasLightweightFamilyFlagComponent,
                        ::HorseFlagComponent,
                        ::MobFlagComponent,
                        ::ParrotFlagComponent,
                        ::VehicleComponent,
                        ::CamelFlagComponent,
                        ::PlayerComponent,
                        ::CollidableMobFlagComponent,
                        ::FallingBlockFlagComponent>,
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
                        ::MaxAutoStepComponent,
                        ::CollidableMobNearFlagComponent,
                        ::MinecartFlagComponent>,
                    ::Write<::MoveRequestComponent>,
                    ::AddRemove<>,
                    ::GlobalRead<
                        ::ExternalDataComponent,
                        ::LocalConstBlockSourceFactoryComponent,
                        ::LocalSpatialEntityFetcherFactoryComponent>,
                    ::GlobalWrite<>,
                    ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // System inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct SpatialQueryFactories;
#else // @header-generator platform
#endif // @header-generator platform
    struct SpatialQueries;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct SpatialQueryFactories;
#endif // @header-generator platform
    // clang-format on

    // System inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct SpatialQueries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 280, ::LocalSpatialEntityFetcher> mFetcher;
        ::ll::TypedStorage<8, 280, ::LocalConstBlockSource>     mBlockSource;
        // NOLINTEND
    };

#endif // @header-generator platform
    struct SpatialQueryFactories {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::LocalConstBlockSourceFactoryComponent*>     mBlockSourceFactory;
        ::ll::TypedStorage<8, 8, ::LocalSpatialEntityFetcherFactoryComponent*> mFetcherFactory;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct SpatialQueries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 288, ::LocalSpatialEntityFetcher> mFetcher;
        ::ll::TypedStorage<8, 288, ::LocalConstBlockSource>     mBlockSource;
        // NOLINTEND
    };

    using CollisionShapeVec = std::vector<BlockSourceVisitor::CollisionShape>;
#else // @header-generator platform
    using CollisionShapeVec = ::std::vector<::BlockSourceVisitor::CollisionShape>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockSourceVisitor::CollisionShape>> mScratchTempCollisionShapes;
    ::ll::TypedStorage<8, 24, std::vector<BlockSourceVisitor::CollisionShape>> mScratchTempCollisionShapes2;
    ::ll::TypedStorage<8, 24, std::vector<AABB>>                               mScratchTempShapes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceVisitor::CollisionShape>> mScratchTempCollisionShapes;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceVisitor::CollisionShape>> mScratchTempCollisionShapes2;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>>                               mScratchTempShapes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
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
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
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
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;

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
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
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
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::MoveCollisionSystem::System::SpatialQueryFactories> createSpatialQueryFactories(
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
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
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
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
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
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );

    MCAPI void $singleTick(
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
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
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
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace MoveCollisionSystem
