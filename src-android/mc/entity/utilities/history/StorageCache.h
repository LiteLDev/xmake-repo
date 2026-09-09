#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityId;
class EntityRegistry;
struct ActorRotationComponent;
struct BlockPosTrackerComponent;
struct BuoyancyFloatRequestComponent;
struct InsideSlowingSweetBerryBushBlockComponent;
struct IsSolidMobNearbyComponent;
struct ItemUseSlowdownModifierComponent;
struct MoveInputComponent;
struct MovementEffectsComponent;
struct MovementInterpolatorComponent;
struct ReplayStateTrackerComponent;
struct RewindCollisionShapesComponent;
struct RiptideTridentSpinAttackComponent;
struct SpinAttackResultsComponent;
struct VehicleInputIntentComponent;
namespace BlockCollisionsSystem { struct BlockCollisionResolutionVectorComponent; }
// clang-format on

namespace History {

struct StorageCache {
public:
    // StorageCache inner types define
    using Cache = ::entt::basic_view<
        entt::get_t<
            entt::basic_storage<
                InsideSlowingSweetBerryBushBlockComponent,
                EntityId,
                std::allocator<InsideSlowingSweetBerryBushBlockComponent>>,
            entt::basic_storage<BuoyancyFloatRequestComponent, EntityId, std::allocator<BuoyancyFloatRequestComponent>>,
            entt::basic_storage<
                ItemUseSlowdownModifierComponent,
                EntityId,
                std::allocator<ItemUseSlowdownModifierComponent>>,
            entt::basic_storage<
                BlockCollisionsSystem::BlockCollisionResolutionVectorComponent,
                EntityId,
                std::allocator<BlockCollisionsSystem::BlockCollisionResolutionVectorComponent>>,
            entt::basic_storage<
                RiptideTridentSpinAttackComponent,
                EntityId,
                std::allocator<RiptideTridentSpinAttackComponent>>,
            entt::basic_storage<MoveInputComponent, EntityId, std::allocator<MoveInputComponent>>,
            entt::basic_storage<ReplayStateTrackerComponent, EntityId, std::allocator<ReplayStateTrackerComponent>>,
            entt::basic_storage<ActorRotationComponent, EntityId, std::allocator<ActorRotationComponent>>,
            entt::basic_storage<BlockPosTrackerComponent, EntityId, std::allocator<BlockPosTrackerComponent>>,
            entt::
                basic_storage<RewindCollisionShapesComponent, EntityId, std::allocator<RewindCollisionShapesComponent>>,
            entt::basic_storage<MovementEffectsComponent, EntityId, std::allocator<MovementEffectsComponent>>,
            entt::basic_storage<IsSolidMobNearbyComponent, EntityId, std::allocator<IsSolidMobNearbyComponent>>,
            entt::basic_storage<SpinAttackResultsComponent, EntityId, std::allocator<SpinAttackResultsComponent>>,
            entt::basic_storage<BuoyancyComponent, EntityId, std::allocator<BuoyancyComponent>>,
            entt::basic_storage<VehicleInputIntentComponent, EntityId, std::allocator<VehicleInputIntentComponent>>,
            entt::
                basic_storage<MovementInterpolatorComponent, EntityId, std::allocator<MovementInterpolatorComponent>>>,
        entt::exclude_t<>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mCache;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageCache();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::History::StorageCache& getOrInit(::EntityRegistry&);
    // NOLINTEND
};

} // namespace History
