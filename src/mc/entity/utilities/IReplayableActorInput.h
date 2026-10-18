#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityContext;
class EntityRegistry;
class MovementEffect;
struct ActorRotationComponent;
struct BlockPosTrackerComponent;
struct BuoyancyFloatRequestComponent;
struct ExternalDataSnapshotComponent;
struct InsideSlowingSweetBerryBushBlockComponent;
struct IsSolidMobNearbyComponent;
struct ItemUseSlowdownModifierComponent;
struct MoveInputComponent;
struct MovementInterpolatorComponent;
struct ReplayStateTrackerComponent;
struct RewindCollisionShapesComponent;
struct RiptideTridentSpinAttackComponent;
struct SpinAttackResultsComponent;
struct VehicleInputIntentComponent;
namespace BlockCollisionsSystem { struct BlockCollisionResolutionVectorComponent; }
namespace History { struct TurnInput; }
// clang-format on

struct IReplayableActorInput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IReplayableActorInput() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void preApplyInput(::EntityContext&) = 0;
#else // @header-generator platform
    virtual void preApplyInput(::EntityContext& e) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postApplyInput(::EntityContext&) = 0;
#else // @header-generator platform
    virtual void postApplyInput(::EntityContext& e) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyCollisionData(::EntityContext&) = 0;
#else // @header-generator platform
    virtual void applyCollisionData(::EntityContext& entity) = 0;
#endif // @header-generator platform

    virtual ::ExternalDataSnapshotComponent const& getSnapshot() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void captureExternalData(::EntityRegistry&) = 0;
#else // @header-generator platform
    virtual void captureExternalData(::EntityRegistry& registry) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::MovementInterpolatorComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::MoveInputComponent const& input) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::SpinAttackResultsComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::ReplayStateTrackerComponent const& tracker) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::RiptideTridentSpinAttackComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::ActorRotationComponent const& rot) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::IsSolidMobNearbyComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::History::TurnInput const& turn) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::VehicleInputIntentComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const& v) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::MovementEffect const&) = 0;
#else // @header-generator platform
    virtual void capture(::BlockPosTrackerComponent const& tracker) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::RewindCollisionShapesComponent&&) = 0;
#else // @header-generator platform
    virtual void capture(::BuoyancyComponent const& buoyancy) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::ItemUseSlowdownModifierComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::BuoyancyFloatRequestComponent const& request) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const& inside) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::BuoyancyFloatRequestComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::ItemUseSlowdownModifierComponent const& slowdown) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::BuoyancyComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::RewindCollisionShapesComponent&& shapes) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::BlockPosTrackerComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::MovementEffect const& movementEffect) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::VehicleInputIntentComponent const& vehicleIntent) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::History::TurnInput const&) = 0;
#else // @header-generator platform
    virtual void capture(::IsSolidMobNearbyComponent const& isSolidMobNearby) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::ActorRotationComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::RiptideTridentSpinAttackComponent const& riptideSpinAttack) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::ReplayStateTrackerComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::SpinAttackResultsComponent const& spinAttackResults) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::MoveInputComponent const&) = 0;
#else // @header-generator platform
    virtual void capture(::MovementInterpolatorComponent const& interpolator) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
