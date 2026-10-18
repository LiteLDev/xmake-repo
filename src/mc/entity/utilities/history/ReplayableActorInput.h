#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/BlockPosTrackerComponent.h"
#include "mc/entity/components/ExternalDataSnapshotComponent.h"
#include "mc/entity/components/ItemUseSlowdownModifierComponent.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/MovementEffectsComponent.h"
#include "mc/entity/components/MovementInterpolatorComponent.h"
#include "mc/entity/components/ReplayStateTrackerComponent.h"
#include "mc/entity/components/RewindCollisionShapesComponent.h"
#include "mc/entity/components/RiptideTridentSpinAttackComponent.h"
#include "mc/entity/components/SpinAttackResultsComponent.h"
#include "mc/entity/systems/block_collisions_system/BlockCollisionResolutionVectorComponent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/entity/utilities/IReplayableActorInput.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/utilities/history/ComponentBitset.h"
#include "mc/entity/utilities/history/TurnInput.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityContext;
class EntityRegistry;
class MovementEffect;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorRotationComponent;
struct BlockPosTrackerComponent;
#endif // @header-generator platform
struct BuoyancyFloatRequestComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ExternalDataSnapshotComponent;
#endif // @header-generator platform
struct InsideSlowingSweetBerryBushBlockComponent;
struct IsSolidMobNearbyComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemUseSlowdownModifierComponent;
struct MoveInputComponent;
struct MovementInterpolatorComponent;
struct ReplayStateTrackerComponent;
struct RewindCollisionShapesComponent;
struct RiptideTridentSpinAttackComponent;
struct SpinAttackResultsComponent;
#endif // @header-generator platform
struct VehicleInputIntentComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace BlockCollisionsSystem { struct BlockCollisionResolutionVectorComponent; }
#endif // @header-generator platform
namespace History { struct EntityWithCache; }
namespace History { struct NonPlayerComponents; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace History { struct TurnInput; }
#endif // @header-generator platform
// clang-format on

namespace History {

struct ReplayableActorInput : public ::IReplayableActorInput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<4, 4> mHasComponent;
    ::ll::TypedStorage<4, 24, ::ExternalDataSnapshotComponent> mExternalData;
    ::ll::TypedStorage<4, 4, ::ItemUseSlowdownModifierComponent> mItemUseSlowdownModifier;
    ::ll::TypedStorage<4, 12, ::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent> mBlockCollisionResolution;
    ::ll::TypedStorage<4, 4, ::RiptideTridentSpinAttackComponent> mRiptideSpinAttack;
    ::ll::TypedStorage<4, 100, ::MoveInputComponent> mMoveInput;
    ::ll::TypedStorage<8, 104, ::ReplayStateTrackerComponent> mReplayStateTracker;
    ::ll::TypedStorage<4, 16, ::ActorRotationComponent> mActorRotation;
    ::ll::TypedStorage<8, 24, std::vector<History::TurnInput>> mTurnInput;
    ::ll::TypedStorage<8, 40, ::BlockPosTrackerComponent> mBlockPosTracker;
    ::ll::TypedStorage<8, 96, ::RewindCollisionShapesComponent> mRewindCollisionShapes;
    ::ll::TypedStorage<8, 24, ::MovementEffectsComponent> mMovementEffects;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IsSolidMobNearbyComponent>> mIsSolidMobNearby;
    ::ll::TypedStorage<8, 24, ::SpinAttackResultsComponent> mSpinAttackResults;
    ::ll::TypedStorage<4, 40, ::MovementInterpolatorComponent> mInterpolator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<History::NonPlayerComponents>> mNonPlayer;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>   mUnk8266f1;
    ::ll::UntypedStorage<4, 24>  mUnk22b25e;
    ::ll::UntypedStorage<4, 4>   mUnk834abd;
    ::ll::UntypedStorage<4, 12>  mUnk3826b7;
    ::ll::UntypedStorage<4, 4>   mUnk704c8f;
    ::ll::UntypedStorage<4, 100> mUnkea9050;
    ::ll::UntypedStorage<8, 104> mUnk1e608c;
    ::ll::UntypedStorage<4, 16>  mUnkf67562;
    ::ll::UntypedStorage<8, 24>  mUnk7823f6;
    ::ll::UntypedStorage<8, 40>  mUnk2879ec;
    ::ll::UntypedStorage<8, 96>  mUnkd13a8f;
    ::ll::UntypedStorage<8, 24>  mUnk437307;
    ::ll::UntypedStorage<8, 8>   mUnk13f384;
    ::ll::UntypedStorage<8, 24>  mUnk52db17;
    ::ll::UntypedStorage<4, 40>  mUnke959f2;
    ::ll::UntypedStorage<8, 8>   mUnk27a3aa;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ReplayableActorInput& operator=(ReplayableActorInput const&);
    ReplayableActorInput(ReplayableActorInput const&);
    ReplayableActorInput();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ReplayableActorInput();
#else // @header-generator platform
    virtual void preApplyInput(::EntityContext& e) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void preApplyInput(::EntityContext&);
#else // @header-generator platform
    virtual void postApplyInput(::EntityContext& e) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postApplyInput(::EntityContext&);
#else // @header-generator platform
    virtual void applyCollisionData(::EntityContext& entity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyCollisionData(::EntityContext&);
#else // @header-generator platform
    virtual ::ExternalDataSnapshotComponent const& getSnapshot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ExternalDataSnapshotComponent const& getSnapshot() const;
#else // @header-generator platform
    virtual void captureExternalData(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void captureExternalData(::EntityRegistry&);
#else // @header-generator platform
    virtual void capture(::MoveInputComponent const& input) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::MovementInterpolatorComponent const&);
#else // @header-generator platform
    virtual void capture(::ReplayStateTrackerComponent const& tracker) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::SpinAttackResultsComponent const&);
#else // @header-generator platform
    virtual void capture(::ActorRotationComponent const& rot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::RiptideTridentSpinAttackComponent const&);
#else // @header-generator platform
    virtual void capture(::History::TurnInput const& turn) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::IsSolidMobNearbyComponent const&);
#else // @header-generator platform
    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const& v) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::VehicleInputIntentComponent const&);
#else // @header-generator platform
    virtual void capture(::BlockPosTrackerComponent const& tracker) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::MovementEffect const&);
#else // @header-generator platform
    virtual void capture(::BuoyancyComponent const& buoyancy) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::RewindCollisionShapesComponent&&);
#else // @header-generator platform
    virtual void capture(::BuoyancyFloatRequestComponent const& request) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::ItemUseSlowdownModifierComponent const&);
#else // @header-generator platform
    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const& inside) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const&);
#else // @header-generator platform
    virtual void capture(::ItemUseSlowdownModifierComponent const& slowdown) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::BuoyancyFloatRequestComponent const&);
#else // @header-generator platform
    virtual void capture(::RewindCollisionShapesComponent&& shapes) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::BuoyancyComponent const&);
#else // @header-generator platform
    virtual void capture(::MovementEffect const& movementEffect) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::BlockPosTrackerComponent const&);
#else // @header-generator platform
    virtual void capture(::VehicleInputIntentComponent const& vehicleIntent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const&);
#else // @header-generator platform
    virtual void capture(::IsSolidMobNearbyComponent const& isSolidMobNearby) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::History::TurnInput const&);
#else // @header-generator platform
    virtual void capture(::RiptideTridentSpinAttackComponent const& riptideSpinAttack) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::ActorRotationComponent const&);
#else // @header-generator platform
    virtual void capture(::SpinAttackResultsComponent const& spinAttackResults) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void capture(::ReplayStateTrackerComponent const&);

    virtual void capture(::MoveInputComponent const&);
#else // @header-generator platform
    virtual void capture(::MovementInterpolatorComponent const& interpolator) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyCollisionData(::History::EntityWithCache&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void applyCollisionData(::History::EntityWithCache& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::History::NonPlayerComponents& getOrCreateNonPlayerComponents();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $preApplyInput(::EntityContext&);
#else // @header-generator platform
    MCNAPI void $preApplyInput(::EntityContext& e);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postApplyInput(::EntityContext&);
#else // @header-generator platform
    MCNAPI void $postApplyInput(::EntityContext& e);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyCollisionData(::EntityContext&);
#else // @header-generator platform
    MCNAPI void $applyCollisionData(::EntityContext& entity);
#endif // @header-generator platform

    MCNAPI ::ExternalDataSnapshotComponent const& $getSnapshot() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $captureExternalData(::EntityRegistry&);
#else // @header-generator platform
    MCNAPI void $captureExternalData(::EntityRegistry& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::MovementInterpolatorComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::MoveInputComponent const& input);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::SpinAttackResultsComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::ReplayStateTrackerComponent const& tracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::RiptideTridentSpinAttackComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::ActorRotationComponent const& rot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::IsSolidMobNearbyComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::History::TurnInput const& turn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::VehicleInputIntentComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const& v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::MovementEffect const&);
#else // @header-generator platform
    MCNAPI void $capture(::BlockPosTrackerComponent const& tracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::RewindCollisionShapesComponent&&);
#else // @header-generator platform
    MCNAPI void $capture(::BuoyancyComponent const& buoyancy);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::ItemUseSlowdownModifierComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::BuoyancyFloatRequestComponent const& request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::InsideSlowingSweetBerryBushBlockComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::InsideSlowingSweetBerryBushBlockComponent const& inside);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::BuoyancyFloatRequestComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::ItemUseSlowdownModifierComponent const& slowdown);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::BuoyancyComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::RewindCollisionShapesComponent&& shapes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::BlockPosTrackerComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::MovementEffect const& movementEffect);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::VehicleInputIntentComponent const& vehicleIntent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::History::TurnInput const&);
#else // @header-generator platform
    MCNAPI void $capture(::IsSolidMobNearbyComponent const& isSolidMobNearby);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::ActorRotationComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::RiptideTridentSpinAttackComponent const& riptideSpinAttack);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::ReplayStateTrackerComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::SpinAttackResultsComponent const& spinAttackResults);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $capture(::MoveInputComponent const&);
#else // @header-generator platform
    MCNAPI void $capture(::MovementInterpolatorComponent const& interpolator);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
